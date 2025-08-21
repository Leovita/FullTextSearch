from time import time  
from PyLuceneSearchEngine import PyLuceneSearchEngine
import datetime
import os

def log_to_file(log_filename, message):
    with open(log_filename, 'a', encoding='utf-8') as f:
        f.write(message + "\n")

def print_and_log_results(query, results, model_name, elapsed_time, log_filename):
    log_to_file(log_filename, f"\nQUERY: '{query}' (Tempo: {elapsed_time:.4f}s)")
    log_to_file(log_filename, "-" * 40)
    
    if results:
        for rank, result in enumerate(results, start=1):
            log_to_file(log_filename, f"Rank {rank}: {result[0][:50]}...")
            log_to_file(log_filename, f"      Contenuto: {result[1][:80]}...")
            log_to_file(log_filename, f"      Categoria: {result[2]}")
            log_to_file(log_filename, f"      SNIPPET: {result[4]}")
    else:
        log_to_file(log_filename, "Nessun risultato trovato")
    
def test_model(search_engine, query_list, model_name, log_filename):
    total_time = 0
    num_queries = len(query_list)
    
    print(f"Esecuzione ricerca con modello {model_name}...")
    log_to_file(log_filename, f"\n" + "=" * 50)
    log_to_file(log_filename, f"RISULTATI RICERCA {model_name}")
    log_to_file(log_filename, "=" * 50)
    
    for query in query_list:
        start_time = time()
        results = search_engine.search_documents(query, top_n=5, ranking_model=model_name.lower())
        elapsed_time = time() - start_time
        total_time += elapsed_time
        
        print_and_log_results(query, results, model_name, elapsed_time, log_filename)
    
    avg_time = total_time / num_queries
    log_to_file(log_filename, f"\nTEMPO MEDIO {model_name}: {avg_time:.4f} secondi")
    
    return avg_time

if __name__ == "__main__":
    index_dir = "/Users/leovita/uni/unidev/GestioneInfo/pylucene/pylucene-10.0.0/full-text-search/indexing"  
    csv_file = "../docs/dataset.csv"  
    
    search_engine = PyLuceneSearchEngine(index_dir, csv_file)
    search_engine.index_documents()
    
    query_list = [
        "Gordon Brown Budget election",
        "Liverpool football Hillsborough", 
        "Microsoft Google internet",
        "Army Scotland regiments decision",
        "Smoking ban Scotland public",
        "Wayne Rooney football transfer",
        "Tony Blair trust voters",
        "Stamp duty property prices",
        "Hollywood Oscar ceremony",
        "EU European Union rules",
        "Climate change environment",
        "University students tuition"
    ]
    
    # Query per test avanzati
    misspelled_queries = [
        "Gorden Brown Budjet", "Liverpol footbal", "Microsft Googl",
        "Scootland armie", "Toni Blare polotics"
    ]
    


    # Setup logging
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    log_filename = f"search_results_{timestamp}.log"
    
    # Header log
    log_to_file(log_filename, "=" * 80)
    log_to_file(log_filename, f"RICERCA PYLUCENE - {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    log_to_file(log_filename, "=" * 80)
    log_to_file(log_filename, f"File CSV: {csv_file}")
    log_to_file(log_filename, f"Directory indice: {index_dir}")
    log_to_file(log_filename, f"Query testate: {len(query_list)}")
    log_to_file(log_filename, "=" * 80)

    # Test modelli
    avg_time_bm25 = test_model(search_engine, query_list, "BM25", log_filename)
    avg_time_tfidf = test_model(search_engine, query_list, "TFIDF", log_filename)

    # Risultato finale
    if avg_time_bm25 > avg_time_tfidf:
        winner_msg = f"Modello TFIDF vince con tempo di esecuzione medio pari a {avg_time_tfidf}s vs {avg_time_bm25}s"
    else:
        winner_msg = f"Modello BM25 vince con tempo di esecuzione medio pari a {avg_time_bm25}s vs {avg_time_tfidf}s"
    
    print(f"\n{winner_msg}")
    
    # Test funzionalità avanzate
    log_to_file(log_filename, "\n" + "=" * 80)
    log_to_file(log_filename, "TEST FUNZIONALITÀ AVANZATE")
    log_to_file(log_filename, "=" * 80)
    
    # Spell Checking
    log_to_file(log_filename, "\n--- SPELL CHECKING ---")
    for misspelled in misspelled_queries:
        corrected = search_engine.spell_check_query(misspelled)
        if corrected != misspelled:
            log_to_file(log_filename, f"Corretto: '{misspelled}' → '{corrected}'")
    

    
    # Footer log
    log_to_file(log_filename, "\n" + "=" * 80)
    log_to_file(log_filename, "RISULTATO FINALE")
    log_to_file(log_filename, "=" * 80)
    log_to_file(log_filename, winner_msg)
    log_to_file(log_filename, f"File log salvato: {log_filename}")
    log_to_file(log_filename, "=" * 80)