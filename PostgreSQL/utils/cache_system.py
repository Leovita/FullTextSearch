import time
import hashlib
import json
import threading
from typing import Dict, List, Any, Optional, Tuple
from collections import OrderedDict
from dataclasses import dataclass, asdict
import psycopg2
from utils.password import PASSWORD

@dataclass
class CacheEntry:
    """Struttura per entry della cache."""
    data: Any
    timestamp: float
    access_count: int = 0
    last_access: float = 0
    
    def is_expired(self, ttl: float) -> bool:
        """Controlla se l'entry è scaduta."""
        return (time.time() - self.timestamp) > ttl
    
    def access(self):
        """Aggiorna statistiche di accesso."""
        self.access_count += 1
        self.last_access = time.time()

class LRUCache:
    """
    Cache LRU thread-safe con TTL e statistiche.
    """
    
    def __init__(self, max_size: int = 1000, ttl: float = 300):  # 5 minuti TTL
        self.max_size = max_size
        self.ttl = ttl
        self.cache = OrderedDict()
        self.lock = threading.RLock()
        self.stats = {
            'hits': 0,
            'misses': 0,
            'evictions': 0,
            'expired': 0
        }
    
    def _make_key(self, query: str, params: tuple = (), **kwargs) -> str:
        """Genera chiave univoca per la cache."""
        key_data = {
            'query': query,
            'params': params,
            'kwargs': kwargs
        }
        key_str = json.dumps(key_data, sort_keys=True, default=str)
        return hashlib.md5(key_str.encode()).hexdigest()
    
    def get(self, key: str) -> Optional[Any]:
        """Recupera valore dalla cache."""
        with self.lock:
            if key in self.cache:
                entry = self.cache[key]
                
                # Controlla scadenza
                if entry.is_expired(self.ttl):
                    del self.cache[key]
                    self.stats['expired'] += 1
                    self.stats['misses'] += 1
                    return None
                
                # Sposta in fondo (most recently used)
                self.cache.move_to_end(key)
                entry.access()
                self.stats['hits'] += 1
                return entry.data
            
            self.stats['misses'] += 1
            return None
    
    def put(self, key: str, value: Any):
        """Inserisce valore nella cache."""
        with self.lock:
            if key in self.cache:
                # Aggiorna entry esistente
                self.cache[key].data = value
                self.cache[key].timestamp = time.time()
                self.cache.move_to_end(key)
            else:
                # Nuova entry
                if len(self.cache) >= self.max_size:
                    # Rimuovi oldest
                    oldest_key = next(iter(self.cache))
                    del self.cache[oldest_key]
                    self.stats['evictions'] += 1
                
                self.cache[key] = CacheEntry(
                    data=value,
                    timestamp=time.time(),
                    last_access=time.time()
                )
    
    def clear(self):
        """Svuota la cache."""
        with self.lock:
            self.cache.clear()
    
    def get_stats(self) -> Dict[str, Any]:
        """Restituisce statistiche della cache."""
        with self.lock:
            total_requests = self.stats['hits'] + self.stats['misses']
            hit_rate = (self.stats['hits'] / total_requests * 100) if total_requests > 0 else 0
            
            return {
                'size': len(self.cache),
                'max_size': self.max_size,
                'hit_rate': hit_rate,
                'hits': self.stats['hits'],
                'misses': self.stats['misses'],
                'evictions': self.stats['evictions'],
                'expired': self.stats['expired'],
                'total_requests': total_requests
            }

