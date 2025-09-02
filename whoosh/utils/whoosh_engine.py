import logging
import time
import os
from typing import List, Dict, Any, Optional
from whoosh import index, scoring
from whoosh.qparser import QueryParser, MultifieldParser, OrGroup, AndGroup
from whoosh.query import And, Or, Not, Term, Phrase, Wildcard
from whoosh.searching import Results
from whoosh.highlight import highlight, WholeFragmenter, ContextFragmenter
from collections import Counter

# Configurazione logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

class WhooshSearchEngine:
    """
    Motore di ricerca Whoosh con funzionalità avanzate compatibili con PostgreSQL.
    Supporta ricerche keyword-based, per campi specifici, operatori booleani e frasi esatte.
    """
    
    def __init__(self, index_dir: str = "whoosh_index", ranking: Optional[str] = "Frequency"):
        """
        Inizializza il motore di ricerca Whoosh.
        
        Args:
            index_dir: Directory dell'indice Whoosh
            ranking: Metodo di ranking ("Frequency" o "Density")
        """
        self.logger = logging.getLogger(__name__)
        self.index_dir = index_dir
        self.index = None
        self.ranking = ranking if ranking in ["Frequency", "Density"] else "Frequency"
        
        # Configurazione scorer basata sul ranking
        if self.ranking == "Frequency":
            self.scorer = scoring.TF_IDF()
        else:  # Density
            self.scorer = scoring.BM25F()
        
        try:
            self._connect()
            self.logger.info(f"Whoosh Search Engine inizializzato. Metodo di ranking: {self.ranking}")
        except Exception as e:
            self.logger.error(f"Errore nell'inizializzazione: {e}")
            raise
    
    def _connect(self):
        """Apre connessione all'indice Whoosh."""
        try:
            if index.exists_in(self.index_dir):
                self.index = index.open_dir(self.index_dir)
                self.logger.info("Connessione all'indice Whoosh stabilita")
            else:
                raise FileNotFoundError(f"Indice non trovato in {self.index_dir}")
        except Exception as e:
            self.logger.error(f"Errore nell'apertura indice: {e}")
            raise
    
    def _reconnect_if_needed(self):
        """Riconnette se necessario."""
        try:
            if not self.index:
                self._connect()
        except Exception as e:
            self.logger.warning(f"Tentativo di riconnessione: {e}")
            self._connect()
    
    def search(self, query: str, limit: int = 10, fields: List[str] = None, 
               min_score: float = 0.0) -> List[Dict[str, Any]]:
        """
        Esegue ricerca full-text generale sui documenti.
        
        Args:
            query: Stringa di ricerca
            limit: Numero massimo di risultati
            fields: Campi specifici su cui cercare (None = tutti)
            min_score: Score minimo per i risultati
            
        Returns:
            Lista di dizionari con risultati della ricerca
        """
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()
            
            if fields:
                results = self._search_specific_fields(query, fields, limit, min_score)
            else:
                results = self._search_all_fields(query, limit, min_score)
            
            search_time = time.time() - start_time
            self.logger.info(f"Ricerca completata in {search_time:.3f}s, {len(results)} risultati")
            
            # Aggiunge tempo di ricerca ai metadati
            for result in results:
                result['search_time'] = search_time
            
            return results
            
        except Exception as e:
            self.logger.error(f"Errore durante la ricerca: {e}")
            return []
    
    def _search_all_fields(self, query: str, limit: int, min_score: float) -> List[Dict[str, Any]]:
        """Ricerca su tutti i campi indicizzati."""
        try:
            with self.index.searcher(weighting=self.scorer) as searcher:
                # Parser multi-campo per ricerca generale
                parser = MultifieldParser(
                    ["title", "text", "combined_text"],
                    self.index.schema,
                    group=OrGroup
                )
                
                parsed_query = parser.parse(query)
                results = searcher.search(parsed_query, limit=limit)
                
                return self._format_results(results, searcher, min_score)
                
        except Exception as e:
            self.logger.error(f"Errore nella ricerca generale: {e}")
            return []
    
    def _search_specific_fields(self, query: str, fields: List[str], 
                              limit: int, min_score: float) -> List[Dict[str, Any]]:
        """
        Ricerca su campi specifici - compatibile con PostgreSQL engine.
        Supporta ricerca su più campi come il PostgreSQL engine.
        
        Args:
            query: Query di ricerca
            fields: Lista di campi su cui cercare
            limit: Numero massimo di risultati
            min_score: Score minimo per i risultati
            
        Returns:
            Lista di risultati formattati
        """
        try:
            # Mappa i nomi dei campi da PostgreSQL a Whoosh
            field_mapping = {
                'title': 'title',
                'content': 'text',  # PostgreSQL usa 'content', Whoosh usa 'text'
                'label': 'label',
                'combined_text': 'combined_text'
            }
            
            # Filtra e mappa i campi validi
            valid_fields = []
            for field in fields:
                mapped_field = field_mapping.get(field, field)
                if mapped_field in self.index.schema:
                    valid_fields.append(mapped_field)
            
            if not valid_fields:
                # Se nessun campo è valido, usa ricerca generale
                return self._search_all_fields(query, limit, min_score)
            
            with self.index.searcher(weighting=self.scorer) as searcher:
                # Usa MultifieldParser per cercare su più campi specificati
                parser = MultifieldParser(valid_fields, self.index.schema, group=OrGroup)
                parsed_query = parser.parse(query)
                results = searcher.search(parsed_query, limit=limit)
                
                formatted_results = self._format_results(results, searcher, min_score)
                
                # Aggiunge informazioni sui campi matched (compatibilità con PostgreSQL)
                for result in formatted_results:
                    result['matched_fields'] = valid_fields
                
                return formatted_results
                
        except Exception as e:
            self.logger.error(f"Errore nella ricerca per campi specifici: {e}")
            return []
    
    def boolean_search(self, query: str, limit: int = 10) -> List[Dict[str, Any]]:
        """
        Ricerca con operatori booleani (AND, OR, NOT).
        
        Args:
            query: Query con operatori booleani
            limit: Numero massimo di risultati
            
        Returns:
            Lista di risultati
        """
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()
            
            with self.index.searcher(weighting=self.scorer) as searcher:
                # Parser booleano con supporto multi-campo
                parser = MultifieldParser(
                    ["title", "text", "combined_text"], 
                    self.index.schema,
                    group=AndGroup
                )
                
                # Normalizza operatori
                normalized_query = self._normalize_boolean_query(query)
                parsed_query = parser.parse(normalized_query)
                
                results = searcher.search(parsed_query, limit=limit)
                formatted_results = self._format_results(results, searcher)
                
                search_time = time.time() - start_time
                for result in formatted_results:
                    result['search_time'] = search_time
                
                self.logger.info(f"Ricerca booleana completata: {len(formatted_results)} risultati")
                return formatted_results
                
        except Exception as e:
            self.logger.error(f"Errore nella ricerca booleana: {e}")
            return []
    
    def phrase_search(self, phrase: str, limit: int = 10) -> List[Dict[str, Any]]:
        """
        Ricerca di frasi esatte.
        
        Args:
            phrase: Frase da cercare
            limit: Numero massimo di risultati
            
        Returns:
            Lista di risultati
        """
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()
            
            with self.index.searcher(weighting=self.scorer) as searcher:
                # Parser per frasi esatte
                parser = MultifieldParser(
                    ["title", "text", "combined_text"], 
                    self.index.schema
                )
                
                # Assicura che la frase sia tra virgolette
                if not (phrase.startswith('"') and phrase.endswith('"')):
                    phrase = f'"{phrase}"'
                
                parsed_query = parser.parse(phrase)
                results = searcher.search(parsed_query, limit=limit)
                formatted_results = self._format_results(results, searcher)
                
                search_time = time.time() - start_time
                for result in formatted_results:
                    result['search_time'] = search_time
                
                self.logger.info(f"Ricerca frase completata: {len(formatted_results)} risultati")
                return formatted_results
                
        except Exception as e:
            self.logger.error(f"Errore nella ricerca frase: {e}")
            return []
    
    def field_search(self, field: str, query: str, limit: int = 10) -> List[Dict[str, Any]]:
        """
        Ricerca su un campo specifico - ora supporta anche più campi.
        Mantiene compatibilità con l'interfaccia esistente ma internamente usa _search_specific_fields.
        
        Args:
            field: Nome del campo o lista di campi (title, content, label)
            query: Query di ricerca
            limit: Numero massimo di risultati
            
        Returns:
            Lista di risultati
        """
        # Se field è una stringa, convertila in lista per compatibilità
        if isinstance(field, str):
            fields = [field]
        else:
            fields = field
        
        # Valida i campi
        valid_field_names = {'title', 'content', 'text', 'label'}
        invalid_fields = [f for f in fields if f not in valid_field_names]
        
        if invalid_fields:
            self.logger.error(f"Campi non validi: {invalid_fields}")
            return []

        start_time = time.time()
        
        try:
            # Usa la funzione _search_specific_fields per supportare più campi
            results = self._search_specific_fields(query, fields, limit, 0.0)
            
            search_time = time.time() - start_time
            for result in results:
                result['search_time'] = search_time
                # Per compatibilità con l'interfaccia originale
                if isinstance(field, str):
                    result['matched_field'] = field
                else:
                    result['matched_fields'] = fields
            
            self.logger.info(f"Ricerca su campo(i) {fields} completata: {len(results)} risultati")
            return results
            
        except Exception as e:
            self.logger.error(f"Errore nella ricerca per campo: {e}")
            return []
    
    def wildcard_search(self, query: str, limit: int = 10) -> List[Dict[str, Any]]:
        """
        Ricerca con wildcards (* e ?).
        
        Args:
            query: Query con wildcards
            limit: Numero massimo di risultati
            
        Returns:
            Lista di risultati
        """
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()
            
            with self.index.searcher(weighting=self.scorer) as searcher:
                parser = MultifieldParser(
                    ["title", "text", "combined_text"], 
                    self.index.schema
                )
                
                parsed_query = parser.parse(query)
                results = searcher.search(parsed_query, limit=limit)
                formatted_results = self._format_results(results, searcher)
                
                search_time = time.time() - start_time
                for result in formatted_results:
                    result['search_time'] = search_time
                
                self.logger.info(f"Ricerca wildcard completata: {len(formatted_results)} risultati")
                return formatted_results
                
        except Exception as e:
            self.logger.error(f"Errore nella ricerca wildcard: {e}")
            return []
    
    def get_document_by_id(self, doc_id: int) -> Optional[Dict[str, Any]]:
        """
        Recupera un documento specifico per ID - compatibile con PostgreSQL engine.
        
        Args:
            doc_id: ID del documento
            
        Returns:
            Dizionario con i dati del documento o None se non trovato
        """
        start_time = time.time()
        try:
            self._reconnect_if_needed()
            
            with self.index.searcher() as searcher:
                # Whoosh non ha ID numerici come PostgreSQL, quindi cerchiamo per docnum
                # oppure se c'è un campo id, lo usiamo
                if 'id' in self.index.schema:
                    results = searcher.search(Term('id', str(doc_id)), limit=1)
                    if results:
                        doc = results[0]
                        search_time = time.time() - start_time
                        return {
                            'id': doc.get('id', doc_id),
                            'title': doc.get('title', ''),
                            'label': doc.get('label', ''),
                            'content': doc.get('text', ''),  # Mappa text -> content per compatibilità
                            'search_time': search_time
                        }
                else:
                    # Fallback: usa docnum se non c'è campo id
                    try:
                        doc = searcher.document(docnum=doc_id)
                        search_time = time.time() - start_time
                        return {
                            'id': doc_id,
                            'title': doc.get('title', ''),
                            'label': doc.get('label', ''),
                            'content': doc.get('text', ''),
                            'search_time': search_time
                        }
                    except:
                        pass
            
            return None
            
        except Exception as e:
            self.logger.error(f"Errore nel recupero documento: {e}")
            return None
    
    def get_stats(self) -> Dict[str, Any]:
        """
        Restituisce statistiche dell'indice - compatibile con PostgreSQL engine.
        
        Returns:
            Dizionario con statistiche
        """
        try:
            self._reconnect_if_needed()
            
            with self.index.searcher() as searcher:
                stats = {
                    'total_documents': searcher.doc_count(),
                    'unique_terms': len(list(searcher.lexicon("combined_text"))),
                    'index_size_mb': self._get_index_size() / (1024 * 1024),
                    'schema_fields': list(self.index.schema.names())
                }
                
                # Statistiche per label (compatibile con PostgreSQL)
                try:
                    labels = [doc['label'] for doc in searcher.documents() if doc.get('label')]
                    stats['documents_by_label'] = dict(Counter(labels))
                except:
                    stats['documents_by_label'] = {}
                
                # Media lunghezza contenuto (compatibile con PostgreSQL)
                try:
                    content_lengths = [len(doc.get('text', '')) for doc in searcher.documents()]
                    stats['avg_content_length'] = sum(content_lengths) / len(content_lengths) if content_lengths else 0
                except:
                    stats['avg_content_length'] = 0
                
                return stats
                
        except Exception as e:
            self.logger.error(f"Errore nel recupero statistiche: {e}")
            return {}
    
    def _normalize_boolean_query(self, query: str) -> str:
        """Normalizza query booleana per Whoosh."""
        import re
        query = re.sub(r'\band\b', 'AND', query, flags=re.IGNORECASE)
        query = re.sub(r'\bor\b', 'OR', query, flags=re.IGNORECASE)  
        query = re.sub(r'\bnot\b', 'NOT', query, flags=re.IGNORECASE)
        return query
    
    def _format_results(self, results: Results, searcher, min_score: float = 0.0) -> List[Dict[str, Any]]:
        """
        Formatta i risultati in dizionari standardizzati - compatibile con PostgreSQL engine.
        
        Returns:
            Lista di risultati nel formato standard
        """
        formatted_results = []
        
        for result in results:
            # Filtra per score minimo
            if result.score < min_score:
                continue
                
            # Genera snippet evidenziato
            snippet = self._generate_snippet(result, searcher)
            
            # Formato standardizzato compatibile con PostgreSQL
            formatted_result = {
                'id': result.get('id', result.docnum),  # Usa ID se disponibile, altrimenti docnum
                'title': result.get('title', ''),
                'label': result.get('label', ''),
                'content': self._truncate_content(result.get('text', '')),  # Mappa text -> content
                'score': float(result.score),
                'snippet': snippet
            }
            
            formatted_results.append(formatted_result)
        
        return formatted_results
    
    def _generate_snippet(self, result, searcher) -> str:
        """Genera snippet evidenziato per il risultato."""
        try:
            text = result.get('text', '')
            if len(text) <= 200:
                return text
            
            # Crea snippet più significativo possibile
            # Se il contenuto è lungo, prende l'inizio
            return text[:200] + '...' if len(text) > 200 else text
            
        except Exception:
            return result.get('text', '')[:200] + '...'
    
    def _truncate_content(self, content: str, max_length: int = 500) -> str:
        """Tronca il contenuto se troppo lungo."""
        if len(content) <= max_length:
            return content
        return content[:max_length] + '...'
    
    def _get_index_size(self) -> int:
        """Calcola dimensione indice in bytes."""
        total_size = 0
        try:
            for dirpath, dirnames, filenames in os.walk(self.index_dir):
                for filename in filenames:
                    filepath = os.path.join(dirpath, filename)
                    total_size += os.path.getsize(filepath)
        except:
            pass
        return total_size
    
    def optimize_index(self) -> bool:
        """
        Ottimizza l'indice per migliori performance.
        
        Returns:
            True se successo, False altrimenti
        """
        try:
            self._reconnect_if_needed()
            
            start_time = time.time()
            with self.index.writer() as writer:
                writer.commit(optimize=True)
            
            optimization_time = time.time() - start_time
            self.logger.info(f"Indice ottimizzato in {optimization_time:.2f}s")
            return True
            
        except Exception as e:
            self.logger.error(f"Errore nell'ottimizzazione indice: {e}")
            return False
    
    def close(self):
        """Chiude connessione all'indice."""
        try:
            if self.index:
                self.index.close()
                self.index = None
            self.logger.info("Connessione Whoosh chiusa")
        except Exception as e:
            self.logger.error(f"Errore nella chiusura: {e}")
    
    def __enter__(self):
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()


