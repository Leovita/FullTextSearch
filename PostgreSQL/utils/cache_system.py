import logging
import time
import hashlib
import json
import threading
from typing import Dict, List, Any, Optional, Tuple
from collections import OrderedDict
from dataclasses import dataclass, asdict
from PostgreSQL.utils.postgresql_engine import PostgreSQLSearchEngine

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

class CachedSearchEngine:
    """
    Wrapper che aggiunge caching al PostgreSQLSearchEngine.
    Delega tutte le operazioni di ricerca al search engine sottostante,
    gestendo solo il layer di caching.
    """

    def __init__(self, db_config: Dict[str, str] = None, cache_config: Dict[str, Any] = None, ranking: Optional[str] = "Frequency"):
        """
        Inizializza il motore con caching.
        
        Args:
            db_config: Configurazione database
            cache_config: Configurazione cache
            ranking: Metodo di ranking ("Frequency" o "Density")
        """
        # Configurazione cache
        if cache_config is None:
            cache_config = {
                'max_size': 1000,
                'ttl': 300,  # 5 minuti
                'result_cache_size': 500,
                'metadata_cache_size': 100
            }
        
        self.cache_config = cache_config
        
        # Inizializza il search engine sottostante
        self.search_engine = PostgreSQLSearchEngine(db_config=db_config, ranking=ranking)
        
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
        
        print("Sistema di caching inizializzato")
        print(f"   Cache query: {cache_config['max_size']} entries, TTL: {cache_config['ttl']}s")
    
    def search(self, query: str, limit: int = 10, fields: List[str] = None,
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
                print(f"Cache HIT per query: {query[:30]}...")
                # Marca i risultati come cachati
                for result in cached_result:
                    result['cached'] = True
                return cached_result
        
        print(f"Cache MISS, eseguendo query: {query[:30]}...")
        
        # Delega al search engine sottostante
        try:
            results = self.search_engine.search(
                query=query,
                limit=limit,
                fields=fields,
                min_score=min_score
            )
            
            # Aggiungi metadati di caching
            for result in results:
                result['cached'] = False
            
            # Salva in cache
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"Errore durante ricerca: {e}")
            return []
    
    def boolean_search(self, query: str, limit: int = 10, 
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
                print(f"Cache HIT per ricerca booleana: {query[:30]}...")
                return cached_result
        
        print(f"Eseguendo ricerca booleana: {query[:30]}...")
        
        try:
            results = self.search_engine.boolean_search(query, limit)
            
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"Errore ricerca booleana: {e}")
            return []
    
    def phrase_search(self, phrase: str, limit: int = 10, 
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
                print(f"Cache HIT per frase: {phrase[:30]}...")
                return cached_result
        
        print(f"Eseguendo ricerca frase: {phrase[:30]}...")
        
        try:
            results = self.search_engine.phrase_search(phrase, limit)
            
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"Errore ricerca frase: {e}")
            return []
    
    def field_search(self, field: str, query: str, limit: int = 10, 
                    use_cache: bool = True) -> List[Dict[str, Any]]:
        """Ricerca su campo specifico con caching."""
        cache_key = self.query_cache._make_key(
            query=query,
            params=(field, limit),
            method='field'
        )
        
        if use_cache:
            cached_result = self.query_cache.get(cache_key)
            if cached_result is not None:
                print(f"Cache HIT per campo {field}: {query[:30]}...")
                return cached_result
        
        print(f"Eseguendo ricerca campo {field}: {query[:30]}...")
        
        try:
            results = self.search_engine.field_search(field, query, limit)
            
            if use_cache and results:
                self.query_cache.put(cache_key, results)
            
            return results
            
        except Exception as e:
            print(f"Errore ricerca campo: {e}")
            return []
    
    def get_document_by_id(self, doc_id: int, use_cache: bool = True) -> Optional[Dict[str, Any]]:
        """Recupera documento con caching."""
        cache_key = self.metadata_cache._make_key(
            query="get_document",
            params=(doc_id,)
        )
        
        if use_cache:
            cached_result = self.metadata_cache.get(cache_key)
            if cached_result is not None:
                print(f"Cache HIT per documento ID: {doc_id}")
                cached_result['cached'] = True
                return cached_result
        
        try:
            result = self.search_engine.get_document_by_id(doc_id)
            
            if result:
                result['cached'] = False
                if use_cache:
                    self.metadata_cache.put(cache_key, result)
            
            return result
            
        except Exception as e:
            print(f"Errore recupero documento: {e}")
            return None
    
    def get_stats(self, use_cache: bool = True) -> Dict[str, Any]:
        """Statistiche con caching."""
        cache_key = "database_stats"
        
        if use_cache:
            cached_result = self.stats_cache.get(cache_key)
            if cached_result is not None:
                print("Cache HIT per statistiche database")
                return cached_result
        
        try:
            stats = self.search_engine.get_stats()
            
            if use_cache:
                self.stats_cache.put(cache_key, stats)
            
            return stats
            
        except Exception as e:
            print(f"Errore statistiche: {e}")
            return {}
    
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
            print("Cache completamente svuotata")
        else:
            # Implementazione invalidazione selettiva futura
            print(f"Invalidazione pattern: {pattern} (non implementata)")
    
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
        print("Avvio warm-up cache...")
        
        for query in common_queries:
            try:
                print(f"   Caricando: {query}")
                self.search(query, limit=20, use_cache=True)
                time.sleep(0.1)  # Piccola pausa per non sovraccaricare
            except Exception as e:
                print(f"   Errore warm-up per '{query}': {e}")
        
        stats = self.get_cache_stats()
        print(f"Warm-up completato: {stats['query_cache']['size']} entries caricate")
    
    def close(self):
        """Chiude connessioni e salva statistiche."""
        try:
            # Salva statistiche finali
            final_stats = self.get_cache_stats()
            print("\nStatistiche finali cache:")
            for cache_name, stats in final_stats.items():
                if isinstance(stats, dict) and 'hit_rate' in stats:
                    print(f"   {cache_name}: {stats['hit_rate']:.1f}% hit rate, {stats['size']} entries")
            
            # Chiudi il search engine sottostante
            self.search_engine.close()
                
        except Exception as e:
            print(f"Errore chiusura: {e}")
    
    def __enter__(self):
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()


