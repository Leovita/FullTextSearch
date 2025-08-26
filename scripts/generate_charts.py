import json
import matplotlib.pyplot as plt
import numpy as np
from collections import defaultdict
import seaborn as sns
from matplotlib_venn import venn2, venn3

class SearchPerformanceAnalyzer:
    def __init__(self, json_file_path = '', output_dir = '', engine = ''):
        """
        Inizializza l'analizzatore con il percorso del file JSON
        """
        self.json_file_path = json_file_path
        self.output_dir = output_dir
        self.engine = engine
        self.data = []
        self.queries = {}
        self.systems = set()
        self.load_data()
        self.process_data()
    
    def load_data(self):
        """Carica i dati dal file JSON"""
        try:
            with open(self.json_file_path, 'r', encoding='utf-8') as f:
                self.data = json.load(f)
            print(f"Caricati {len(self.data)} record dal file JSON")
        except FileNotFoundError:
            print(f"Errore: File {self.json_file_path} non trovato")
            return
        except json.JSONDecodeError:
            print("Errore: File JSON non valido")
            return
    
    def process_data(self):
        """Processa i dati per identificare query uniche e sistemi"""
        query_counter = {}
        
        for record in self.data:
            data = record['data']
            query = data['query']
            engine = data['metrics']['engine_used']
            
            # Assegna ID univoco alle query
            if query not in query_counter:
                query_counter[query] = len(query_counter) + 1
                self.queries[f"Q{query_counter[query]}"] = {
                    'original_query': query,
                    'systems': {}
                }
            
            query_id = f"Q{query_counter[query]}"
            self.systems.add(engine)
            
            # Memorizza le performance per sistema
            self.queries[query_id]['systems'][engine] = {
                'response_time': data['metrics']['response_time_ms'],
                'total_results': data['total_results'],
                'results': data['results'],
                'result_titles': [result['title'] for result in data['results']]
            }
        
        print(f"Query uniche identificate: {len(self.queries)}")
        print(f"Sistemi identificati: {list(self.systems)}")
    
    def create_response_time_comparison(self):
        """Crea grafico a barre per confronto tempi di risposta"""
        fig, ax = plt.subplots(figsize=(12, 8))
        
        systems = list(self.systems)
        query_ids = list(self.queries.keys())
        x = np.arange(len(query_ids))
        width = 0.35
        
        # Prepara i dati per ogni sistema
        system_data = {}
        for system in systems:
            system_data[system] = []
            for q_id in query_ids:
                if system in self.queries[q_id]['systems']:
                    system_data[system].append(self.queries[q_id]['systems'][system]['response_time'])
                else:
                    system_data[system].append(0)
        
        # Crea le barre
        colors = plt.cm.Set3(np.linspace(0, 1, len(systems)))
        for i, system in enumerate(systems):
            offset = (i - len(systems)/2) * width / len(systems)
            ax.bar(x + offset, system_data[system], width/len(systems), 
                   label=system, color=colors[i])
        
        ax.set_xlabel('Query ID')
        ax.set_ylabel('Tempo di Risposta (ms)')
        ax.set_title('Confronto Tempi di Risposta per Query')
        ax.set_xticks(x)
        ax.set_xticklabels(query_ids, rotation=45)
        ax.legend()
        ax.grid(True, alpha=0.3)
        
        plt.tight_layout()
        plt.savefig(f'{self.output_dir}/response_time_comparison_{self.engine}.png', dpi=300, bbox_inches='tight')
        plt.show()
    
    def create_results_count_comparison(self):
        """Crea grafico per confronto numero di risultati"""
        fig, ax = plt.subplots(figsize=(12, 8))
        
        systems = list(self.systems)
        query_ids = list(self.queries.keys())
        x = np.arange(len(query_ids))
        width = 0.35
        
        # Prepara i dati per ogni sistema
        system_data = {}
        for system in systems:
            system_data[system] = []
            for q_id in query_ids:
                if system in self.queries[q_id]['systems']:
                    system_data[system].append(self.queries[q_id]['systems'][system]['total_results'])
                else:
                    system_data[system].append(0)
        
        # Crea le barre
        colors = plt.cm.Pastel1(np.linspace(0, 1, len(systems)))
        for i, system in enumerate(systems):
            offset = (i - len(systems)/2) * width / len(systems)
            ax.bar(x + offset, system_data[system], width/len(systems), 
                   label=system, color=colors[i])
        
        ax.set_xlabel('Query ID')
        ax.set_ylabel('Numero di Risultati')
        ax.set_title('Confronto Numero di Risultati per Query')
        ax.set_xticks(x)
        ax.set_xticklabels(query_ids, rotation=45)
        ax.legend()
        ax.grid(True, alpha=0.3)
        
        plt.tight_layout()
        plt.savefig(f'{self.output_dir}/results_count_comparison_{self.engine}.png', dpi=300, bbox_inches='tight')
        plt.show()
    
    def create_performance_heatmap(self):
        """Crea heatmap delle performance"""
        systems = list(self.systems)
        query_ids = list(self.queries.keys())
        
        # Crea matrice dei tempi di risposta
        performance_matrix = np.zeros((len(systems), len(query_ids)))
        
        for i, system in enumerate(systems):
            for j, q_id in enumerate(query_ids):
                if system in self.queries[q_id]['systems']:
                    performance_matrix[i][j] = self.queries[q_id]['systems'][system]['response_time']
        
        fig, ax = plt.subplots(figsize=(10, 6))
        im = ax.imshow(performance_matrix, cmap='RdYlGn_r', aspect='auto')
        
        # Aggiungi etichette
        ax.set_xticks(np.arange(len(query_ids)))
        ax.set_yticks(np.arange(len(systems)))
        ax.set_xticklabels(query_ids)
        ax.set_yticklabels(systems)
        
        # Ruota le etichette dell'asse x
        plt.setp(ax.get_xticklabels(), rotation=45, ha="right", rotation_mode="anchor")
        
        # Aggiungi valori nelle celle
        for i in range(len(systems)):
            for j in range(len(query_ids)):
                if performance_matrix[i][j] > 0:
                    text = ax.text(j, i, f'{performance_matrix[i][j]:.1f}',
                                 ha="center", va="center", color="black", fontsize=8)
        
        ax.set_title('Heatmap Tempi di Risposta (ms)')
        fig.tight_layout()
        plt.colorbar(im)
        plt.savefig(f'{self.output_dir}/performance_heatmap_{self.engine}.png', dpi=300, bbox_inches='tight')
        plt.show()
    
    def create_score_analysis(self):
        """Analizza e visualizza i punteggi dei risultati"""
        fig, axes = plt.subplots(2, 2, figsize=(15, 12))
        
        # Raccoglie tutti i punteggi per sistema
        system_scores = defaultdict(list)
        
        for q_id, query_data in self.queries.items():
            for system, data in query_data['systems'].items():
                scores = [result['score'] for result in data['results']]
                system_scores[system].extend(scores)
        
        # Box plot dei punteggi
        systems = list(system_scores.keys())
        score_data = [system_scores[system] for system in systems]
        
        axes[0,0].boxplot(score_data, labels=systems)
        axes[0,0].set_title('Distribuzione Punteggi per Sistema')
        axes[0,0].set_ylabel('Punteggio')
        axes[0,0].tick_params(axis='x', rotation=45)
        
        # Istogrammi dei punteggi per sistema
        colors = plt.cm.Set2(np.linspace(0, 1, len(systems)))
        for i, system in enumerate(systems):
            axes[0,1].hist(system_scores[system], bins=20, alpha=0.7, 
                          label=system, color=colors[i])
        axes[0,1].set_title('Distribuzione Punteggi')
        axes[0,1].set_xlabel('Punteggio')
        axes[0,1].set_ylabel('Frequenza')
        axes[0,1].legend()
        
        # Punteggio medio per query
        query_ids = list(self.queries.keys())
        systems = list(self.systems)
        x = np.arange(len(query_ids))
        width = 0.35
        
        for i, system in enumerate(systems):
            avg_scores = []
            for q_id in query_ids:
                if system in self.queries[q_id]['systems']:
                    scores = [r['score'] for r in self.queries[q_id]['systems'][system]['results']]
                    avg_scores.append(np.mean(scores) if scores else 0)
                else:
                    avg_scores.append(0)
            
            offset = (i - len(systems)/2) * width / len(systems)
            axes[1,0].bar(x + offset, avg_scores, width/len(systems), 
                         label=system, color=colors[i])
        
        axes[1,0].set_xlabel('Query ID')
        axes[1,0].set_ylabel('Punteggio Medio')
        axes[1,0].set_title('Punteggio Medio per Query')
        axes[1,0].set_xticks(x)
        axes[1,0].set_xticklabels(query_ids, rotation=45)
        axes[1,0].legend()
        axes[1,0].grid(True, alpha=0.3)
        
        # Performance complessiva per sistema
        system_performance = {}
        for system in systems:
            response_times = []
            result_counts = []
            
            for q_id, query_data in self.queries.items():
                if system in query_data['systems']:
                    response_times.append(query_data['systems'][system]['response_time'])
                    result_counts.append(query_data['systems'][system]['total_results'])
            
            system_performance[system] = {
                'avg_response_time': np.mean(response_times) if response_times else 0,
                'avg_results': np.mean(result_counts) if result_counts else 0
            }
        
        systems = list(system_performance.keys())
        avg_times = [system_performance[s]['avg_response_time'] for s in systems]
        avg_results = [system_performance[s]['avg_results'] for s in systems]
        
        axes[1,1].scatter(avg_times, avg_results, s=100, alpha=0.7, c=colors[:len(systems)])
        for i, system in enumerate(systems):
            axes[1,1].annotate(system, (avg_times[i], avg_results[i]), 
                              xytext=(5, 5), textcoords='offset points')
        
        axes[1,1].set_xlabel('Tempo di Risposta Medio (ms)')
        axes[1,1].set_ylabel('Numero Risultati Medio')
        axes[1,1].set_title('Performance Complessiva per Sistema')
        axes[1,1].grid(True, alpha=0.3)
        
        plt.tight_layout()
        plt.savefig(f'{self.output_dir}/score_analysis_{self.engine}.png', dpi=300, bbox_inches='tight')
        plt.show()
    
    def create_result_overlap_analysis(self):
        """Analizza e visualizza la sovrapposizione dei risultati tra sistemi"""
        systems = list(self.systems)
        
        # Analizza per ogni query la sovrapposizione dei risultati
        overlap_data = defaultdict(list)
        
        for q_id, query_data in self.queries.items():
            system_titles = {}
            for system in systems:
                if system in query_data['systems']:
                    system_titles[system] = set(query_data['systems'][system]['result_titles'])
            
            # Calcola sovrapposizioni per ogni coppia di sistemi
            for i, sys1 in enumerate(systems):
                if sys1 not in system_titles:
                    continue
                for j, sys2 in enumerate(systems):
                    if i >= j or sys2 not in system_titles:
                        continue
                    
                    set1 = system_titles[sys1]
                    set2 = system_titles[sys2]
                    
                    # Calcola metriche di sovrapposizione
                    intersection = set1.intersection(set2)
                    union = set1.union(set2)
                    jaccard_similarity = len(intersection) / len(union) if union else 0
                    
                    overlap_data[(sys1, sys2)].append(jaccard_similarity)
        
        # Calcola la media della similarità di Jaccard per ogni coppia
        avg_overlap = {}
        for pair, similarities in overlap_data.items():
            avg_overlap[pair] = np.mean(similarities) if similarities else 0
        
        # Crea matrice di similarità
        similarity_matrix = np.zeros((len(systems), len(systems)))
        for i, sys1 in enumerate(systems):
            for j, sys2 in enumerate(systems):
                if (sys1, sys2) in avg_overlap:
                    similarity_matrix[i][j] = avg_overlap[(sys1, sys2)]
                elif (sys2, sys1) in avg_overlap:
                    similarity_matrix[i][j] = avg_overlap[(sys2, sys1)]
        
        # Heatmap della similarità
        fig, ax = plt.subplots(figsize=(10, 8))
        im = ax.imshow(similarity_matrix, cmap='YlOrRd', vmin=0, vmax=1)
        
        # Aggiungi etichette
        ax.set_xticks(np.arange(len(systems)))
        ax.set_yticks(np.arange(len(systems)))
        ax.set_xticklabels(systems)
        ax.set_yticklabels(systems)
        
        # Ruota le etichette dell'asse x
        plt.setp(ax.get_xticklabels(), rotation=45, ha="right", rotation_mode="anchor")
        
        # Aggiungi valori nelle celle
        for i in range(len(systems)):
            for j in range(len(systems)):
                text = ax.text(j, i, f'{similarity_matrix[i, j]:.2f}',
                             ha="center", va="center", color="black")
        
        ax.set_title('Similarità Media dei Risultati (Indice di Jaccard)')
        fig.tight_layout()
        plt.colorbar(im)
        plt.savefig(f'{self.output_dir}/result_similarity_{self.engine}.png', dpi=300, bbox_inches='tight')
        plt.show()
        
        # Crea diagrammi di Venn per tutte le query in una griglia
        n_queries = len(self.queries)
        n_cols = min(4, n_queries)  # Massimo 4 colonne
        n_rows = (n_queries + n_cols - 1) // n_cols  # Calcola il numero di righe necessario
        
        fig, axes = plt.subplots(n_rows, n_cols, figsize=(5*n_cols, 5*n_rows))
        fig.suptitle('Overlap Risultati per Tutte le Query', fontsize=16)
        
        # Appiattisci l'array di assi per iterare facilmente
        if n_rows == 1 and n_cols == 1:
            axes = np.array([axes])
        axes = axes.flatten()
        
        for idx, (q_id, query_data) in enumerate(self.queries.items()):
            if idx >= len(axes):
                break
                
            system_titles = {}
            systems_in_query = list(query_data['systems'].keys())
            
            for system in systems_in_query:
                system_titles[system] = set(query_data['systems'][system]['result_titles'])
            
            # Crea diagramma di Venn per i primi 2-3 sistemi
            if len(system_titles) == 2:
                venn2([system_titles[systems_in_query[0]], 
                      system_titles[systems_in_query[1]]], 
                      set_labels=systems_in_query[:2], ax=axes[idx])
                axes[idx].set_title(f'{q_id}: {query_data["original_query"][:30]}...')
            elif len(system_titles) >= 3:
                venn3([system_titles[systems_in_query[0]], 
                      system_titles[systems_in_query[1]], 
                      system_titles[systems_in_query[2]]],
                      set_labels=systems_in_query[:3], ax=axes[idx])
                axes[idx].set_title(f'{q_id}: {query_data["original_query"][:30]}...')
            else:
                # Per sistemi singoli o nessun sistema
                axes[idx].text(0.5, 0.5, f"Solo {len(systems_in_query)} sistema(i)", 
                              ha='center', va='center', transform=axes[idx].transAxes)
                axes[idx].set_title(f'{q_id}: {query_data["original_query"][:30]}...')
        
        # Nascondi gli assi non utilizzati
        for idx in range(n_queries, len(axes)):
            axes[idx].set_visible(False)
        
        plt.tight_layout(rect=[0, 0, 1, 0.96])  # Lascia spazio per il titolo principale
        plt.savefig(f'{self.output_dir}/venn_diagrams_all_queries_{self.engine}.png', dpi=300, bbox_inches='tight')
        plt.show()
    
    def print_summary(self):
        """Stampa un riassunto delle statistiche"""
        print("\n" + "="*60)
        print("RIASSUNTO ANALISI PERFORMANCE")
        print("="*60)
        
        print(f"\nQuery analizzate: {len(self.queries)}")
        print(f"Sistemi confrontati: {len(self.systems)}")
        
        print("\nDettaglio Query:")
        for q_id, query_data in self.queries.items():
            print(f"\n{q_id}: \"{query_data['original_query'][:50]}...\"")
            for system, data in query_data['systems'].items():
                print(f"  {system}:")
                print(f"    - Tempo risposta: {data['response_time']:.2f} ms")
                print(f"    - Risultati: {data['total_results']}")
                avg_score = np.mean([r['score'] for r in data['results']]) if data['results'] else 0
                print(f"    - Punteggio medio: {avg_score:.2f}")
                
                # Mostra alcuni titoli dei risultati
                if data['result_titles']:
                    print(f"    - Primi 3 risultati:")
                    for title in data['result_titles'][:3]:
                        print(f"        - {title[:50]}...")
        
        # Calcola statistiche comparative
        print(f"\n{'='*60}")
        print("CONFRONTO SISTEMI")
        print(f"{'='*60}")
        
        for system in self.systems:
            response_times = []
            result_counts = []
            scores = []
            
            for query_data in self.queries.values():
                if system in query_data['systems']:
                    data = query_data['systems'][system]
                    response_times.append(data['response_time'])
                    result_counts.append(data['total_results'])
                    scores.extend([r['score'] for r in data['results']])
            
            print(f"\n{system}:")
            print(f"  - Tempo risposta medio: {np.mean(response_times):.2f} ms")
            print(f"  - Risultati medi per query: {np.mean(result_counts):.1f}")
            print(f"  - Punteggio medio: {np.mean(scores):.2f}")
            print(f"  - Query elaborate: {len(response_times)}")
    
    def generate_all_charts(self):
        """Genera tutti i grafici di analisi"""
        print("Generazione grafici di analisi...")
        
        # Imposta lo stile
        plt.style.use('seaborn-v0_8')
        
        self.create_response_time_comparison()
        self.create_results_count_comparison()
        self.create_performance_heatmap()
        self.create_score_analysis()
        self.create_result_overlap_analysis()
        
        print("Tutti i grafici sono stati generati e salvati!")


def main():
    """Funzione principale"""
    # Specifica il percorso del file JSON

    engine_choice = input("Selezionare l'engine di ricerca (1:PostgreSQL, 2:whoosh, 3:pylucene): ")

    if engine_choice == '1':
        engine = 'PostgreSQL'
    elif engine_choice == '2':
        engine = 'whoosh'
    elif engine_choice == '3':
        engine = 'pylucene'
    else:
        print("Scelta non valida. Utilizzo il motore di ricerca predefinito: PostgreSQL.")
        engine = 'PostgreSQL'

    json_file = f"../{engine}/export.json"  # Modifica questo percorso se necessario
    output_dir = f"../docs/charts/{engine}"  # Directory dove salvare i grafici

    try:
        # Crea l'analizzatore
        analyzer = SearchPerformanceAnalyzer(json_file_path=json_file, output_dir=output_dir, engine=engine)

        # Stampa il riassunto
        analyzer.print_summary()
        
        # Genera tutti i grafici
        analyzer.generate_all_charts()
        
    except Exception as e:
        print(f"Errore durante l'analisi: {e}")


if __name__ == "__main__":
    main()