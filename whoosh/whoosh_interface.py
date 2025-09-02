import logging
import time
import os
from typing import List, Dict, Any, Optional
import os, sys

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PARENT_DIR = os.path.dirname(BASE_DIR)

if PARENT_DIR not in sys.path:
    sys.path.insert(0, PARENT_DIR)

from utils.whoosh_engine import WhooshSearchEngine
from utils.whoosh_query_processor import WhooshQueryProcessor, QueryType
from scripts.export_results import export_to_json

# Configurazione logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
logger = logging.getLogger(__name__)

class WhooshUnifiedInterface:
    """
    Interfaccia unificata per il motore di ricerca Whoosh.
    
    Fornisce un'API standardizzata compatibile con PostgreSQL per interagire con l'indice,
    gestendo automaticamente il tipo di ricerca e la pre-elaborazione delle query.
    """
    
    def __init__(self, index_dir: str = "whoosh_index", ranking: Optional[str] = "Frequency"):
        """
        Inizializza l'interfaccia Whoosh.
        
        Args:
            index_dir: Directory dell'indice Whoosh
            ranking: Metodo di ranking ("Frequency" o "Density")
        """
        self.index_dir = index_dir
        self.ranking = ranking
        
        # Verifica esistenza indice
        if not os.path.exists(index_dir):
            logger.error(f"Directory indice non trovata: {index_dir}")
            raise FileNotFoundError(f"Indice Whoosh non trovato in {index_dir}")
        
        # Inizializza componenti
        try:
            self.engine = WhooshSearchEngine(index_dir=index_dir, ranking=ranking)
            self.query_processor = WhooshQueryProcessor(index_dir=index_dir)
            
            # Metriche performance
            self.avg_response_time = 0.0
            self.avg_ranking = 0.0
            self.total_requests = 0
            
            logger.info(f"Interfaccia unificata Whoosh avviata. Ranking: {ranking}")
            
        except Exception as e:
            logger.error(f"Errore nell'inizializzazione: {e}")
            raise
    
    def search(self, user_query: str, limit: int = 10, min_score: float = 0.0) -> Dict[str, Any]:
        """
        Esegue una ricerca standardizzata.
        
        Analizza la query utente, la processa, e delega al motore appropriato
        per eseguire la ricerca più adatta.
        
        Args:
            user_query: Query di ricerca dell'utente
            limit: Numero massimo di risultati
            min_score: Score minimo di rilevanza
            
        Returns:
            Dizionario standardizzato con risultati e metadati
        """
        if not user_query or not user_query.strip():
            logger.warning("Query vuota ricevuta")
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
        
        # Step 2: Esecuzione della ricerca in base al tipo
        results = []
        start_time = time.time()
        
        try:
            if query_type == QueryType.BOOLEAN:
                logger.info(f"Eseguendo ricerca booleana: '{effective_query}'")
                results = self.engine.boolean_search(effective_query, limit)
                
            elif query_type == QueryType.PHRASE:
                logger.info(f"Eseguendo ricerca per frase: '{effective_query}'")
                results = self.engine.phrase_search(effective_query, limit)
                
            elif query_type == QueryType.FIELD:
                field_queries = processed_query_info['components']['field_queries']
                if field_queries:
                    if len(field_queries) == 1:
                        # Ricerca su singolo campo
                        field, _, value = field_queries[0]
                        logger.info(f"Eseguendo ricerca su campo singolo '{field}' per: '{value}'")
                        results = self.engine.field_search(field, value, limit)
                    else:
                        # Ricerca su campi multipli - usa field_search con lista di campi
                        fields = [fq[0] for fq in field_queries]
                        values = [fq[2] for fq in field_queries]
                        # Per ora combiniamo i valori in una query unica e cerchiamo su tutti i campi
                        combined_query = " ".join(values)
                        logger.info(f"Eseguendo ricerca su {len(field_queries)} campi: {[f'{fq[0]}:{fq[2]}' for fq in field_queries]}")
                        results = self.engine.field_search(fields, combined_query, limit)
                else:
                    # Fallback a ricerca generale
                    results = self.engine.search(effective_query, limit, min_score=min_score)
                    
            elif query_type == QueryType.WILDCARD:
                logger.info(f"Eseguendo ricerca wildcard: '{effective_query}'")
                results = self.engine.wildcard_search(effective_query, limit)
                
            else:  # SIMPLE
                logger.info(f"Eseguendo ricerca semplice: '{effective_query}'")
                results = self.engine.search(effective_query, limit, min_score=min_score)
        
        except Exception as e:
            logger.error(f"Errore critico durante ricerca: {e}", exc_info=True)
            return self._format_error_output(f"Errore interno: {str(e)}")
        
        # Step 3: Calcolo metriche e formattazione output
        end_time = time.time()
        response_time = end_time - start_time
        
        formatted_results = self._format_results(results)
        
        output = {
            "query": user_query,
            "processed_info": processed_query_info,
            "total_results": len(formatted_results),
            "results": formatted_results,
            "metrics": {
                "response_time_ms": response_time * 1000,
                "engine_used": f"Whoosh ({self.ranking})"
            },
            "status": "success",
            "errors": []
        }
        
        # Aggiorna statistiche globali
        self._update_metrics(response_time, results)
        
        logger.info(f"Ricerca completata per '{user_query}' in {response_time:.3f}s")
        return output
    
    def get_stats(self) -> Dict[str, Any]:
        """
        Restituisce statistiche complete del sistema.
        
        Returns:
            Dizionario con statistiche dettagliate
        """
        try:
            engine_stats = self.engine.get_stats()
            
            return {
                "engine": "Whoosh",
                "ranking_method": self.ranking,
                "index_directory": self.index_dir,
                "caching_enabled": False,  # Whoosh non ha cache separata
                "stats": engine_stats,
                "performance": {
                    "avg_response_time_ms": self.avg_response_time * 1000,
                    "avg_ranking_score": self.avg_ranking,
                    "total_requests": self.total_requests
                }
            }
            
        except Exception as e:
            logger.error(f"Errore nel recupero statistiche: {e}")
            return {"error": "Errore nel recupero statistiche"}

    def close(self):
        """Chiude le connessioni del motore."""
        try:
            self.engine.close()
            self.query_processor.close()
            logger.info("Interfaccia Whoosh chiusa")
        except Exception as e:
            logger.error(f"Errore nella chiusura: {e}")
    
    def _format_results(self, results: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
        """
        Assicura formato uniforme dei risultati compatibile con PostgreSQL.
        
        Args:
            results: Lista risultati dal motore Whoosh
            
        Returns:
            Lista risultati formattati
        """
        standardized_results = []
        
        for res in results:
            standardized_result = {
                "id": res.get('id', res.get('docnum', 0)),  # Include ID come PostgreSQL
                "title": res.get('title', ''),
                "snippet": res.get('snippet', res.get('text', 'N/A')[:200]),  # Usa snippet se disponibile, altrimenti tronca text
                "score": res.get('score', 0.0),
                "matched_fields": res.get('matched_fields', ['title', 'content', 'label']),  # Stesso default di PostgreSQL
                "metadata": {
                    "source": f"Whoosh {self.ranking}",  # Consistente con PostgreSQL format
                    "search_time_s": res.get('search_time', 0),
                    "cached": False  # Whoosh non usa cache esterna
                }
            }
            standardized_results.append(standardized_result)
        
        return standardized_results
    
    def _format_error_output(self, message: str, errors: List[str] = None, 
                           suggestions: List[str] = None) -> Dict[str, Any]:
        """
        Crea output standardizzato per errori.
        
        Args:
            message: Messaggio di errore principale
            errors: Lista errori aggiuntivi
            suggestions: Lista suggerimenti
            
        Returns:
            Dizionario di errore standardizzato
        """
        return {
            "query": None,
            "processed_info": None,
            "total_results": 0,
            "results": [],
            "metrics": {
                "response_time_ms": 0,
                "engine_used": f"Whoosh ({self.ranking})"
            },
            "status": "error",
            "errors": [message] + (errors if errors else []),
            "suggestions": suggestions if suggestions else []
        }
    
    def _update_metrics(self, response_time: float, results: List[Dict[str, Any]]):
        """Aggiorna metriche di performance globali."""
        self.total_requests += 1
        
        # Calcola media mobile del tempo di risposta
        self.avg_response_time += (response_time - self.avg_response_time) / self.total_requests
        
        # Calcola media mobile del ranking score
        if results:
            avg_score = sum(r['score'] for r in results) / len(results)
            self.avg_ranking += (avg_score - self.avg_ranking) / self.total_requests
    
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
                'relevant_docs': query_data.get('relevant_docs', [])
            })
        
        logger.info(f"Caricate {len(test_queries)} query di test")
        return test_queries
        
    except Exception as e:
        logger.error(f"Errore caricamento query: {e}")
        return []


