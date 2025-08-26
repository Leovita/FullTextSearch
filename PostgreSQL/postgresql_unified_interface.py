import logging
import time
from typing import List, Dict, Any, Optional
import os, sys

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PARENT_DIR = os.path.dirname(BASE_DIR)

if PARENT_DIR not in sys.path:
    sys.path.insert(0, PARENT_DIR)

from utils.postgresql_engine import PostgreSQLSearchEngine
from utils.cache_system import CachedSearchEngine
from utils.query_processor import QueryProcessor, QueryType
from utils.password import PASSWORD
from scripts.export_results import export_to_json

# Configurazione logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
logger = logging.getLogger(__name__)

class PostgreSQLUnifiedInterface:
    """
    Interfaccia unificata per il motore di ricerca PostgreSQL.
    
    Fornisce un'API standardizzata per interagire con il database,
    gestendo automaticamente il tipo di ricerca (semplice, booleana, frase),
    l'uso della cache e la pre-elaborazione delle query.
    """

    def __init__(self, use_cache: bool = True, db_config: Optional[Dict[str, str]] = None, cache_config: Optional[Dict[str, Any]] = None, ranking: Optional[str] = "Frequency"):
        """
        Inizializza l'interfaccia.
        
        Args:
            use_cache (bool): Se True, utilizza il sistema di caching avanzato.
            db_config (Optional[Dict[str, str]]): Configurazione del database.
            cache_config (Optional[Dict[str, Any]]): Configurazione della cache.
            ranking (Optional[str]): Metodo di ranking da utilizzare (default: "Frequency") (disponibili: "Frequency", "Density").
        """
        self.use_cache = use_cache
        self.db_config = db_config if db_config is not None else {
            'dbname': 'gestione',
            'user': 'postgres',
            'password': PASSWORD,
            'host': 'localhost',
            'port': '5432'
        }
        self.cache_config = cache_config
        
        # Sceglie l'engine in base alla configurazione della cache
        if self.use_cache:
            self.engine = CachedSearchEngine(db_config=self.db_config, cache_config=self.cache_config, ranking=ranking)
            logger.info("Interfaccia unificata PostgreSQL avviata con caching.")
        else:
            self.engine = PostgreSQLSearchEngine(db_config=self.db_config, ranking=ranking)
            logger.info("Interfaccia unificata PostgreSQL avviata senza caching.")
        
        self.query_processor = QueryProcessor(db_config=self.db_config)
        self.ranking = ranking
        self.avg_response_time = 0.0
        self.avg_ranking = 0.0
        self.total_requests = 0

    def search(self, user_query: str, limit: int = 10, min_score: float = 0.0) -> Dict[str, Any]:
        """
        Esegue una ricerca standardizzata.
        
        Questa funzione analizza la query utente, la processa, e delega
        all'engine appropriato (con o senza cache) per eseguire la ricerca.
        
        Args:
            user_query (str): La query di ricerca dell'utente.
            limit (int): Il numero massimo di risultati da restituire.
            min_score (float): Il punteggio minimo di rilevanza.
            
        Returns:
            Dict[str, Any]: Un dizionario standardizzato contenente i risultati,
                            i metadati e le metriche di performance.
        """
        if not user_query or not user_query.strip():
            logger.warning("Query vuota ricevuta.")
            return self._format_error_output("La query non può essere vuota.")

        # Step 1: Pre-elaborazione e analisi della query
        processed_query_info = self.query_processor.process_query(user_query)
        if not processed_query_info['validation']['is_valid']:
            logger.warning(f"Query non valida: {processed_query_info['validation']['errors']}")
            return self._format_error_output(
                "Query non valida.",
                errors=processed_query_info['validation']['errors'],
                suggestions=processed_query_info['suggestions']
            )

        query_type = processed_query_info['query_info']['type']
        effective_query = processed_query_info['optimized_query']
        
        results = []
        start_time = time.time()
        
        # Step 2: Esecuzione della ricerca in base al tipo di query
        try:
            if query_type == QueryType.BOOLEAN:
                logger.info(f"Eseguendo ricerca booleana per: '{effective_query}'")
                results = self.engine.boolean_search(effective_query, limit)
            elif query_type == QueryType.PHRASE:
                logger.info(f"Eseguendo ricerca per frase per: '{effective_query}'")
                results = self.engine.phrase_search(effective_query, limit)
            elif query_type == QueryType.FIELD:
                logger.info(f"Eseguendo ricerca per campo per: '{effective_query}'")
                field_queries = processed_query_info['components']['field_queries']
                # Implementazione semplificata: considera solo il primo campo
                if field_queries:
                    field, _, value = field_queries[0]
                    results = self.engine.field_search(field, value, limit)
            else: # SIMPLE o WILDCARD
                logger.info(f"Eseguendo ricerca semplice per: '{effective_query}'")
                results = self.engine.search(effective_query, limit, min_score=min_score)
        
        except Exception as e:
            logger.error(f"Errore critico durante l'esecuzione della ricerca: {e}", exc_info=True)
            return self._format_error_output(f"Errore interno del server: {str(e)}")

        end_time = time.time()
        response_time = end_time - start_time

        # Step 3: Formattazione dell'output standardizzato
        formatted_results = self._format_results(results)

        output = {
            "query": user_query,
            "processed_info": processed_query_info,
            "total_results": len(formatted_results),
            "results": formatted_results,
            "metrics": {
                "response_time_ms": response_time * 1000,
                "engine_used": f"PostgreSQL with Cache {self.ranking}" if self.use_cache else f"PostgreSQL Standard {self.ranking}"
            },
            "status": "success",
            "errors": []
        }

        self.total_requests += 1
        self.avg_response_time += (response_time - self.avg_response_time) / self.total_requests
        self.avg_ranking += ( (sum(r['score'] for r in results) / len(results) if results else 0) - self.avg_ranking) / self.total_requests
        
        logger.info(f"Risultato per '{user_query}' formattato in {response_time:.3f}s")
        return output
    
    def get_document_by_id(self, doc_id: int) -> Dict[str, Any]:
        """Recupera un documento per ID."""
        try:
            result = self.engine.get_document_by_id(doc_id)

            if not result:
                logger.warning(f"Nessun documento trovato con ID: {doc_id}")
                return {"error": "Documento non trovato"}

            return result

        except Exception as e:
            logger.error(f"Errore durante il recupero del documento con ID {doc_id}: {e}", exc_info=True)
            return {"error": "Errore interno del server"}

    def get_stats(self) -> Dict[str, Any]:
        """Restituisce le statistiche del sistema."""
        stats = self.engine.get_stats()
        cache = self.engine.get_cache_stats() if self.use_cache else None

        return {
            "engine": "PostgreSQL",
            "caching_enabled": self.use_cache,
            "stats": stats,
            "avg_response_time_ms": self.avg_response_time * 1000,
            "avg_ranking_score": self.avg_ranking,
            "total_requests": self.total_requests,
            "cache": cache
        }

    def close(self):
        """Chiude le connessioni al database."""
        self.engine.close()
        logger.info("Interfaccia PostgreSQL chiusa.")

    def _format_results(self, results: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
        """
        Assicura che tutti i risultati abbiano un formato uniforme.
        """
        standardized_results = []
        for res in results:
            standardized_results.append({
                "id": res.get('id'),
                "title": res.get('title'),
                "snippet": res.get('snippet', res.get('content', 'N/A')),
                "score": res.get('score', 0.0),
                "matched_fields": res.get('matched_fields', ['title', 'content', 'label']),
                "metadata": {
                    "source": f"PostgreSQL {self.ranking}",
                    "search_time_s": res.get('search_time'),
                    "cached": res.get('cached', False)
                }
            })
        return standardized_results

    def _format_error_output(self, message: str, errors: List[str] = None, suggestions: List[str] = None) -> Dict[str, Any]:
        """
        Crea un dizionario di output standardizzato per gli errori.
        """
        return {
            "query": None,
            "processed_info": None,
            "total_results": 0,
            "results": [],
            "metrics": {
                "response_time_ms": 0,
                "engine_used": "PostgreSQL"
            },
            "status": "error",
            "errors": [message] + (errors if errors else []),
            "suggestions": suggestions if suggestions else []
        }

    def __enter__(self):
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()

def _load_queries_from_file(file_path: str) -> List[Dict[str, str]]:
    """
    Carica le query da un file JSON per testing.
    
    Args:
        file_path: Percorso al file JSON con le query
        
    Returns:
        Lista di dizionari con le query di test
    """
    import json, os
    
    try:
        if not os.path.exists(file_path):
            logger.warning(f"File configurazione non trovato: {file_path}")
            return []
        
        with open(file_path, 'r', encoding='utf-8') as f:
            config = json.load(f)
        
        test_queries = []
        for query_data in config.get('test_queries', []):
            test_queries.append({
                'id': query_data['id'],
                'query': query_data['query'],
            })
        
        logger.info(f"Caricate {len(test_queries)} query di test")
        return test_queries
        
    except Exception as e:
        logger.error(f"Errore caricamento query: {e}")
        return []

# Esempio di utilizzo
if __name__ == "__main__":
    
    # Esempio 1: Senza caching
    print("\n" + "="*50 + "\n")

    stats_no_cache_full = []
    stats_with_cache_full = []

    queries = _load_queries_from_file("../docs/queries.json")
    for ranking in ["Frequency", "Density"]:
        with PostgreSQLUnifiedInterface(use_cache=False, ranking=ranking) as interface_no_cache, PostgreSQLUnifiedInterface(use_cache=True, ranking=ranking) as interface_with_cache:
            for reps in range(3):
                print(f"\n\n=== RIPETIZIONE TEST {reps+1} ===\n")
                for query in queries:
                    print(f"Query ID: {query['id']}, Query: {query['query']}")

                    print(f"--- Test {query['id']} interfaccia senza caching ---")

                    result_simple_no_cache = interface_no_cache.search(query['query'], limit=3)
                    print("\n" + "-"*50 + "\n")
                    print("Risultato ricerca (senza cache):")
                    print(f"Tempo risposta: {result_simple_no_cache['metrics']['response_time_ms']:.2f}ms")
                    print(f"Numero risultati: {result_simple_no_cache['total_results']}")
                    if result_simple_no_cache['results']:
                        print(f"Primo risultato: {result_simple_no_cache['results'][0]['title']} (Score: {result_simple_no_cache['results'][0]['score']:.2f})")
                        print(f"  Snippet: {result_simple_no_cache['results'][0]['snippet']}")
                    print(f"--- Test {query['id']} recupero documento senza caching ---")
                    if result_simple_no_cache['results']:
                        result_retrieval_no_cache = interface_no_cache.get_document_by_id(result_simple_no_cache['results'][0]['id'])
                        print("\n" + "-"*50 + "\n")
                        print("Risultato recupero documento (senza cache):")
                        print(f"Tempo risposta: {result_retrieval_no_cache['search_time']:.4f}ms")
                        print(f"Documento: {result_retrieval_no_cache['title']}")
                    else:
                        print("Nessun documento trovato.")

                    print("\n" + "="*50 + "\n")

                    export_to_json(result_simple_no_cache)



                    # Esempio 2: Con caching
                    print(f"--- Test {query['id']} interfaccia con caching ---")

                    print("\n" + "-"*50 + "\n")
                    # Secondo test: Cache Hit
                    result_cache = interface_with_cache.search(query['query'], limit=3)
                    print("\n" + "-"*50 + "\n")
                    print("\n--- Risultato ricerca (con cache) ---")
                    print(f"Tempo risposta: {result_cache['metrics']['response_time_ms']:.2f}ms")
                    print(f"Numero risultati: {result_cache['total_results']}")
                    if result_cache['results']:
                        print(f"Cached: {result_cache['results'][0]['metadata']['cached']}")
                        print(f"Primo risultato: {result_cache['results'][0]['title']} (Score: {result_cache['results'][0]['score']:.2f})")
                        print(f"  Snippet: {result_cache['results'][0]['snippet']}")
                    print(f"\nSpeedup: {(result_simple_no_cache['metrics']['response_time_ms'] / result_cache['metrics']['response_time_ms']):.2f}x")

                    print(f"--- Test {query['id']} recupero documento senza caching ---")

                    if result_cache['results']:
                        result_retrieval_with_cache = interface_with_cache.get_document_by_id(result_cache['results'][0]['id'])
                        print("\n" + "-"*50 + "\n")
                        print("Risultato recupero documento (con cache):")
                        print(f"Tempo risposta: {result_retrieval_with_cache['search_time']:.4f}ms")
                        print(f"Documento: {result_retrieval_with_cache['title']}")
                    else:
                        print("Nessun documento trovato.")

                    # export_to_json(result_cache)

                    print("\n" + "="*50 + "\n")

                stats_no_cache = interface_no_cache.get_stats()
                stats_no_cache['id'] = f"{reps + 1} {ranking}"
                stats_no_cache_full.append(stats_no_cache)
                print("\nStatistiche generali (sistema senza cache):")
                for stat_name, stat_value in stats_no_cache.items():
                    if stat_name != 'stats':
                        if stat_name == 'cache':
                            continue
                        print(f"  {stat_name}: {stat_value}")
                    else:
                        for n, v in stat_value.items():
                            print(f"    {n}: {v}")

                print("\n" + "-"*50 + "\n")

                stats_with_cache = interface_with_cache.get_stats()
                stats_with_cache['id'] = f"{reps + 1} {ranking}"
                stats_with_cache_full.append(stats_with_cache)
                print("\nStatistiche generali (sistema con cache):")
                for stat_name, stat_value in stats_with_cache.items():
                    if stat_name != 'cache':
                        if stat_name == 'stats':
                            for n, v in stat_value.items():
                                print(f"    {n}: {v}")
                        else:
                            print(f"  {stat_name}: {stat_value}")
                    else:
                        for cache_name, stats in stat_value.items():
                            if isinstance(stats, dict) and 'hit_rate' in stats:
                                print(f"    {cache_name}: Hit Rate: {stats['hit_rate']:.1f}%, Size: {stats['size']}, Total Requests: {stats['total_requests']}")
                print(f"  Memoria stimata: {stats_with_cache['cache']['total_memory_usage']}")

                print("\n" + "="*50 + "\n")

    # Stampa statistiche complete
    print("\nStatistiche complete (sistema senza cache):")
    for stats in stats_no_cache_full:
        print(f"Test {stats['id']}:")
        for stat_name, stat_value in stats.items():
            if stat_name == 'id':
                continue
            if stat_name != 'stats':
                if stat_name == 'cache':
                    continue
                print(f"  {stat_name}: {stat_value}")
            else:
                for n, v in stat_value.items():
                    print(f"    {n}: {v}")

    print("\nStatistiche complete (sistema con cache):")
    for stats in stats_with_cache_full:
        print(f"Test {stats['id']}:")
        for stat_name, stat_value in stats.items():
            if stat_name == 'id':
                continue
            if stat_name != 'cache':
                if stat_name == 'stats':
                    for n, v in stat_value.items():
                        print(f"    {n}: {v}")
                else:
                    print(f"  {stat_name}: {stat_value}")
            else:
                for cache_name, stats in stat_value.items():
                    if isinstance(stats, dict) and 'hit_rate' in stats:
                        print(f"    {cache_name}: Hit Rate: {stats['hit_rate']:.1f}%, Size: {stats['size']}, Total Requests: {stats['total_requests']}")