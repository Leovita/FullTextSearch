#!/usr/bin/env python3
"""
Script principale unificato per il benchmark PyLucene.
Confronta BM25 vs Classic (TF-IDF) ranking.
"""

import os
import sys
import time
import datetime
from PyLuceneUnifiedInterface import PyLuceneUnifiedInterface


def print_results(results, query_text, ranking_name):
    """Stampa i risultati della ricerca."""
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
    """Esegue il benchmark completo confrontando BM25 vs Classic."""
    print("=" * 80)
    print("BENCHMARK PYLUCENE - BM25 vs CLASSIC RANKING")
    print("=" * 80)
    print(f"Data/Ora: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    print(f"Query da testare: {len(query_list)}")
    print("=" * 80)
    
    total_bm25_time = 0
    total_classic_time = 0
    query_count = 0
    
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
        
        #classic
        print("[CONFIG] Cambiando ranking da BM25 a Classic...")
        interface.similarity = "classic"
        interface._init_searcher()
        
        print("[CLASSIC] Eseguendo ricerca...")
        start_time = time.time()
        results_classic = interface.search(query_text, limit=5)
        classic_time = (time.time() - start_time) * 1000
        
        # Ripristina BM25 per le prossime query
        print("[CONFIG] Ripristinando ranking BM25...")
        interface.similarity = "bm25"
        interface._init_searcher()
        
        # Stampa risultati
        print(f"\n[RISULTATI BM25] Tempo: {bm25_time:.2f}ms")
        print_results(results_bm25, query_text, "BM25")
        
        print(f"\n[RISULTATI CLASSIC] Tempo: {classic_time:.2f}ms")
        print_results(results_classic, query_text, "CLASSIC")
        
        print(f"\n[ANALISI] Confronto ranking per query: '{query_text}'")
        
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
    
    return {
        'bm25_total': total_bm25_time,
        'classic_total': total_classic_time,
        'bm25_avg': avg_bm25,
        'classic_avg': avg_classic,
        'query_count': query_count
    }


def main():
    print("AVVIO BENCHMARK PYLUCENE UNIFICATO")
    print("=" * 50)
    
    ds = "../../../docs/dataset.csv"
    
    if not os.path.exists(ds):
        print(f"[ERRORE] File dataset non trovato: {ds}")
        return
    
    print("\n[INIZIALIZZAZIONE] Creando interfaccia con BM25...")
    with PyLuceneUnifiedInterface(ds, "indexdir_unified", "bm25") as interface:
        print(f"[VERIFICA] Ranking iniziale: {interface.similarity}")
        #carico query con funzione dell'interfaccia
        query_list = interface._load_queries_from_file("../../../benchmark_queries_config.json")
        
        if not query_list:
            print("[ERRORE] Nessuna query caricata per il benchmark")
            return
        
        print(f"[INFO] Query caricate: {len(query_list)}")
        
        results = run_benchmark(interface, query_list)
        
        if results:
            print(f"\n[COMPLETATO] Benchmark terminato con successo!")
            print(f"[RISULTATO] {results['query_count']} query testate")
        else:
            print("\n[ERRORE] Benchmark fallito")
    
    print("\n[FINE] Script terminato")


if __name__ == "__main__":
    main()