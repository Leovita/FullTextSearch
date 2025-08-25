import time
import json
import statistics
import pandas as pd
import matplotlib.pyplot as plt
from typing import Dict, List, Any, Tuple
from dataclasses import dataclass
from postgresql_engine import PostgreSQLSearchEngine
from cache_system import PostgreSQLCachedSearchEngine
import seaborn as sns
import os
from dataclasses import dataclass

@dataclass
class BenchmarkQuery:
    """Struttura per le query del benchmark."""
    id: str
    query: str
    method: str  # 'search', 'boolean', 'phrase', 'field'
    expected_min_results: int = 0
    description: str = ""

class PostgreSQLBenchmark:
    """
    Sistema di benchmark completo per PostgreSQL full-text search.
    Testa performance, precision e recall con query definite.
    """
    
    def __init__(self, config_file: str = "./utils/benchmark_queries_config.json"):
        """Inizializza il benchmark caricando query da file di configurazione."""
        self.results = {
            'queries': [],
            'summary': {},
            'performance_comparison': {},
            'cache_performance': {}
        }
        
        self.config_file = config_file
        self.test_queries = []
        self.relevant_docs = {}
        
        # Carica configurazione
        self._load_queries_config()
        
        print("🏁 Sistema Benchmark PostgreSQL inizializzato")
        print(f"   📋 {len(self.test_queries)} query caricate da {config_file}")

    def _load_queries_config(self):
        """Carica query e configurazione da file JSON."""
        try:
            if not os.path.exists(self.config_file):
                print(f"❌ File configurazione non trovato: {self.config_file}")
                print("   Creando configurazione di esempio...")
                self._create_sample_config()

            with open(self.config_file, 'r', encoding='utf-8') as f:
                config = json.load(f)

            # Carica query
            for query_data in config.get('test_queries', []):
                self.test_queries.append(BenchmarkQuery(
                    id=query_data['id'],
                    query=query_data['query'],
                    method=query_data['method'],
                    expected_min_results=query_data.get('expected_min_results', 0),
                    description=query_data.get('description', '')
                ))

                # Carica documenti rilevanti per IR metrics
                if 'relevant_docs' in query_data:
                    self.relevant_docs[query_data['id']] = query_data['relevant_docs']

            # Carica impostazioni benchmark
            self.benchmark_settings = config.get('benchmark_settings', {
                'default_iterations': 5,
                'default_limit': 20,
                'cache_iterations': 3
            })

            print(f"✅ Configurazione caricata: {len(self.test_queries)} query")

            # Mostra summary categorie
            categories = config.get('query_categories', {})
            if categories:
                print("   📊 Categorie query:")
                for cat, info in categories.items():
                    query_count = len(info.get('queries', []))
                    print(f"     {cat}: {query_count} query")

        except Exception as e:
            print(f"❌ Errore caricamento configurazione: {e}")
            print("   Usando query di fallback...")
            self._create_fallback_queries()

    def _create_sample_config(self):
        """Crea file di configurazione di esempio se mancante."""
        # Implementazione per creare config di esempio se necessario
        print("   ⚠️  Implementare creazione config di esempio se necessario")

    def _create_fallback_queries(self):
        """Crea query di fallback se la configurazione non si carica."""
        self.test_queries = [
            BenchmarkQuery(
                id="Q1",
                query="test search",
                method="search", 
                expected_min_results=1,
                description="Query di fallback"
            )
        ]
        self.relevant_docs = {"Q1": [1]}
    
    def run_performance_benchmark(self, iterations: int = None) -> Dict[str, Any]:
        """
        Esegue benchmark delle performance senza cache.
        
        Args:
            iterations: Numero di iterazioni per query
            
        Returns:
            Risultati del benchmark
        """
        if iterations is None:
            iterations = self.benchmark_settings.get('default_iterations', 5)
            
        print(f"\n🔥 Avvio benchmark performance ({iterations} iterazioni)")
        print("=" * 60)
        
        performance_results = []
        
        try:
            with PostgreSQLSearchEngine() as engine:
                
                for query_obj in self.test_queries:
                    print(f"\n📊 Testing {query_obj.id}: {query_obj.description}")
                    print(f"   Query: '{query_obj.query}' (method: {query_obj.method})")
                    
                    execution_times = []
                    results_counts = []
                    
                    for iteration in range(iterations):
                        start_time = time.perf_counter()
                        
                        try:
                            # Esegui query in base al metodo
                            if query_obj.method == "search":
                                results = engine.search(query_obj.query, limit=20)
                            elif query_obj.method == "boolean":
                                results = engine.boolean_search(query_obj.query, limit=20)
                            elif query_obj.method == "phrase":
                                results = engine.phrase_search(query_obj.query, limit=20)
                            elif query_obj.method == "field":
                                results = engine.field_search("title", query_obj.query, limit=20)
                            else:
                                results = engine.search(query_obj.query, limit=20)
                            
                            end_time = time.perf_counter()
                            execution_time = (end_time - start_time) * 1000  # ms
                            
                            execution_times.append(execution_time)
                            results_counts.append(len(results))
                            
                            print(f"     Iter {iteration+1}: {execution_time:.2f}ms, {len(results)} risultati")
                            
                        except Exception as e:
                            print(f"     ❌ Errore iterazione {iteration+1}: {e}")
                            continue
                    
                    if execution_times:
                        # Calcola statistiche
                        stats = {
                            'query_id': query_obj.id,
                            'query': query_obj.query,
                            'method': query_obj.method,
                            'description': query_obj.description,
                            'avg_time_ms': statistics.mean(execution_times),
                            'min_time_ms': min(execution_times),
                            'max_time_ms': max(execution_times),
                            'median_time_ms': statistics.median(execution_times),
                            'std_dev_ms': statistics.stdev(execution_times) if len(execution_times) > 1 else 0,
                            'avg_results': statistics.mean(results_counts),
                            'min_results': min(results_counts),
                            'max_results': max(results_counts),
                            'meets_expected': min(results_counts) >= query_obj.expected_min_results,
                            'iterations': len(execution_times)
                        }
                        
                        performance_results.append(stats)
                        
                        print(f"   ✅ Completato: {stats['avg_time_ms']:.2f}ms avg, {stats['avg_results']:.1f} results avg")
                    
                # Calcola summary
                if performance_results:
                    all_times = [r['avg_time_ms'] for r in performance_results]
                    all_results = [r['avg_results'] for r in performance_results]
                    meets_expected = sum(1 for r in performance_results if r['meets_expected'])
                    
                    summary = {
                        'total_queries': len(performance_results),
                        'avg_response_time_ms': statistics.mean(all_times),
                        'total_response_time_ms': sum(all_times),
                        'fastest_query_ms': min(all_times),
                        'slowest_query_ms': max(all_times),
                        'avg_results_per_query': statistics.mean(all_results),
                        'queries_meeting_expectations': meets_expected,
                        'success_rate': (meets_expected / len(performance_results)) * 100
                    }
                    
                    print(f"\n📈 SUMMARY PERFORMANCE:")
                    print(f"   Tempo medio risposta: {summary['avg_response_time_ms']:.2f}ms")
                    print(f"   Query più veloce: {summary['fastest_query_ms']:.2f}ms")
                    print(f"   Query più lenta: {summary['slowest_query_ms']:.2f}ms")
                    print(f"   Risultati medi per query: {summary['avg_results_per_query']:.1f}")
                    print(f"   Success rate: {summary['success_rate']:.1f}%")
                    
                    return {
                        'queries': performance_results,
                        'summary': summary,
                        'timestamp': time.strftime("%Y-%m-%d %H:%M:%S")
                    }
                
        except Exception as e:
            print(f"💥 Errore benchmark: {e}")
            
        return {'queries': [], 'summary': {}, 'error': 'Benchmark fallito'}
    
    def run_cache_comparison(self, iterations: int = 3) -> Dict[str, Any]:
        """
        Confronta performance con e senza cache.
        
        Args:
            iterations: Numero di iterazioni
            
        Returns:
            Risultati comparativi
        """
        print(f"\n🚀 Benchmark confronto cache vs no-cache")
        print("=" * 60)
        
        comparison_results = []
        
        try:
            # Test senza cache
            print("\n🔄 Phase 1: Test SENZA cache")
            with PostgreSQLSearchEngine() as engine_nocache:
                no_cache_times = {}
                
                for query_obj in self.test_queries[:5]:  # Solo prime 5 per tempo
                    print(f"   Testing {query_obj.id}: {query_obj.query}")
                    
                    times = []
                    for _ in range(iterations):
                        start = time.perf_counter()
                        
                        if query_obj.method == "search":
                            results = engine_nocache.search(query_obj.query, limit=10)
                        elif query_obj.method == "boolean":
                            results = engine_nocache.boolean_search(query_obj.query, limit=10)
                        elif query_obj.method == "phrase":
                            results = engine_nocache.phrase_search(query_obj.query, limit=10)
                        else:
                            results = engine_nocache.search(query_obj.query, limit=10)
                        
                        times.append((time.perf_counter() - start) * 1000)
                    
                    no_cache_times[query_obj.id] = {
                        'avg_time': statistics.mean(times),
                        'result_count': len(results) if 'results' in locals() else 0
                    }
                    
                    print(f"     Tempo medio: {no_cache_times[query_obj.id]['avg_time']:.2f}ms")
            
            # Test con cache
            print("\n💾 Phase 2: Test CON cache")
            with PostgreSQLCachedSearchEngine() as engine_cache:
                
                for query_obj in self.test_queries[:5]:
                    print(f"   Testing {query_obj.id}: {query_obj.query}")
                    
                    # Prima esecuzione (cache miss)
                    start = time.perf_counter()
                    if query_obj.method == "search":
                        results = engine_cache.search_cached(query_obj.query, limit=10)
                    elif query_obj.method == "boolean":
                        results = engine_cache.boolean_search_cached(query_obj.query, limit=10)
                    elif query_obj.method == "phrase":
                        results = engine_cache.phrase_search_cached(query_obj.query, limit=10)
                    else:
                        results = engine_cache.search_cached(query_obj.query, limit=10)
                    first_time = (time.perf_counter() - start) * 1000
                    
                    # Successive esecuzioni (cache hit)
                    cache_hit_times = []
                    for _ in range(iterations):
                        start = time.perf_counter()
                        if query_obj.method == "search":
                            results = engine_cache.search_cached(query_obj.query, limit=10)
                        elif query_obj.method == "boolean":
                            results = engine_cache.boolean_search_cached(query_obj.query, limit=10)
                        elif query_obj.method == "phrase":
                            results = engine_cache.phrase_search_cached(query_obj.query, limit=10)
                        else:
                            results = engine_cache.search_cached(query_obj.query, limit=10)
                        cache_hit_times.append((time.perf_counter() - start) * 1000)
                    
                    avg_cache_hit = statistics.mean(cache_hit_times)
                    no_cache_avg = no_cache_times[query_obj.id]['avg_time']
                    speedup = no_cache_avg / avg_cache_hit if avg_cache_hit > 0 else 0
                    
                    comparison_result = {
                        'query_id': query_obj.id,
                        'query': query_obj.query,
                        'no_cache_avg_ms': no_cache_avg,
                        'cache_miss_ms': first_time,
                        'cache_hit_avg_ms': avg_cache_hit,
                        'speedup_factor': speedup,
                        'cache_efficiency': ((no_cache_avg - avg_cache_hit) / no_cache_avg) * 100 if no_cache_avg > 0 else 0
                    }
                    
                    comparison_results.append(comparison_result)
                    
                    print(f"     No cache: {no_cache_avg:.2f}ms")
                    print(f"     Cache hit: {avg_cache_hit:.2f}ms") 
                    print(f"     Speedup: {speedup:.1f}x")
                
                # Cache statistics
                cache_stats = engine_cache.get_cache_stats()
            
            # Summary comparison
            if comparison_results:
                avg_speedup = statistics.mean([r['speedup_factor'] for r in comparison_results])
                avg_efficiency = statistics.mean([r['cache_efficiency'] for r in comparison_results])
                
                summary = {
                    'avg_speedup_factor': avg_speedup,
                    'avg_cache_efficiency_pct': avg_efficiency,
                    'total_queries_tested': len(comparison_results),
                    'cache_stats': cache_stats
                }
                
                print(f"\n📊 CACHE COMPARISON SUMMARY:")
                print(f"   Speedup medio: {avg_speedup:.1f}x")
                print(f"   Efficienza media cache: {avg_efficiency:.1f}%")
                print(f"   Cache hit rate: {cache_stats['query_cache']['hit_rate']:.1f}%")
                
                return {
                    'comparisons': comparison_results,
                    'summary': summary,
                    'timestamp': time.strftime("%Y-%m-%d %H:%M:%S")
                }
                
        except Exception as e:
            print(f"💥 Errore cache comparison: {e}")
        
        return {'comparisons': [], 'summary': {}}
    
    def calculate_ir_metrics(self, relevant_docs: Dict[str, List[int]] = None) -> Dict[str, Any]:
        """
        Calcola metriche IR standard (Precision, Recall, F-measure).
        
        Args:
            relevant_docs: Dizionario {query_id: [doc_ids_rilevanti]}
            
        Returns:
            Metriche IR
        """
        print(f"\n📏 Calcolo metriche Information Retrieval")
        
        # Documenti rilevanti simulati per le query di test
        if relevant_docs is None:
            relevant_docs = self.relevant_docs
            if not relevant_docs:
                print("⚠️  Nessun documento rilevante definito nella configurazione")
                print("   Le metriche IR potrebbero non essere accurate")
                # Fallback per evitare errori
                relevant_docs = {q.id: [1, 2, 3] for q in self.test_queries}
        
        ir_metrics = []
        
        try:
            with PostgreSQLSearchEngine() as engine:
                
                for query_obj in self.test_queries:
                    print(f"   Calculating metrics for {query_obj.id}")
                    
                    # Esegui query per ottenere risultati
                    if query_obj.method == "search":
                        results = engine.search(query_obj.query, limit=20)
                    elif query_obj.method == "boolean":
                        results = engine.boolean_search(query_obj.query, limit=20)
                    elif query_obj.method == "phrase":
                        results = engine.phrase_search(query_obj.query, limit=20)
                    elif query_obj.method == "field":
                        results = engine.field_search("title", query_obj.query, limit=20)
                    else:
                        results = engine.search(query_obj.query, limit=20)
                    
                    # Estrai ID documenti restituiti
                    retrieved_docs = [r['id'] for r in results]
                    relevant_for_query = relevant_docs.get(query_obj.id, [])
                    
                    # Calcola metriche
                    retrieved_relevant = list(set(retrieved_docs) & set(relevant_for_query))
                    
                    precision = len(retrieved_relevant) / len(retrieved_docs) if retrieved_docs else 0
                    recall = len(retrieved_relevant) / len(relevant_for_query) if relevant_for_query else 0
                    f1_score = (2 * precision * recall) / (precision + recall) if (precision + recall) > 0 else 0
                    
                    metrics = {
                        'query_id': query_obj.id,
                        'query': query_obj.query,
                        'retrieved_count': len(retrieved_docs),
                        'relevant_count': len(relevant_for_query),
                        'retrieved_relevant_count': len(retrieved_relevant),
                        'precision': precision,
                        'recall': recall,
                        'f1_score': f1_score,
                        'retrieved_docs': retrieved_docs[:10],  # Prime 10 per brevità
                        'relevant_docs': relevant_for_query
                    }
                    
                    ir_metrics.append(metrics)
                    
                    print(f"     P: {precision:.3f}, R: {recall:.3f}, F1: {f1_score:.3f}")
                
                # Calcola metriche medie
                if ir_metrics:
                    avg_precision = statistics.mean([m['precision'] for m in ir_metrics])
                    avg_recall = statistics.mean([m['recall'] for m in ir_metrics])
                    avg_f1 = statistics.mean([m['f1_score'] for m in ir_metrics])
                    
                    summary_metrics = {
                        'mean_average_precision': avg_precision,
                        'mean_average_recall': avg_recall, 
                        'mean_average_f1': avg_f1,
                        'total_queries_evaluated': len(ir_metrics)
                    }
                    
                    print(f"\n📊 METRICHE IR SUMMARY:")
                    print(f"   Mean Average Precision: {avg_precision:.3f}")
                    print(f"   Mean Average Recall: {avg_recall:.3f}")
                    print(f"   Mean Average F1-Score: {avg_f1:.3f}")
                    
                    return {
                        'queries': ir_metrics,
                        'summary': summary_metrics,
                        'timestamp': time.strftime("%Y-%m-%d %H:%M:%S")
                    }
                    
        except Exception as e:
            print(f"💥 Errore calcolo metriche IR: {e}")
        
        return {'queries': [], 'summary': {}}
    
    def generate_benchmark_report(self, save_file: str = "./stats/json/benchmark_report.json"):
        """Genera report completo del benchmark."""
        print(f"\n📋 Generazione report completo benchmark")
        print("=" * 60)
        
        # Esegui tutti i benchmark
        print("1️⃣ Performance benchmark...")
        performance_results = self.run_performance_benchmark(iterations=3)
        
        print("\n2️⃣ Cache comparison...")
        cache_results = self.run_cache_comparison(iterations=3)
        
        print("\n3️⃣ IR metrics...")
        ir_results = self.calculate_ir_metrics()
        
        # Compila report finale
        final_report = {
            'benchmark_info': {
                'timestamp': time.strftime("%Y-%m-%d %H:%M:%S"),
                'total_test_queries': len(self.test_queries),
                'system': 'PostgreSQL Full-Text Search',
                'test_environment': 'Local Development'
            },
            'performance_benchmark': performance_results,
            'cache_comparison': cache_results,
            'ir_metrics': ir_results,
            'recommendations': self._generate_recommendations(performance_results, cache_results, ir_results)
        }
        
        # Salva report
        try:
            with open(save_file, 'w', encoding='utf-8') as f:
                json.dump(final_report, f, indent=2, ensure_ascii=False, default=str)
            print(f"\n💾 Report salvato in: {save_file}")
        except Exception as e:
            print(f"❌ Errore salvataggio report: {e}")
        
        # Genera grafici
        self._generate_benchmark_charts(final_report)
        
        return final_report
    
    def _generate_recommendations(self, perf_results: Dict, cache_results: Dict, ir_results: Dict) -> List[str]:
        """Genera raccomandazioni basate sui risultati."""
        recommendations = []
        
        # Analisi performance
        if perf_results and 'summary' in perf_results:
            avg_time = perf_results['summary'].get('avg_response_time_ms', 0)
            if avg_time > 100:
                recommendations.append(f"⚡ Tempo risposta alto ({avg_time:.1f}ms) - considera ottimizzazione indici")
            if perf_results['summary'].get('success_rate', 0) < 80:
                recommendations.append("🎯 Success rate basso - rivedere query o dataset")
        
        # Analisi cache
        if cache_results and 'summary' in cache_results:
            speedup = cache_results['summary'].get('avg_speedup_factor', 0)
            if speedup > 2:
                recommendations.append(f"🚀 Cache molto efficace ({speedup:.1f}x speedup) - implementa in produzione")
            elif speedup < 1.5:
                recommendations.append("💾 Cache poco efficace - rivedi strategia caching")
        
        # Analisi IR metrics
        if ir_results and 'summary' in ir_results:
            precision = ir_results['summary'].get('mean_average_precision', 0)
            recall = ir_results['summary'].get('mean_average_recall', 0)
            
            if precision < 0.5:
                recommendations.append("🎯 Precision bassa - ottimizza ranking e query processing")
            if recall < 0.5:
                recommendations.append("🔍 Recall basso - migliora copertura indici full-text")
        
        # Raccomandazioni generali
        recommendations.extend([
            "📊 Implementa monitoraggio continuo delle performance",
            "🔄 Pianifica benchmark regolari dopo modifiche",
            "⚙️ Considera ottimizzazione parametri PostgreSQL",
            "📈 Valuta implementazione sistema di ranking personalizzato"
        ])
        
        return recommendations
    
    def _generate_benchmark_charts(self, report: Dict):
        """Genera grafici dai risultati del benchmark."""
        try:
            plt.style.use('default')
            fig, axes = plt.subplots(2, 2, figsize=(15, 10))
            fig.suptitle('PostgreSQL Benchmark Results', fontsize=16, fontweight='bold')
            
            # 1. Performance by Query
            if 'performance_benchmark' in report and report['performance_benchmark']['queries']:
                perf_data = report['performance_benchmark']['queries']
                query_ids = [q['query_id'] for q in perf_data]
                avg_times = [q['avg_time_ms'] for q in perf_data]
                
                axes[0,0].bar(query_ids, avg_times, color='skyblue', alpha=0.7)
                axes[0,0].set_title('Response Time by Query')
                axes[0,0].set_ylabel('Time (ms)')
                axes[0,0].tick_params(axis='x', rotation=45)
                
                # Aggiungi valori sulle barre
                for i, v in enumerate(avg_times):
                    axes[0,0].text(i, v + max(avg_times)*0.01, f'{v:.1f}', ha='center')
            
            # 2. Cache Performance Comparison
            if 'cache_comparison' in report and report['cache_comparison']['comparisons']:
                cache_data = report['cache_comparison']['comparisons']
                queries = [c['query_id'] for c in cache_data]
                no_cache = [c['no_cache_avg_ms'] for c in cache_data]
                with_cache = [c['cache_hit_avg_ms'] for c in cache_data]
                
                x = range(len(queries))
                width = 0.35
                
                axes[0,1].bar([i - width/2 for i in x], no_cache, width, label='No Cache', alpha=0.7)
                axes[0,1].bar([i + width/2 for i in x], with_cache, width, label='With Cache', alpha=0.7)
                axes[0,1].set_title('Cache vs No Cache Performance')
                axes[0,1].set_ylabel('Time (ms)')
                axes[0,1].set_xticks(x)
                axes[0,1].set_xticklabels(queries)
                axes[0,1].legend()
                axes[0,1].tick_params(axis='x', rotation=45)
            
            # 3. IR Metrics
            if 'ir_metrics' in report and report['ir_metrics']['queries']:
                ir_data = report['ir_metrics']['queries']
                query_ids = [q['query_id'] for q in ir_data]
                precision = [q['precision'] for q in ir_data]
                recall = [q['recall'] for q in ir_data]
                f1 = [q['f1_score'] for q in ir_data]
                
                x = range(len(query_ids))
                width = 0.25
                
                axes[1,0].bar([i - width for i in x], precision, width, label='Precision', alpha=0.7)
                axes[1,0].bar(x, recall, width, label='Recall', alpha=0.7)
                axes[1,0].bar([i + width for i in x], f1, width, label='F1-Score', alpha=0.7)
                axes[1,0].set_title('Information Retrieval Metrics')
                axes[1,0].set_ylabel('Score')
                axes[1,0].set_xticks(x)
                axes[1,0].set_xticklabels(query_ids)
                axes[1,0].legend()
                axes[1,0].tick_params(axis='x', rotation=45)
                axes[1,0].set_ylim(0, 1.1)
            
            # 4. Summary Statistics
            axes[1,1].axis('off')
            summary_text = "BENCHMARK SUMMARY\n\n"
            
            if 'performance_benchmark' in report and 'summary' in report['performance_benchmark']:
                perf_sum = report['performance_benchmark']['summary']
                summary_text += f"Performance:\n"
                summary_text += f"  Avg Response: {perf_sum.get('avg_response_time_ms', 0):.1f}ms\n"
                summary_text += f"  Success Rate: {perf_sum.get('success_rate', 0):.1f}%\n\n"
            
            if 'cache_comparison' in report and 'summary' in report['cache_comparison']:
                cache_sum = report['cache_comparison']['summary']
                summary_text += f"Cache Performance:\n"
                summary_text += f"  Avg Speedup: {cache_sum.get('avg_speedup_factor', 0):.1f}x\n"
                summary_text += f"  Cache Efficiency: {cache_sum.get('avg_cache_efficiency_pct', 0):.1f}%\n\n"
            
            if 'ir_metrics' in report and 'summary' in report['ir_metrics']:
                ir_sum = report['ir_metrics']['summary']
                summary_text += f"IR Metrics:\n"
                summary_text += f"  MAP: {ir_sum.get('mean_average_precision', 0):.3f}\n"
                summary_text += f"  MAR: {ir_sum.get('mean_average_recall', 0):.3f}\n"
                summary_text += f"  MAF1: {ir_sum.get('mean_average_f1', 0):.3f}\n"
            
            axes[1,1].text(0.1, 0.9, summary_text, transform=axes[1,1].transAxes,
                          fontfamily='monospace', fontsize=10, verticalalignment='top')
            
            plt.tight_layout()
            plt.savefig('./stats/images/postgresql_benchmark_results.png', dpi=300, bbox_inches='tight')
            plt.show()

            print("📊 Grafici salvati in: ./stats/images/postgresql_benchmark_results.png")

        except Exception as e:
            print(f"❌ Errore generazione grafici: {e}")


def main():
    """Funzione principale per eseguire il benchmark completo."""
    print("🏁 POSTGRESQL FULL-TEXT SEARCH BENCHMARK")
    print("=" * 70)
    print("Sistema di benchmark completo per valutare:")
    print("• Performance e tempi di risposta")
    print("• Efficacia del sistema di caching") 
    print("• Metriche Information Retrieval (P, R, F1)")
    print("=" * 70)
    
    try:
        benchmark = PostgreSQLBenchmark()
        
        # Genera report completo
        report = benchmark.generate_benchmark_report()
        
        print("\n" + "=" * 70)
        print("✅ BENCHMARK COMPLETATO!")
        print(f"📄 Report: ./stats/json/benchmark_report.json")
        print(f"📊 Grafici: ./stats/images/postgresql_benchmark_results.png")
        print("=" * 70)
        
        # Stampa raccomandazioni finali
        if 'recommendations' in report:
            print("\n🎯 RACCOMANDAZIONI:")
            for i, rec in enumerate(report['recommendations'], 1):
                print(f"   {i}. {rec}")
        
    except Exception as e:
        print(f"💥 Errore durante benchmark: {e}")


if __name__ == "__main__":
    main()