# ===== ESEMPIO DI UTILIZZO =====

def demo_cached_search_engine():
    """Dimostra l'utilizzo del sistema di caching."""
    
    print("Demo Sistema di Caching")
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
        with CachedSearchEngine() as engine:
            
            # Warm-up cache
            engine.warm_up_cache(common_queries)
            
            print("\nTest ricerche con cache:")
            
            # Test ricerche (prima volta - cache miss)
            print("\n--- Prima esecuzione (cache miss) ---")
            start = time.time()
            results1 = engine.search("election economy", limit=5)
            time1 = time.time() - start
            print(f"Tempo: {time1:.3f}s, Risultati: {len(results1)}")
            
            # Test ricerche (seconda volta - cache hit)
            print("\n--- Seconda esecuzione (cache hit) ---")
            start = time.time()
            results2 = engine.search("election economy", limit=5)
            time2 = time.time() - start
            print(f"Tempo: {time2:.3f}s, Risultati: {len(results2)}")
            
            print(f"\nSpeedup: {time1/time2:.1f}x più veloce con cache")
            
            # Test altri tipi di ricerca
            print("\n--- Test ricerca booleana ---")
            bool_results = engine.boolean_search("election AND economy")
            print(f"Risultati booleani: {len(bool_results)}")
            
            print("\n--- Test ricerca frase ---")
            phrase_results = engine.phrase_search("machine learning")
            print(f"Risultati frase: {len(phrase_results)}")
            
            print("\n--- Test ricerca campo ---")
            field_results = engine.field_search("title", "football")
            print(f"Risultati campo title: {len(field_results)}")
            
            # Statistiche cache
            print("\nStatistiche Cache:")
            cache_stats = engine.get_cache_stats()
            for cache_name, stats in cache_stats.items():
                if isinstance(stats, dict):
                    print(f"  {cache_name}:")
                    for key, value in stats.items():
                        print(f"    {key}: {value}")
            
    except Exception as e:
        print(f"Errore demo: {e}")


if __name__ == "__main__":
    from PostgreSQL.utils.postgresql_engine import PostgreSQLSearchEngine
    demo_cached_search_engine()