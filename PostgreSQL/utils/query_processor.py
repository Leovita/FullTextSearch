import re
import logging
from typing import List, Dict, Any, Optional
from enum import Enum
import os
import psycopg2
from collections import Counter
from utils.password import PASSWORD

# Definisce il percorso per la cartella dei log
LOG_DIR = 'log'
if not os.path.exists(LOG_DIR):
    os.makedirs(LOG_DIR)

# Configurazione del logging dinamica
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s',
    handlers=[
        logging.FileHandler(os.path.join(LOG_DIR, 'query_processor.log')),
        logging.StreamHandler()
    ]
)

class QueryType(Enum):
    """Tipi di query supportate."""
    SIMPLE = "simple"
    BOOLEAN = "boolean"
    PHRASE = "phrase"
    FIELD = "field"
    WILDCARD = "wildcard"

    def __str__(self):
        return self.value

class QueryProcessor:
    """
    Processore di query per il motore PostgreSQL, ottimizzato dinamicamente.
    """
    
    def __init__(self, db_config: Optional[Dict[str, str]] = None):
        self.logger = logging.getLogger(__name__)
        self.db_config = db_config
        self.term_stats = self._fetch_term_statistics() if db_config else {}
        
        self.patterns = {
            'field_query': re.compile(r'(\w+):(["\']?)([^"\']+)\2'),
            'phrase_query': re.compile(r'"([^"]+)"'),
            'boolean_operators': re.compile(r'\b(AND|OR|NOT)\b', re.IGNORECASE),
            'wildcard': re.compile(r'\w*\*\w*'),
            'special_chars': re.compile(r'[^\w\s\*\-"\':]')
        }
        
        self.boolean_operators = {'AND', 'OR', 'NOT'}
        self.valid_fields = {'title', 'content', 'label', 'author'}
        
        self.logger.info("QueryProcessor inizializzato.")

    def _fetch_term_statistics(self) -> Dict[str, int]:
        """
        Recupera le statistiche dei termini (es. frequenza) dal database.
        In un'implementazione reale, si userebbero le statistiche dei termini
        del full-text search di PostgreSQL. Qui si userà una simulazione.
        """
        self.logger.info("Recupero statistiche dei termini dal database...")
        # Simula il recupero delle statistiche dal database
        # In un'implementazione reale, si potrebbe usare una query come:
        # SELECT word, ndoc FROM ts_stat('SELECT tsv FROM documents') ORDER BY ndoc DESC;
        # Per questo esempio, usiamo dati fittizi.
        try:
            conn = psycopg2.connect(**self.db_config)
            cursor = conn.cursor()
            cursor.execute("""
                SELECT 
                    word, 
                    nentry
                FROM ts_stat('SELECT tsv FROM documents')
                WHERE length(word) > 2
                ORDER BY nentry DESC
                LIMIT 1000;
            """)
            stats = {row[0]: row[1] for row in cursor.fetchall()}
            cursor.close()
            conn.close()
            self.logger.info(f"Recuperate {len(stats)} statistiche dei termini.")
            return stats
        except Exception as e:
            self.logger.error(f"Errore nel recupero delle statistiche: {e}")
            return {}

    def get_term_frequency(self, term: str) -> int:
        """Restituisce la frequenza di un termine, basata sulle statistiche del dataset."""
        return self.term_stats.get(term.lower(), 0)

    def process_query(self, query: str) -> Dict[str, Any]:
        """
        Processa una query utente e restituisce informazioni strutturate.
        """
        if not query or not query.strip():
            self.logger.warning("Query vuota ricevuta.")
            return self._create_error_result("Query vuota")
        
        original_query = query
        query = query.strip()
        
        try:
            query_info = self._analyze_query_type(query)
            components = self._extract_components(query)
            validation = self._validate_query(query, query_info['type'])
            processed = self._preprocess_query(query, query_info['type'])
            
            # Ottimizzazione dinamica basata sulle statistiche
            optimized = self._optimize_query_dynamically(processed, query_info['type'])
            
            result = {
                'original_query': original_query,
                'processed_query': processed,
                'optimized_query': optimized,
                'query_type': query_info['type'].value,
                'query_info': query_info,
                'components': components,
                'validation': validation,
                'suggestions': self._get_suggestions(query) if not validation['is_valid'] else []
            }
            
            self.logger.info(f"Query processata. Tipo: {result['query_type']}. Validità: {result['validation']['is_valid']}")
            return result
            
        except Exception as e:
            self.logger.error(f"Errore nel processamento query: {e}", exc_info=True)
            return self._create_error_result(f"Errore nel processamento: {str(e)}")

    def _analyze_query_type(self, query: str) -> Dict[str, Any]:
        """Analizza il tipo di query."""
        # Logica esistente...
        query_lower = query.lower()
        
        if self.patterns['field_query'].search(query):
            field_matches = self.patterns['field_query'].findall(query)
            return {
                'type': QueryType.FIELD,
                'field_queries': field_matches,
                'primary_field': field_matches[0][0] if field_matches else None
            }
        
        elif self.patterns['phrase_query'].search(query):
            phrases = self.patterns['phrase_query'].findall(query)
            return {
                'type': QueryType.PHRASE,
                'phrases': phrases,
                'primary_phrase': phrases[0] if phrases else None
            }
        
        elif self.patterns['boolean_operators'].search(query):
            operators = self.patterns['boolean_operators'].findall(query)
            return {
                'type': QueryType.BOOLEAN,
                'operators': operators,
                'has_and': 'AND' in [op.upper() for op in operators],
                'has_or': 'OR' in [op.upper() for op in operators],
                'has_not': 'NOT' in [op.upper() for op in operators]
            }
        
        elif self.patterns['wildcard'].search(query):
            wildcards = self.patterns['wildcard'].findall(query)
            return {
                'type': QueryType.WILDCARD,
                'wildcards': wildcards
            }
        
        else:
            words = query.split()
            return {
                'type': QueryType.SIMPLE,
                'word_count': len(words),
                'words': words
            }

    def _extract_components(self, query: str) -> Dict[str, Any]:
        """Estrae componenti della query."""
        # Logica esistente...
        components = {
            'terms': [],
            'phrases': [],
            'field_queries': [],
            'operators': [],
            'wildcards': []
        }
        
        phrases = self.patterns['phrase_query'].findall(query)
        components['phrases'] = phrases
        
        query_without_phrases = self.patterns['phrase_query'].sub('', query)
        
        field_queries = self.patterns['field_query'].findall(query_without_phrases)
        components['field_queries'] = field_queries
        
        query_without_fields = self.patterns['field_query'].sub('', query_without_phrases)
        
        operators = self.patterns['boolean_operators'].findall(query_without_fields)
        components['operators'] = [op.upper() for op in operators]
        
        wildcards = self.patterns['wildcard'].findall(query_without_fields)
        components['wildcards'] = wildcards
        
        remaining_text = self.patterns['boolean_operators'].sub('', query_without_fields)
        remaining_text = self.patterns['wildcard'].sub('', remaining_text)
        
        terms = [term.strip() for term in remaining_text.split() if term.strip()]
        # Nota: rimozione delle stop words non è più statica
        components['terms'] = [term for term in terms]
        
        return components

    def _validate_query(self, query: str, query_type: QueryType) -> Dict[str, Any]:
        """Valida la query in base al tipo."""
        # Logica esistente...
        validation = {
            'is_valid': True,
            'errors': [],
            'warnings': []
        }
        
        if len(query) > 1000:
            validation['warnings'].append("Query molto lunga, potrebbe essere lenta")
        
        special_chars = self.patterns['special_chars'].findall(query)
        if special_chars:
            validation['warnings'].append(f"Caratteri speciali trovati: {set(special_chars)}")
        
        if query_type == QueryType.FIELD:
            field_matches = self.patterns['field_query'].findall(query)
            for field, _, value in field_matches:
                if field not in self.valid_fields:
                    validation['errors'].append(f"Campo non valido: {field}")
                if not value.strip():
                    validation['errors'].append(f"Valore vuoto per campo: {field}")
        
        elif query_type == QueryType.BOOLEAN:
            if query.strip().upper().startswith(('AND ', 'OR ', 'NOT ')):
                validation['errors'].append("Query non può iniziare con operatore booleano")
            
            if query.strip().upper().endswith((' AND', ' OR', ' NOT')):
                validation['errors'].append("Query non può terminare con operatore booleano")
            
            consecutive_ops = re.search(r'\b(AND|OR|NOT)\s+(AND|OR|NOT)\b', query, re.IGNORECASE)
            if consecutive_ops:
                validation['errors'].append("Operatori booleani consecutivi non validi")
        
        elif query_type == QueryType.PHRASE:
            empty_phrases = re.findall(r'""', query)
            if empty_phrases:
                validation['errors'].append("Frasi esatte vuote trovate")
        
        validation['is_valid'] = len(validation['errors']) == 0
        
        return validation

    def _preprocess_query(self, query: str, query_type: QueryType) -> str:
        """Preprocessa la query per ottimizzazione."""
        processed = query.strip()
        processed = re.sub(r'\s+', ' ', processed)
        
        if query_type == QueryType.BOOLEAN:
            processed = re.sub(r'\band\b', 'AND', processed, flags=re.IGNORECASE)
            processed = re.sub(r'\bor\b', 'OR', processed, flags=re.IGNORECASE)
            processed = re.sub(r'\bnot\b', 'NOT', processed, flags=re.IGNORECASE)
        
        return processed
    
    def _optimize_query_dynamically(self, query: str, query_type: QueryType) -> str:
        """
        Ottimizza una query basandosi sulla frequenza dei termini nel dataset.
        I termini meno frequenti (più selettivi) vengono spostati all'inizio.
        """
        if not self.term_stats:
            self.logger.warning("Statistiche dei termini non disponibili. L'ottimizzazione dinamica non sarà efficace.")
            return query
            
        if query_type == QueryType.SIMPLE:
            words = query.lower().split()
            # Associa ogni parola alla sua frequenza nel dataset
            scored_words = [(word, self.get_term_frequency(word)) for word in words]
            # Ordina le parole in base alla frequenza (dal meno frequente al più frequente)
            # Questo garantisce che i termini più selettivi vengano elaborati prima
            scored_words.sort(key=lambda x: x[1])
            optimized_query = ' '.join([word[0] for word in scored_words])
            return optimized_query
        
        elif query_type == QueryType.BOOLEAN:
            # Per query booleane, l'ottimizzazione è più complessa.
            # L'idea è di riordinare le espressioni in modo che
            # i termini meno frequenti siano a sinistra dell'operatore AND.
            # Questo è un'implementazione semplificata che si concentra sui termini.
            terms_and_phrases = re.split(r'\s+(AND|OR|NOT)\s+', query, flags=re.IGNORECASE)
            if len(terms_and_phrases) > 1:
                # Esempio semplificato: riordina solo i termini, non l'intera espressione
                terms = [t for t in terms_and_phrases if t.upper() not in ['AND', 'OR', 'NOT']]
                operators = [op for op in terms_and_phrases if op.upper() in ['AND', 'OR', 'NOT']]
                
                scored_terms = [(term, self.get_term_frequency(term)) for term in terms]
                scored_terms.sort(key=lambda x: x[1])
                
                # Ricostruisce la query
                optimized_parts = []
                for i, term in enumerate(scored_terms):
                    optimized_parts.append(term[0])
                    if i < len(operators):
                        optimized_parts.append(operators[i])
                return ' '.join(optimized_parts)
            return query
            
        return query

    def _get_suggestions(self, query: str) -> List[str]:
        """Genera suggerimenti per query non valide."""
        suggestions = []
        if self.patterns['special_chars'].search(query):
            suggestions.append("Rimuovi caratteri speciali non supportati")
        if len(query.strip()) < 3:
            suggestions.append("Usa almeno 3 caratteri per la ricerca")
        if any(op in query.upper() for op in ['AND', 'OR', 'NOT']):
            suggestions.append("Verifica la sintassi degli operatori booleani (AND, OR, NOT)")
        return suggestions
    
    def _create_error_result(self, error_message: str) -> Dict[str, Any]:
        """Crea un risultato di errore standardizzato."""
        return {
            'original_query': '',
            'processed_query': '',
            'optimized_query': '',
            'query_type': None,
            'query_info': {},
            'components': {},
            'validation': {
                'is_valid': False,
                'errors': [error_message],
                'warnings': []
            },
            'suggestions': []
        }

# Classi di utilità (BooleanQueryBuilder, FieldQueryBuilder) rimangono invariate

if __name__ == "__main__":
    from password import PASSWORD
    # Esempio di utilizzo con una configurazione di database fittizia
    DB_CONFIG = {
        'host': 'localhost',
        'database': 'gestione',
        'user': 'postgres',
        'password': PASSWORD
    }
    
    # Inizializza il processore con la configurazione del DB
    processor = QueryProcessor(db_config=DB_CONFIG)
    
    # Esempi di test
    query1 = "data analysis method"
    result1 = processor.process_query(query1)
    print(f"Query originale: '{query1}' -> Ottimizzata: '{result1['optimized_query']}'")
    
    query2 = "machine learning AND python"
    result2 = processor.process_query(query2)
    print(f"Query originale: '{query2}' -> Ottimizzata: '{result2['optimized_query']}'")

    # Questo test fallirà se il DB non è configurato correttamente, ma il codice gestirà l'errore
    query3 = 'unvalid field:"value"'
    result3 = processor.process_query(query3)
    print(f"Query originale: '{query3}' -> Valida: {result3['validation']['is_valid']}")
    if not result3['validation']['is_valid']:
        print(f"Errori: {result3['validation']['errors']}")