# Esempio di utilizzo
if __name__ == "__main__":
    # Test del motore di ricerca Whoosh con supporto multi-campo
    engine = WhooshSearchEngine("whoosh_index", ranking="Frequency")
    
    try:
        # Test ricerca generale
        results = engine.search("Tony Blair trust voters", limit=5)
        print(f"Trovati {len(results)} risultati per 'Tony Blair trust voters'")
        for result in results[:2]:
            print(f"{result['id']}- {result['title']} (Score: {result['score']:.3f})")
        
        # Test ricerca su campi specifici (come PostgreSQL)
        field_results = engine.search("internet privacy", fields=['title', 'content'], limit=3)
        print(f"\nTrovati {len(field_results)} risultati per ricerca su campi specifici")
        for result in field_results[:2]:
            print(f"{result['id']}- {result['title']} (Score: {result['score']:.3f})")
            print(f"  Campi matched: {result.get('matched_fields', [])}")
        
        # Test field_search con supporto per più campi
        multi_field_results = engine.field_search(['title', 'content'], "football team", limit=3)
        print(f"\nTrovati {len(multi_field_results)} risultati per field_search su più campi")
        for result in multi_field_results[:2]:
            print(f"{result['id']}- {result['title']} (Score: {result['score']:.3f})")

        # Test ricerca booleana
        bool_results = engine.boolean_search("internet AND privacy", limit=3)
        print(f"\nTrovati {len(bool_results)} risultati per ricerca booleana")
        for result in bool_results[:2]:
            print(f"{result['id']}- {result['title']} (Score: {result['score']:.3f})")

        # Test ricerca frase
        phrase_results = engine.phrase_search("Brown names 16 March for Budget", limit=3)
        print(f"\nTrovati {len(phrase_results)} risultati per frase esatta")
        for result in phrase_results[:2]:
            print(f"{result['id']}- {result['title']} (Score: {result['score']:.3f})")

        # Test get_document_by_id (compatibile con PostgreSQL)
        doc = engine.get_document_by_id(0)
        if doc:
            print(f"\nDocumento recuperato per ID: {doc['title']}")

        # Statistiche (compatibili con PostgreSQL)
        stats = engine.get_stats()
        print(f"\nStatistiche indice:")
        print(f"- Documenti totali: {stats.get('total_documents', 0)}")
        print(f"- Termini unici: {stats.get('unique_terms', 0)}")
        print(f"- Dimensione indice: {stats.get('index_size_mb', 0):.2f} MB")
        print(f"- Documenti per label: {stats.get('documents_by_label', {})}")
        
    except Exception as e:
        print(f"Errore durante i test: {e}")
    
    finally:
        engine.close()