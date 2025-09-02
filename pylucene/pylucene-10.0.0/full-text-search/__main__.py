#!/usr/bin/env python3

import os
import sys
import time
import datetime
import json
from PyLuceneUnifiedInterface import PyLuceneUnifiedInterface

sys.path.append('../../../scripts')
from export_results import export_to_json

try:
    from generate_charts import SearchPerformanceAnalyzer
    CHARTS_AVAILABLE = True
except ImportError as e:
    print(f"Warning: generate_charts.py non disponibile: {e}")
    print("I grafici non verranno generati")
    CHARTS_AVAILABLE = False


def print_results(results, query_text, ranking_name):
    if not results or results['total_results'] == 0:
        print(f"[{ranking_name}] Nessun risultato trovato")
        return
    
    print(f"\n[{ranking_name}] Query: '{query_text}'")
    print(f"[{ranking_name}] Risultati trovati: {results['total_results']}")
    
    for i, result in enumerate(results['results'], 1):
        print(f"[{ranking_name}] {i}. {result['title']} (Score: {result['score']:.4f})")
        print(f"     Categoria: {result['category']}")
        print(f"     Snippet: {result['snippet'][:80]}...")


def run_benchmark(interface, query_list):
    print("=" * 80)
    print("BENCHMARK PYLUCENE - BM25 vs CLASSIC RANKING")
    print("=" * 80)
    print(f"Data/Ora: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    print(f"Query da testare: {len(query_list)}")
    print("=" * 80)
    
    total_bm25_time = 0
    total_classic_time = 0
    query_count = 0
    
    all_results = []
    
    for i, query_info in enumerate(query_list, 1):
        query_text = query_info['query']
        query_id = query_info.get('id', i)
        query_category = query_info.get('category', 'N/A')
        
        print(f"\n[QUERY {i}/{len(query_list)}] ID: {query_id}, Categoria: {query_category}")
        print(f"[RICERCA] Query: {query_text}")
        
        print("[BM25] Eseguendo ricerca...")
        start_time = time.time()
        results_bm25 = interface.search(query_text, limit=5)
        bm25_time = (time.time() - start_time) * 1000
        
        print("[CONFIG] Cambiando ranking da BM25 a Classic...")
        interface.similarity = "classic"
        interface._init_searcher()
        
        print("[CLASSIC] Eseguendo ricerca...")
        start_time = time.time()
        results_classic = interface.search(query_text, limit=5)
        classic_time = (time.time() - start_time) * 1000
        
        print("[CONFIG] Ripristinando ranking BM25...")
        interface.similarity = "bm25"
        interface._init_searcher()
        
        print(f"\n[RISULTATI BM25] Tempo: {bm25_time:.2f}ms")
        print_results(results_bm25, query_text, "BM25")
        
        print(f"\n[RISULTATI CLASSIC] Tempo: {classic_time:.2f}ms")
        print_results(results_classic, query_text, "CLASSIC")
        
        # Adatta i dati per generate_charts.py
        retrieved_docs_bm25 = [int(result['doc_id']) for result in results_bm25['results']]
        # Carica le relevant_docs dal file queries.json originale
        relevant_docs_expected = query_info.get('relevant_docs', [])
        if not relevant_docs_expected:
            # Fallback: cerca nel file queries.json originale
            import json
            try:
                with open("../../../docs/queries.json", 'r') as f:
                    queries_data = json.load(f)
                    for q in queries_data.get('test_queries', []):
                        if q.get('query') == query_text:
                            relevant_docs_expected = [int(doc_id) for doc_id in q.get('relevant_docs', [])]
                            break
            except:
                relevant_docs_expected = []
        
        # Modifica i risultati per includere 'id' invece di 'doc_id' per compatibilità
        results_bm25_adapted = []
        for result in results_bm25['results']:
            adapted_result = result.copy()
            adapted_result['id'] = result['doc_id']  # generate_charts.py cerca 'id'
            results_bm25_adapted.append(adapted_result)
        
        export_data_bm25 = {
            'id': query_id,
            'query': query_text,
            'total_results': results_bm25['total_results'],
            'results': results_bm25_adapted,
            'relevant_docs': relevant_docs_expected,  # generate_charts.py usa questo campo
            'metrics': {
                'engine_used': 'PyLucene_BM25',
                'response_time_ms': bm25_time,
                'ranking_method': 'BM25'
            }
        }
        all_results.append(export_data_bm25)
        
        # Adatta i dati per generate_charts.py
        retrieved_docs_classic = [int(result['doc_id']) for result in results_classic['results']]
        
        # Modifica i risultati per includere 'id' invece di 'doc_id' per compatibilità
        results_classic_adapted = []
        for result in results_classic['results']:
            adapted_result = result.copy()
            adapted_result['id'] = result['doc_id']  # generate_charts.py cerca 'id'
            results_classic_adapted.append(adapted_result)
        
        export_data_classic = {
            'id': query_id,
            'query': query_text,
            'total_results': results_classic['total_results'],
            'results': results_classic_adapted,
            'relevant_docs': relevant_docs_expected,  # generate_charts.py usa questo campo
            'metrics': {
                'engine_used': 'PyLucene_Classic',
                'response_time_ms': classic_time,
                'ranking_method': 'Classic'
            }
        }
        all_results.append(export_data_classic)
        
        print(f"\n[ANALISI] Confronto ranking per query: '{query_text}'")
        print(f"[DOCUMENTI ATTESI] {relevant_docs_expected}")
        print(f"[DOCUMENTI TROVATI BM25] {retrieved_docs_bm25}")
        print(f"[DOCUMENTI TROVATI CLASSIC] {retrieved_docs_classic}")
        
        if results_bm25['total_results'] > 0 and results_classic['total_results'] > 0:
            print("\n[TOP 3 CONFRONTO]")
            for j in range(min(3, len(results_bm25['results']), len(results_classic['results']))):
                bm25_result = results_bm25['results'][j]
                classic_result = results_classic['results'][j]
                
                print(f"\nPosizione {j+1}:")
                print(f"  BM25:    {bm25_result['title']} (Score: {bm25_result['score']:.4f})")
                print(f"  Classic:  {classic_result['title']} (Score: {classic_result['score']:.4f})")
                
                if bm25_result['title'] == classic_result['title']:
                    print(f"  [OK] Stesso documento in posizione {j+1}")
                else:
                    print(f"  [DIFF] Documenti diversi in posizione {j+1}")
        
        time_diff = abs(bm25_time - classic_time)
        if bm25_time < classic_time:
            print(f"\n[PERFORMANCE] BM25 e {time_diff:.2f}ms piu veloce")
        elif classic_time < bm25_time:
            print(f"\n[PERFORMANCE] Classic e {time_diff:.2f}ms piu veloce")
        else:
            print(f"\n[PERFORMANCE] Stessa velocita")
        
        total_bm25_time += bm25_time
        total_classic_time += classic_time
        query_count += 1
        
        print("-" * 80)
    
    print(f"\n" + "=" * 80)
    print("STATISTICHE FINALI")
    print("=" * 80)
    
    avg_bm25 = total_bm25_time / query_count if query_count > 0 else 0
    avg_classic = total_classic_time / query_count if query_count > 0 else 0
    
    print(f"[BM25] Tempo totale: {total_bm25_time:.2f}ms, Media: {avg_bm25:.2f}ms")
    print(f"[CLASSIC] Tempo totale: {total_classic_time:.2f}ms, Media: {avg_classic:.2f}ms")
    
    if avg_bm25 < avg_classic:
        improvement = ((avg_classic - avg_bm25) / avg_classic) * 100
        print(f"\n[VINCITORE] BM25 e {improvement:.1f}% piu veloce!")
    elif avg_classic < avg_bm25:
        improvement = ((avg_bm25 - avg_classic) / avg_bm25) * 100
        print(f"\n[VINCITORE] Classic e {improvement:.1f}% piu veloce!")
    else:
        print(f"\n[PAREGGIO] Stessa performance!")
    
    print("=" * 80)
    
    try:
        export_path = "../../../pylucene/export.json"
        formatted_results = []
        for record in all_results:
            formatted_results.append({'data': record})
        
        with open(export_path, 'w', encoding='utf-8') as f:
            json.dump(formatted_results, f, ensure_ascii=False, indent=4, default=str)
        
        print(f"\n[EXPORT] Risultati esportati in: {export_path}")
    except Exception as e:
        print(f"\n[ERRORE EXPORT] Impossibile esportare i risultati: {e}")
    
    return {
        'bm25_total': total_bm25_time,
        'classic_total': total_classic_time,
        'bm25_avg': avg_bm25,
        'classic_avg': avg_classic,
        'query_count': query_count,
        'exported_results': all_results
    }


def generate_charts_from_export(export_file_path):
    if not CHARTS_AVAILABLE:
        print("[GRAFICI] generate_charts.py non disponibile, saltando generazione grafici")
        return
    
    try:
        print("\n[GRAFICI] Avvio generazione grafici con SearchPerformanceAnalyzer...")
        
        output_dir = "../../../docs/charts/pylucene"
        os.makedirs(output_dir, exist_ok=True)
        
        analyzer = SearchPerformanceAnalyzer(
            json_file_path=export_file_path,
            output_dir=output_dir,
            engine="pylucene"
        )
        
        analyzer.print_summary()
        
        analyzer.generate_all_charts()
        
        print(f"\n[GRAFICI] Tutti i grafici sono stati generati e salvati in: {output_dir}")
        
    except Exception as e:
        print(f"\n[ERRORE GRAFICI] Impossibile generare i grafici: {e}")


def main():
    print("AVVIO BENCHMARK PYLUCENE UNIFICATO CON EXPORT E GRAFICI")
    print("=" * 70)
    
    ds = "../docs/dataset.csv"
    
    if not os.path.exists(ds):
        print(f"[ERRORE] File dataset non trovato: {ds}")
        return
    
    print("\n[INIZIALIZZAZIONE] Creando interfaccia con BM25...")
    with PyLuceneUnifiedInterface(ds, "indexdir_unified", "bm25") as interface:
        print(f"[VERIFICA] Ranking iniziale: {interface.similarity}")
        query_list = interface._load_queries_from_file("../../../docs/queries.json")
        
        if not query_list:
            print("[ERRORE] Nessuna query caricata per il benchmark")
            return
        
        print(f"[INFO] Query caricate: {len(query_list)}")
        
        results = run_benchmark(interface, query_list)
        
        if results:
            print(f"\n[COMPLETATO] Benchmark terminato con successo!")
            print(f"[RISULTATO] {results['query_count']} query testate")
            print(f"[EXPORT] {len(results['exported_results'])} record esportati")
            
            if CHARTS_AVAILABLE:
                export_file = "../../../pylucene/export.json"
                if os.path.exists(export_file):
                    generate_charts_from_export(export_file)
                else:
                    print(f"\n[ERRORE] File export non trovato: {export_file}")
            else:
                print("\n[GRAFICI] generate_charts.py non disponibile")
                
        else:
            print("\n[ERRORE] Benchmark fallito")
    
    print("\n[FINE] Script terminato")


if __name__ == "__main__":
    main()