# Esempio di utilizzo e testing
if __name__ == "__main__":
    print("=" * 60)
    print("TEST WHOOSH UNIFIED INTERFACE")
    print("=" * 60)
    
    # Carica query di test
    queries = _load_queries_from_file("../docs/queries.json")

    # Test con entrambi i metodi di ranking
    for ranking_method in ["Frequency", "Density"]:
        print(f"\n{'='*20} TEST RANKING: {ranking_method} {'='*20}")
        
        try:
            with WhooshUnifiedInterface(ranking=ranking_method) as interface:

                for query_data in queries:  # Test tutte le query
                    query_id = query_data['id']
                    query_text = query_data['query']
                    relevant_docs = query_data.get('relevant_docs', [])
                    
                    print(f"\n--- Query {query_id}: '{query_text}' ---")
                    
                    # Esegui ricerca
                    result = interface.search(query_text, limit=5)
                    
                    print(f"Status: {result['status']}")
                    print(f"Tempo risposta: {result['metrics']['response_time_ms']:.2f}ms")
                    print(f"Risultati totali: {result['total_results']}")
                    
                    if result['results']:
                        print("Primi risultati:")
                        for i, res in enumerate(result['results'][:2], 1):
                            print(f"  {i}. {res['title']} (ID: {res['id']}, Score: {res['score']:.3f})")
                            print(f"     Snippet: {res['snippet'][:100]}...")
                    
                    result['relevant_docs'] = relevant_docs

                    export_to_json(result)
                    
                
                # Statistiche finali
                print(f"\n--- Statistiche {ranking_method} ---")
                stats = interface.get_stats()
                
                if 'error' not in stats:
                    print(f"Engine: {stats['engine']}")
                    print(f"Documenti totali: {stats['stats'].get('total_documents', 0)}")
                    print(f"Termini unici: {stats['stats'].get('unique_terms', 0)}")
                    print(f"Dimensione indice: {stats['stats'].get('index_size_mb', 0):.2f} MB")
                    print(f"Tempo medio risposta: {stats['performance']['avg_response_time_ms']:.2f}ms")
                    print(f"Score medio: {stats['performance']['avg_ranking_score']:.3f}\n")
                else:
                    print(f"Errore nel recupero statistiche: {stats['error']}")
        
        except Exception as e:
            print(f"Errore durante il test {ranking_method}: {e}")
    
    print(f"\n{'='*60}")
    print("TEST COMPLETATI")
    print("=" * 60)