import psycopg2
import logging
import time
from typing import List, Dict, Tuple, Optional, Any
from utils.password import PASSWORD

# Configurazione logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

class PostgreSQLSearchEngine:
    """
    Motore di ricerca PostgreSQL con supporto per full-text search avanzato.
    Supporta ricerche keyword-based, per campi specifici, operatori booleani e frasi esatte.
    """

    def __init__(self, db_config: Dict[str, str] = None, ranking: Optional[str] = "Frequency"):
        """
        Inizializza il motore di ricerca PostgreSQL.
        
        Args:
            db_config: Configurazione database (opzionale, usa default se None)
        """
        self.logger = logging.getLogger(__name__)
        
        # Configurazione database di default
        if db_config is None:
            db_config = {
                'dbname': 'gestione',
                'user': 'postgres',
                'password': PASSWORD,
                'host': 'localhost',
                'port': '5432'
            }
        
        self.db_config = db_config
        self.conn = None
        self.cur = None
        self.ranking = ranking if ranking in ["Frequency", "Density"] else "Frequency"
        
        try:
            self._connect()
            self.logger.info("PostgreSQL Search Engine inizializzato con successo. Metodo di ranking: %s", self.ranking)
        except Exception as e:
            self.logger.error(f"Errore nell'inizializzazione: {e}")
            raise
    
    def _connect(self):
        """Stabilisce connessione al database PostgreSQL."""
        try:
            self.conn = psycopg2.connect(**self.db_config)
            self.cur = self.conn.cursor()
            self.logger.info("Connessione al database stabilita")
        except psycopg2.Error as e:
            self.logger.error(f"Errore di connessione al database: {e}")
            raise
    
    def _reconnect_if_needed(self):
        """Riconnette se la connessione è stata persa."""
        try:
            if self.conn.closed:
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
        rank = 0
        if self.ranking == "Density":
            rank = 16

        sql = """
        SELECT id, title, label, content,
               ts_rank(tsv, plainto_tsquery('english', %s), %s) AS score,
               ts_headline('english', content, plainto_tsquery('english', %s), 
                          'MaxWords=30, MinWords=10') AS snippet
        FROM documents
        WHERE tsv @@ plainto_tsquery('english', %s)
        AND ts_rank(tsv, plainto_tsquery('english', %s), %s) >= %s
        ORDER BY score DESC
        LIMIT %s;
        """

        self.cur.execute(sql, (query, rank, query, query, query, rank, min_score, limit))
        rows = self.cur.fetchall()
        
        return self._format_results(rows)
    
    def _search_specific_fields(self, query: str, fields: List[str], 
                              limit: int, min_score: float) -> List[Dict[str, Any]]:
        """Ricerca su campi specifici."""
        # Costruisce la query per campi specifici
        field_conditions = []
        params = []
        
        for field in fields:
            if field in ['title', 'content', 'label']:
                field_conditions.append(f"to_tsvector('english', {field}) @@ plainto_tsquery('english', %s)")
                params.append(query)
        
        if not field_conditions:
            return self._search_all_fields(query, limit, min_score)
        
        where_clause = " OR ".join(field_conditions)
        
        rank = 0
        if self.ranking == "Density":
            rank = 16

        sql = f"""
        SELECT id, title, label, content,
               ts_rank(tsv, plainto_tsquery('english', %s), %s) AS score,
               ts_headline('english', content, plainto_tsquery('english', %s), 
                          'MaxWords=30, MinWords=10') AS snippet
        FROM documents
        WHERE ({where_clause})
        AND ts_rank(tsv, plainto_tsquery('english', %s), %s) >= %s
        ORDER BY score DESC
        LIMIT %s;
        """

        all_params = params + [query, rank, query, query, rank, min_score, limit]
        self.cur.execute(sql, all_params)
        rows = self.cur.fetchall()
        
        return self._format_results(rows)
    
    def boolean_search(self, query: str, limit: int = 10) -> List[Dict[str, Any]]:
        """
        Ricerca con operatori booleani (AND, OR, NOT).
        
        Args:
            query: Query con operatori booleani (es: "python AND machine OR learning")
            limit: Numero massimo di risultati
            
        Returns:
            Lista di risultati
        """
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()
            
            # Converte query in formato tsquery
            tsquery = self._convert_to_tsquery(query)
            
            rank = 0
            if self.ranking == "Density":
                rank = 16

            sql = """
            SELECT id, title, label, content,
                   ts_rank(tsv, to_tsquery('english', %s), %s) AS score,
                   ts_headline('english', content, to_tsquery('english', %s), 
                              'MaxWords=30, MinWords=10') AS snippet
            FROM documents
            WHERE tsv @@ to_tsquery('english', %s)
            ORDER BY score DESC
            LIMIT %s;
            """

            self.cur.execute(sql, (tsquery, rank, tsquery, tsquery, limit))
            rows = self.cur.fetchall()
            
            results = self._format_results(rows)
            search_time = time.time() - start_time
            
            for result in results:
                result['search_time'] = search_time
            
            self.logger.info(f"Ricerca booleana completata: {len(results)} risultati")
            return results
            
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
            
            rank = 0
            if self.ranking == "Density":
                rank = 16
            # Usa phraseto_tsquery per frasi esatte
            sql = """
            SELECT id, title, label, content,
                   ts_rank(tsv, phraseto_tsquery('english', %s), %s) AS score,
                   ts_headline('english', content, phraseto_tsquery('english', %s), 
                              'MaxWords=30, MinWords=10') AS snippet
            FROM documents
            WHERE tsv @@ phraseto_tsquery('english', %s)
            ORDER BY score DESC
            LIMIT %s;
            """
            
            self.cur.execute(sql, (phrase, rank, phrase, phrase, limit))
            rows = self.cur.fetchall()
            
            results = self._format_results(rows)
            search_time = time.time() - start_time
            
            for result in results:
                result['search_time'] = search_time
            
            self.logger.info(f"Ricerca frase completata: {len(results)} risultati")
            return results
            
        except Exception as e:
            self.logger.error(f"Errore nella ricerca frase: {e}")
            return []
    
    def field_search(self, field: str, query: str, limit: int = 10) -> List[Dict[str, Any]]:
        """
        Ricerca su un campo specifico.
        
        Args:
            field: Nome del campo (title, content, label)
            query: Query di ricerca
            limit: Numero massimo di risultati
            
        Returns:
            Lista di risultati
        """
        if field not in ['title', 'content', 'label']:
            self.logger.error(f"Campo non valido: {field}")
            return []
        
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()

            rank = 0
            if self.ranking == "Density":
                rank = 16
            
            sql = f"""
            SELECT id, title, label, content,
                   ts_rank(to_tsvector('english', {field}), plainto_tsquery('english', %s), %s) AS score,
                   ts_headline('english', {field}, plainto_tsquery('english', %s), 
                              'MaxWords=30, MinWords=10') AS snippet
            FROM documents
            WHERE to_tsvector('english', {field}) @@ plainto_tsquery('english', %s)
            ORDER BY score DESC
            LIMIT %s;
            """
            
            self.cur.execute(sql, (query, rank, query, query, limit))
            rows = self.cur.fetchall()
            
            results = self._format_results(rows)
            search_time = time.time() - start_time
            
            for result in results:
                result['search_time'] = search_time
                result['matched_field'] = field
            
            self.logger.info(f"Ricerca su campo {field} completata: {len(results)} risultati")
            return results
            
        except Exception as e:
            self.logger.error(f"Errore nella ricerca per campo: {e}")
            return []
    
    def get_document_by_id(self, doc_id: int) -> Optional[Dict[str, Any]]:
        """
        Recupera un documento specifico per ID.
        
        Args:
            doc_id: ID del documento
            
        Returns:
            Dizionario con i dati del documento o None se non trovato
        """
        start_time = time.time()
        try:
            self._reconnect_if_needed()
            
            sql = "SELECT id, title, label, content FROM documents WHERE id = %s;"
            self.cur.execute(sql, (doc_id,))
            row = self.cur.fetchone()
            search_time = time.time() - start_time

            if row:
                return {
                    'id': row[0],
                    'title': row[1],
                    'label': row[2],
                    'content': row[3],
                    'search_time': search_time
                }
            return None
            
        except Exception as e:
            self.logger.error(f"Errore nel recupero documento: {e}")
            return None
    
    def get_stats(self) -> Dict[str, Any]:
        """
        Restituisce statistiche del database.
        
        Returns:
            Dizionario con statistiche
        """
        try:
            self._reconnect_if_needed()
            
            stats = {}
            
            # Numero totale documenti
            self.cur.execute("SELECT COUNT(*) FROM documents;")
            stats['total_documents'] = self.cur.fetchone()[0]
            
            # Numero documenti per label
            self.cur.execute("SELECT label, COUNT(*) FROM documents GROUP BY label;")
            stats['documents_by_label'] = dict(self.cur.fetchall())
            
            # Dimensione media contenuto
            self.cur.execute("SELECT AVG(LENGTH(content)) FROM documents;")
            stats['avg_content_length'] = float(self.cur.fetchone()[0] or 0)
            
            return stats
            
        except Exception as e:
            self.logger.error(f"Errore nel recupero statistiche: {e}")
            return {}
    
    def _convert_to_tsquery(self, query: str) -> str:
        """Converte query con operatori booleani in formato tsquery."""
        # Sostituisce operatori
        query = query.replace(' AND ', ' & ')
        query = query.replace(' OR ', ' | ')
        query = query.replace(' NOT ', ' !')
        
        # Gestisce parole singole
        words = query.split()
        processed_words = []
        
        for word in words:
            if word not in ['&', '|', '!', '(', ')']:
                # Aggiunge : per matching parziale
                processed_words.append(f"{word}:*")
            else:
                processed_words.append(word)
        
        return ' '.join(processed_words)
    
    def _format_results(self, rows: List[Tuple]) -> List[Dict[str, Any]]:
        """Formatta i risultati della query in dizionari."""
        results = []
        
        for row in rows:
            result = {
                'id': row[0],
                'title': row[1],
                'label': row[2],
                'content': row[3][:500] + '...' if len(row[3]) > 500 else row[3],  # Truncate contenuto lungo
                'score': float(row[4]),
                'snippet': row[5] if len(row) > 5 else row[3][:200] + '...'
            }
            results.append(result)
        
        return results
    
    def close(self):
        """Chiude connessioni al database."""
        try:
            if self.cur:
                self.cur.close()
            if self.conn:
                self.conn.close()
            self.logger.info("Connessioni al database chiuse")
        except Exception as e:
            self.logger.error(f"Errore nella chiusura connessioni: {e}")
    
    def __enter__(self):
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()


# Esempio di utilizzo
if __name__ == "__main__":
    # Test del motore di ricerca
    with PostgreSQLSearchEngine() as engine:
        # Test ricerca generale
        results = engine.search("machine learning", limit=5)
        print(f"Trovati {len(results)} risultati per 'machine learning'")
        
        # Test ricerca booleana
        bool_results = engine.boolean_search("election AND economy", limit=3)
        print(f"Trovati {len(bool_results)} risultati per ricerca booleana")
        
        # Test ricerca frase
        phrase_results = engine.phrase_search("football team", limit=3)
        print(f"Trovati {len(phrase_results)} risultati per frase esatta")
        
        # Statistiche
        stats = engine.get_stats()
        print(f"Statistiche database: {stats}")