class PostgreSQLCachedSearchEngine:
    """
    Motore di ricerca PostgreSQL con sistema di caching avanzato.
    Implementa caching multi-livello con LRU, TTL e invalidazione intelligente.
    """
    
    def __init__(self, db_config: Dict[str, str] = None, cache_config: Dict[str, Any] = None):
        """
        Inizializza il motore con caching.
        
        Args:
            db_config: Configurazione database
            cache_config: Configurazione cache
        """
        # Configurazione database
        if db_config is None:
            db_config = {
                'dbname': 'gestione',
                'user': 'postgres',
                'password': PASSWORD,
                'host': 'localhost',
                'port': '5432'
            }
        
        # Configurazione cache
        if cache_config is None:
            cache_config = {
                'max_size': 1000,
                'ttl': 300,  # 5 minuti
                'result_cache_size': 500,
                'metadata_cache_size': 100
            }
        
        self.db_config = db_config
        self.cache_config = cache_config
        
        # Inizializza cache multiple
        self.query_cache = LRUCache(
            max_size=cache_config['max_size'],
            ttl=cache_config['ttl']
        )
        
        self.metadata_cache = LRUCache(
            max_size=cache_config['metadata_cache_size'],
            ttl=cache_config['ttl'] * 2  # TTL più lungo per metadati
        )
        
        self.stats_cache = LRUCache(
            max_size=50,
            ttl=cache_config['ttl'] * 4  # TTL ancora più lungo per statistiche
        )
        
        self.conn = None
        self.cur = None
        self._connect()
        
        print("✅ Sistema di caching inizializzato")
        print(f"   📊 Cache query: {cache_config['max_size']} entries, TTL: {cache_config['ttl']}s")
    
    def _connect(self):
        """Stabilisce connessione al database."""
        try:
            self.conn = psycopg2.connect(**self.db_config)
            self.cur = self.conn.cursor()
        except psycopg2.Error as e:
            raise Exception(f"Errore connessione database: {e}")
    
    def _reconnect_if_needed(self):
        """Riconnette se necessario."""
        try:
            if self.conn.closed:
                self._connect()
        except Exception:
            self._connect()
    
    def search_cached(self, query: str, limit: int = 10, fields: List[str] = None,
                     min_score: float = 0.0, use_cache: bool = True) -> List[Dict[str, Any]]:
        """
        Ricerca con caching automatico.
        
        Args:
            query: Stringa di ricerca
            limit: Limite risultati
            fields: Campi specifici
            min_score: Score minimo
            use_cache: Abilita/disabilita cache
            
        Returns:
            Risultati della ricerca
        """
        # Genera chiave cache
        cache_key = self.query_cache._make_key(
            query=query,
            params=(limit, min_score),
            fields=fields,
            method='search'
        )
        
        # Controlla cache se abilitata
        if use_cache:
            cached_result = self.query_cache.get(cache_key)
            if cached_result is not None:
                print(f"🎯 Cache HIT per query: {query[:30]}...")
                for result in cached_result:
                    result['cached'] = True
                return cached_result
        
        print(f"🔍 Cache MISS, eseguendo query: {query[:30]}...")
        
        # Esegui query sul database
        start_time = time.time()
        
        try:
            self._reconnect_if_needed()
            
            if fields:
                results = self._search_specific_fields(query, fields, limit, min_score)
            else:
                results = self._search_all_fields(query, limit, min_score)
            
            search_time = time.time() - start_time
            
            # Aggiungi metadati
            for result in results:
                result['search_time'] = search_time
                result['cached'] = False
            
            # Salva in cache
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"❌ Errore durante ricerca: {e}")
            return []
    
    def boolean_search_cached(self, query: str, limit: int = 10, 
                            use_cache: bool = True) -> List[Dict[str, Any]]:
        """Ricerca booleana con caching."""
        cache_key = self.query_cache._make_key(
            query=query,
            params=(limit,),
            method='boolean'
        )
        
        if use_cache:
            cached_result = self.query_cache.get(cache_key)
            if cached_result is not None:
                print(f"🎯 Cache HIT per ricerca booleana: {query[:30]}...")
                return cached_result
        
        print(f"🔍 Eseguendo ricerca booleana: {query[:30]}...")
        
        try:
            self._reconnect_if_needed()
            results = self._boolean_search_db(query, limit)
            
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"❌ Errore ricerca booleana: {e}")
            return []
    
    def phrase_search_cached(self, phrase: str, limit: int = 10, 
                           use_cache: bool = True) -> List[Dict[str, Any]]:
        """Ricerca frase con caching."""
        cache_key = self.query_cache._make_key(
            query=phrase,
            params=(limit,),
            method='phrase'
        )
        
        if use_cache:
            cached_result = self.query_cache.get(cache_key)
            if cached_result is not None:
                print(f"🎯 Cache HIT per frase: {phrase[:30]}...")
                return cached_result
        
        print(f"🔍 Eseguendo ricerca frase: {phrase[:30]}...")
        
        try:
            self._reconnect_if_needed()
            results = self._phrase_search_db(phrase, limit)
            
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"❌ Errore ricerca frase: {e}")
            return []
    
    def get_document_cached(self, doc_id: int, use_cache: bool = True) -> Optional[Dict[str, Any]]:
        """Recupera documento con caching."""
        cache_key = self.metadata_cache._make_key(
            query="get_document",
            params=(doc_id,)
        )
        
        if use_cache:
            cached_result = self.metadata_cache.get(cache_key)
            if cached_result is not None:
                print(f"🎯 Cache HIT per documento ID: {doc_id}")
                return cached_result
        
        start_time = time.time()
        try:
            self._reconnect_if_needed()
            
            sql = "SELECT id, title, label, content FROM documents WHERE id = %s;"
            self.cur.execute(sql, (doc_id,))
            row = self.cur.fetchone()
            search_time = time.time() - start_time

            if row:
                result = {
                    'id': row[0],
                    'title': row[1],
                    'label': row[2],
                    'content': row[3],
                    'cached': False,
                    'search_time': search_time
                }
                
                if use_cache:
                    self.metadata_cache.put(cache_key, result)
                
                return result
            
            return None
            
        except Exception as e:
            print(f"❌ Errore recupero documento: {e}")
            return None
    
    def get_stats(self, use_cache: bool = True) -> Dict[str, Any]:
        """Statistiche con caching."""
        cache_key = "database_stats"
        
        if use_cache:
            cached_result = self.stats_cache.get(cache_key)
            if cached_result is not None:
                print("🎯 Cache HIT per statistiche database")
                return cached_result
        
        try:
            self._reconnect_if_needed()
            
            stats = {}
            
            # Conteggio totale documenti
            self.cur.execute("SELECT COUNT(*) FROM documents;")
            stats['total_documents'] = self.cur.fetchone()[0]
            
            # Documenti per label
            self.cur.execute("SELECT label, COUNT(*) FROM documents GROUP BY label ORDER BY label;")
            stats['documents_by_label'] = dict(self.cur.fetchall())
            
            # Dimensione media contenuto
            self.cur.execute("SELECT AVG(LENGTH(content))::INTEGER FROM documents;")
            stats['avg_content_length'] = self.cur.fetchone()[0] or 0
            
            if use_cache:
                self.stats_cache.put(cache_key, stats)
            
            return stats
            
        except Exception as e:
            print(f"❌ Errore statistiche: {e}")
            return {}
    
    def _search_all_fields(self, query: str, limit: int, min_score: float) -> List[Dict[str, Any]]:
        """Ricerca su tutti i campi (implementazione database)."""
        sql = """
        SELECT id, title, label, content,
               ts_rank(tsv, plainto_tsquery('english', %s)) AS score,
               ts_headline('english', content, plainto_tsquery('english', %s), 
                          'MaxWords=30, MinWords=10') AS snippet
        FROM documents
        WHERE tsv @@ plainto_tsquery('english', %s)
        AND ts_rank(tsv, plainto_tsquery('english', %s)) >= %s
        ORDER BY score DESC
        LIMIT %s;
        """
        
        self.cur.execute(sql, (query, query, query, query, min_score, limit))
        return self._format_results(self.cur.fetchall())
    
    def _search_specific_fields(self, query: str, fields: List[str], 
                              limit: int, min_score: float) -> List[Dict[str, Any]]:
        """Ricerca su campi specifici."""
        field_conditions = []
        params = []
        
        for field in fields:
            if field in ['title', 'content', 'label']:
                field_conditions.append(f"to_tsvector('english', {field}) @@ plainto_tsquery('english', %s)")
                params.append(query)
        
        if not field_conditions:
            return self._search_all_fields(query, limit, min_score)
        
        where_clause = " OR ".join(field_conditions)
        
        sql = f"""
        SELECT id, title, label, content,
               ts_rank(tsv, plainto_tsquery('english', %s)) AS score,
               ts_headline('english', content, plainto_tsquery('english', %s), 
                          'MaxWords=30, MinWords=10') AS snippet
        FROM documents
        WHERE ({where_clause})
        AND ts_rank(tsv, plainto_tsquery('english', %s)) >= %s
        ORDER BY score DESC
        LIMIT %s;
        """
        
        all_params = params + [query, query, query, min_score, limit]
        self.cur.execute(sql, all_params)
        return self._format_results(self.cur.fetchall())
    
    def _boolean_search_db(self, query: str, limit: int) -> List[Dict[str, Any]]:
        """Implementazione ricerca booleana database."""
        try:
            # Converte query in formato tsquery
            tsquery = self._convert_to_tsquery(query)
            
            sql = """
            SELECT id, title, label, content,
                   ts_rank(tsv, to_tsquery('english', %s)) AS score,
                   ts_headline('english', content, to_tsquery('english', %s), 
                              'MaxWords=30, MinWords=10') AS snippet
            FROM documents
            WHERE tsv @@ to_tsquery('english', %s)
            ORDER BY score DESC
            LIMIT %s;
            """
            
            self.cur.execute(sql, (tsquery, tsquery, tsquery, limit))
            return self._format_results(self.cur.fetchall())
            
        except Exception as e:
            print(f"❌ Errore ricerca booleana DB: {e}")
            return []
    
    def _phrase_search_db(self, phrase: str, limit: int) -> List[Dict[str, Any]]:
        """Implementazione ricerca frase database."""
        try:
            sql = """
            SELECT id, title, label, content,
                   ts_rank(tsv, phraseto_tsquery('english', %s)) AS score,
                   ts_headline('english', content, phraseto_tsquery('english', %s), 
                              'MaxWords=30, MinWords=10') AS snippet
            FROM documents
            WHERE tsv @@ phraseto_tsquery('english', %s)
            ORDER BY score DESC
            LIMIT %s;
            """
            
            self.cur.execute(sql, (phrase, phrase, phrase, limit))
            return self._format_results(self.cur.fetchall())
            
        except Exception as e:
            print(f"❌ Errore ricerca frase DB: {e}")
            return []
    
    def _convert_to_tsquery(self, query: str) -> str:
        """Converte query booleana in formato tsquery."""
        query = query.replace(' AND ', ' & ')
        query = query.replace(' OR ', ' | ')
        query = query.replace(' NOT ', ' !')
        
        words = query.split()
        processed_words = []
        
        for word in words:
            if word not in ['&', '|', '!', '(', ')']:
                processed_words.append(f"{word}:*")
            else:
                processed_words.append(word)
        
        return ' '.join(processed_words)
    
    def _format_results(self, rows: List[Tuple]) -> List[Dict[str, Any]]:
        """Formatta risultati query."""
        results = []
        
        for row in rows:
            result = {
                'id': row[0],
                'title': row[1],
                'label': row[2],
                'content': row[3][:500] + '...' if len(row[3]) > 500 else row[3],
                'score': float(row[4]),
                'snippet': row[5] if len(row) > 5 else row[3][:200] + '...'
            }
            results.append(result)
        
        return results
    
    def invalidate_cache(self, pattern: str = None):
        """
        Invalida cache con pattern opzionale.
        
        Args:
            pattern: Pattern per invalidazione selettiva (None = tutto)
        """
        if pattern is None:
            self.query_cache.clear()
            self.metadata_cache.clear()
            self.stats_cache.clear()
            print("🧹 Cache completamente svuotata")
        else:
            # Implementazione invalidazione selettiva futura
            print(f"🧹 Invalidazione pattern: {pattern} (non implementata)")
    
    def get_cache_stats(self) -> Dict[str, Any]:
        """Restituisce statistiche complete del sistema di caching."""
        return {
            'query_cache': self.query_cache.get_stats(),
            'metadata_cache': self.metadata_cache.get_stats(),
            'stats_cache': self.stats_cache.get_stats(),
            'total_memory_usage': self._estimate_cache_memory()
        }
    
    def _estimate_cache_memory(self) -> str:
        """Stima utilizzo memoria delle cache (approssimato)."""
        try:
            import sys
            
            query_size = sum(sys.getsizeof(entry.data) for entry in self.query_cache.cache.values())
            metadata_size = sum(sys.getsizeof(entry.data) for entry in self.metadata_cache.cache.values())
            stats_size = sum(sys.getsizeof(entry.data) for entry in self.stats_cache.cache.values())
            
            total_bytes = query_size + metadata_size + stats_size
            
            # Converti in unità leggibili
            if total_bytes < 1024:
                return f"{total_bytes} B"
            elif total_bytes < 1024**2:
                return f"{total_bytes/1024:.1f} KB"
            else:
                return f"{total_bytes/1024**2:.1f} MB"
                
        except Exception:
            return "N/A"
    
    def warm_up_cache(self, common_queries: List[str]):
        """
        Pre-carica cache con query comuni.
        
        Args:
            common_queries: Lista di query per warm-up
        """
        print("🔥 Avvio warm-up cache...")
        
        for query in common_queries:
            try:
                print(f"   Caricando: {query}")
                self.search_cached(query, limit=20, use_cache=True)
                time.sleep(0.1)  # Piccola pausa per non sovraccaricare
            except Exception as e:
                print(f"   ❌ Errore warm-up per '{query}': {e}")
        
        stats = self.get_cache_stats()
        print(f"✅ Warm-up completato: {stats['query_cache']['size']} entries caricate")
    
    def close(self):
        """Chiude connessioni e salva statistiche."""
        try:
            # Salva statistiche finali
            final_stats = self.get_cache_stats()
            print("\n📊 Statistiche finali cache:")
            for cache_name, stats in final_stats.items():
                if isinstance(stats, dict) and 'hit_rate' in stats:
                    print(f"   {cache_name}: {stats['hit_rate']:.1f}% hit rate, {stats['size']} entries")
            
            # Chiudi connessioni DB
            if self.cur:
                self.cur.close()
            if self.conn:
                self.conn.close()
                
        except Exception as e:
            print(f"❌ Errore chiusura: {e}")
    
    def __enter__(self):
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()


# ===== ESEMPIO DI UTILIZZO =====

def demo_cache_system():
    """Dimostra l'utilizzo del sistema di caching."""
    
    print("🚀 Demo Sistema di Caching PostgreSQL")
    print("=" * 50)
    
    # Query comuni per warm-up
    common_queries = [
        "election",
        "economy",
        "football",
        "machine learning",
        "budget"
    ]
    
    try:
        with PostgreSQLCachedSearchEngine() as engine:
            
            # Warm-up cache
            engine.warm_up_cache(common_queries)
            
            print("\n🔍 Test ricerche con cache:")
            
            # Test ricerche (prima volta - cache miss)
            print("\n--- Prima esecuzione (cache miss) ---")
            start = time.time()
            results1 = engine.search_cached("election economy", limit=5)
            time1 = time.time() - start
            print(f"Tempo: {time1:.3f}s, Risultati: {len(results1)}")
            
            # Test ricerche (seconda volta - cache hit)
            print("\n--- Seconda esecuzione (cache hit) ---")
            start = time.time()
            results2 = engine.search_cached("election economy", limit=5)
            time2 = time.time() - start
            print(f"Tempo: {time2:.3f}s, Risultati: {len(results2)}")
            
            print(f"\n⚡ Speedup: {time1/time2:.1f}x più veloce con cache")
            
            # Test altri tipi di ricerca
            print("\n--- Test ricerca booleana ---")
            bool_results = engine.boolean_search_cached("election AND economy")
            print(f"Risultati booleani: {len(bool_results)}")
            
            print("\n--- Test ricerca frase ---")
            phrase_results = engine.phrase_search_cached("machine learning")
            print(f"Risultati frase: {len(phrase_results)}")
            
            # Statistiche cache
            print("\n📊 Statistiche Cache:")
            cache_stats = engine.get_cache_stats()
            for cache_name, stats in cache_stats.items():
                if isinstance(stats, dict):
                    print(f"  {cache_name}:")
                    for key, value in stats.items():
                        print(f"    {key}: {value}")
            
    except Exception as e:
        print(f"💥 Errore demo: {e}")


if __name__ == "__main__":
    demo_cache_system()