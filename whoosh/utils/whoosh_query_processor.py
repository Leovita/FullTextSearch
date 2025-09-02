import re
import logging
import os
from typing import List, Dict, Any, Optional, Tuple
from enum import Enum
from collections import Counter
from whoosh.query import And, Or, Not, Term, Phrase, Wildcard, Every
from whoosh.qparser import QueryParser, MultifieldParser, OrGroup, AndGroup
from whoosh.qparser.dateparse import DateParserPlugin
from whoosh.qparser.plugins import PhrasePlugin, WildcardPlugin
from whoosh import index

# Definisce il percorso per la cartella dei log
LOG_DIR = 'log'
if not os.path.exists(LOG_DIR):
    os.makedirs(LOG_DIR)

# Configurazione del logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s',
    handlers=[
        logging.FileHandler(os.path.join(LOG_DIR, 'whoosh_query_processor.log')),
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


class WhooshQueryProcessor:
    """
    Processore di query avanzato per Whoosh con ottimizzazione dinamica.
    Supporta tutti i tipi di query e fornisce ottimizzazioni basate sulle statistiche dell'indice.
    """
    
    def __init__(self, index_dir: str = "whoosh_index"):
        """
        Inizializza il processore di query Whoosh.
        
        Args:
            index_dir: Directory dell'indice Whoosh
        """
        self.logger = logging.getLogger(__name__)
        self.index_dir = index_dir
        self.index = None
        self.term_stats = {}
        self.categorie = {
            0: 'politics',
            1: 'sport',
            2: 'technology',
            3: 'entertainment',
            4: 'business'
        }
        
        # Patterns per identificare tipi di query
        self.patterns = {
            'field_query': re.compile(r'(\w+):(?:"([^"]*)"|([^\s]+))'),
            'phrase_query': re.compile(r'"([^"]+)"'),
            'boolean_operators': re.compile(r'\b(AND|OR|NOT)\b', re.IGNORECASE),
            'wildcard': re.compile(r'\w*\*\w*'),
            'special_chars': re.compile(r'[^\w\s\*\-"\':]')
        }
        
        self.boolean_operators = {'AND', 'OR', 'NOT'}
        self.valid_fields = {'title', 'content', 'label', 'combined_text', 'text'}
        
        # Inizializza parsers Whoosh
        self._setup_parsers()
        self._load_term_statistics()
        
        self.logger.info("WhooshQueryProcessor inizializzato")
    
    def _setup_parsers(self):
        """Configura i parser Whoosh per diversi tipi di query."""
        try:
            if index.exists_in(self.index_dir):
                self.index = index.open_dir(self.index_dir)
                
                # Parser per ricerca generale
                self.general_parser = MultifieldParser(
                    ["title", "text", "combined_text"], 
                    self.index.schema,
                    group=OrGroup
                )
                
                # Parser per campo specifico
                self.field_parsers = {}
                for field in self.valid_fields:
                    if field in self.index.schema:
                        if field == 'content':
                            field = 'text'  # Mappa 'content' a 'text' nello schema
                        self.field_parsers[field] = QueryParser(field, self.index.schema)
                
                # Parser booleano
                self.boolean_parser = MultifieldParser(
                    ["title", "text", "combined_text"],
                    self.index.schema,
                    group=AndGroup
                )
                
        except Exception as e:
            self.logger.warning(f"Impossibile inizializzare parsers: {e}")
    
    def _load_term_statistics(self):
        """Carica statistiche dei termini dall'indice."""
        try:
            if self.index:
                with self.index.searcher() as searcher:
                    # Ottiene termini più frequenti
                    terms = list(searcher.lexicon("combined_text"))[:1000]
                    for term in terms:
                        try:
                            freq = searcher.doc_frequency("combined_text", term)
                            self.term_stats[term] = freq
                        except:
                            continue
                            
                self.logger.info(f"Caricate statistiche per {len(self.term_stats)} termini")
        except Exception as e:
            self.logger.warning(f"Errore nel caricamento statistiche: {e}")
    
    def get_term_frequency(self, term: str) -> int:
        """Restituisce la frequenza di un termine nell'indice."""
        return self.term_stats.get(term.lower(), 0)
    
    def process_query(self, query: str) -> Dict[str, Any]:
        """
        Processa una query utente e restituisce informazioni strutturate.
        
        Args:
            query: Query da processare
            
        Returns:
            Dizionario con informazioni strutturate sulla query
        """
        if not query or not query.strip():
            self.logger.warning("Query vuota ricevuta")
            return self._create_error_result("Query vuota")
        
        original_query = query
        query = query.strip()
        
        try:
            # Analisi tipo query
            query_info = self._analyze_query_type(query)
            
            # Estrazione componenti
            components = self._extract_components(query)
            
            # Validazione
            validation = self._validate_query(query, query_info['type'])
            
            # Preprocessing
            processed = self._preprocess_query(query, query_info['type'])
            
            # Ottimizzazione dinamica
            optimized = self._optimize_query_dynamically(processed, query_info['type'])
            
            # Creazione oggetto query Whoosh
            whoosh_query = self._create_whoosh_query(optimized, query_info['type'])
            
            result = {
                'original_query': original_query,
                'processed_query': processed,
                'optimized_query': optimized,
                'whoosh_query': whoosh_query,
                'query_type': query_info['type'].value,
                'query_info': query_info,
                'components': components,
                'validation': validation,
                'suggestions': self._get_suggestions(query) if not validation['is_valid'] else []
            }
            
            self.logger.info(f"Query processata. Tipo: {result['query_type']}")
            return result
            
        except Exception as e:
            self.logger.error(f"Errore nel processamento query: {e}")
            return self._create_error_result(f"Errore nel processamento: {str(e)}")
    
    def _analyze_query_type(self, query: str) -> Dict[str, Any]:
        """Analizza il tipo di query."""
        if self.patterns['field_query'].search(query):
            field_matches = self.patterns['field_query'].findall(query)
            # Trasforma i match in formato (campo, operatore, valore)
            processed_matches = []
            for match in field_matches:
                field, quoted_value, unquoted_value = match
                value = quoted_value if quoted_value else unquoted_value
                processed_matches.append((field, ':', value))
            return {
                'type': QueryType.FIELD,
                'field_queries': processed_matches,
                'primary_field': processed_matches[0][0] if processed_matches else None
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
        components = {
            'terms': [],
            'phrases': [],
            'field_queries': [],
            'operators': [],
            'wildcards': []
        }
        
        # Prima estraiamo le field queries (incluse quelle con quote)
        field_queries = self.patterns['field_query'].findall(query)
        # Il nuovo pattern restituisce 3 gruppi: (campo, valore_quotato, valore_non_quotato)
        # Trasformiamo in formato (campo, operatore, valore)
        processed_field_queries = []
        for match in field_queries:
            field, quoted_value, unquoted_value = match
            value = quoted_value if quoted_value else unquoted_value
            processed_field_queries.append((field, ':', value))
        components['field_queries'] = processed_field_queries
        
        # Rimuoviamo le field queries dalla query
        query_without_fields = self.patterns['field_query'].sub('', query)
        
        # Poi estraiamo le frasi dal testo rimanente
        phrases = self.patterns['phrase_query'].findall(query_without_fields)
        components['phrases'] = phrases
        
        query_without_phrases = self.patterns['phrase_query'].sub('', query_without_fields)
        
        # Estrae operatori
        operators = self.patterns['boolean_operators'].findall(query_without_phrases)
        components['operators'] = [op.upper() for op in operators]
        
        # Estrae wildcards
        wildcards = self.patterns['wildcard'].findall(query_without_phrases)
        components['wildcards'] = wildcards
        
        # Estrae termini rimanenti
        remaining_text = self.patterns['boolean_operators'].sub('', query_without_phrases)
        remaining_text = self.patterns['wildcard'].sub('', remaining_text)
        
        terms = [term.strip() for term in remaining_text.split() if term.strip()]
        components['terms'] = terms
        
        return components
    
    def _validate_query(self, query: str, query_type: QueryType) -> Dict[str, Any]:
        """Valida la query."""
        validation = {
            'is_valid': True,
            'errors': [],
            'warnings': []
        }
        
        # Controllo lunghezza
        if len(query) > 1000:
            validation['warnings'].append("Query molto lunga, potrebbe essere lenta")
        
        # Controllo caratteri speciali
        special_chars = self.patterns['special_chars'].findall(query)
        if special_chars:
            validation['warnings'].append(f"Caratteri speciali trovati: {set(special_chars)}")
        
        # Validazione specifica per tipo
        if query_type == QueryType.FIELD:
            field_matches = self.patterns['field_query'].findall(query)
            for match in field_matches:
                field, quoted_value, unquoted_value = match
                value = quoted_value if quoted_value else unquoted_value
                if field not in self.valid_fields:
                    validation['errors'].append(f"Campo non valido: {field}")
                if not value.strip():
                    validation['errors'].append(f"Valore vuoto per campo: {field}")
        
        elif query_type == QueryType.BOOLEAN:
            if query.strip().upper().startswith(('AND ', 'OR ', 'NOT ')):
                validation['errors'].append("Query non può iniziare con operatore booleano")
            
            if query.strip().upper().endswith((' AND', ' OR', ' NOT')):
                validation['errors'].append("Query non può terminare con operatore booleano")
        
        elif query_type == QueryType.PHRASE:
            empty_phrases = re.findall(r'""', query)
            if empty_phrases:
                validation['errors'].append("Frasi esatte vuote trovate")
        
        validation['is_valid'] = len(validation['errors']) == 0
        return validation
    
    def _preprocess_query(self, query: str, query_type: QueryType) -> str:
        """Preprocessa la query."""
        processed = query.strip()
        processed = re.sub(r'\s+', ' ', processed)
        
        if query_type == QueryType.BOOLEAN:
            processed = re.sub(r'\band\b', 'AND', processed, flags=re.IGNORECASE)
            processed = re.sub(r'\bor\b', 'OR', processed, flags=re.IGNORECASE)
            processed = re.sub(r'\bnot\b', 'NOT', processed, flags=re.IGNORECASE)
        
        return processed
    
    def _optimize_query_dynamically(self, query: str, query_type: QueryType) -> str:
        """Ottimizza query basandosi sulle statistiche."""
        if not self.term_stats:
            return query
            
        if query_type == QueryType.SIMPLE:
            words = query.lower().split()
            scored_words = [(word, self.get_term_frequency(word)) for word in words]
            scored_words.sort(key=lambda x: x[1])  # Ordina per frequenza crescente
            return ' '.join([word[0] for word in scored_words])
        
        return query
    
    def _create_whoosh_query(self, query: str, query_type: QueryType):
        """Crea oggetto query Whoosh dal testo."""
        try:
            if not self.index:
                return None
                
            if query_type == QueryType.FIELD:
                # Gestione query multi-campo
                field_matches = self.patterns['field_query'].findall(query)
                if field_matches:
                    subqueries = []
                    for match in field_matches:
                        field, quoted_value, unquoted_value = match
                        value = quoted_value if quoted_value else unquoted_value
                        if field in self.field_parsers:
                            if field == 'label' and value in self.categorie.values():
                                # Mappa categoria a numero
                                label_num = [k for k, v in self.categorie.items() if v == value]
                                if label_num:
                                    value = str(label_num[0])
                            subqueries.append(self.field_parsers[field].parse(value))
                    
                    if subqueries:
                        # Combina le query con operatore AND per campo multiplo
                        return And(subqueries) if len(subqueries) > 1 else subqueries[0]
                    
            elif query_type == QueryType.PHRASE:
                # Parser per frasi
                return self.general_parser.parse(query)
                
            elif query_type == QueryType.BOOLEAN:
                # Parser booleano
                return self.boolean_parser.parse(query)
                
            elif query_type == QueryType.WILDCARD:
                # Parser per wildcards
                return self.general_parser.parse(query)
                
            else:  # SIMPLE
                # Parser generale
                return self.general_parser.parse(query)
                
        except Exception as e:
            self.logger.error(f"Errore nella creazione query Whoosh: {e}")
            return None
    
    def _get_suggestions(self, query: str) -> List[str]:
        """Genera suggerimenti per query non valide."""
        suggestions = []
        
        if self.patterns['special_chars'].search(query):
            suggestions.append("Rimuovi caratteri speciali non supportati")
        
        if len(query.strip()) < 3:
            suggestions.append("Usa almeno 3 caratteri per la ricerca")
        
        if any(op in query.upper() for op in ['AND', 'OR', 'NOT']):
            suggestions.append("Verifica la sintassi degli operatori booleani")
        
        return suggestions
    
    def _create_error_result(self, error_message: str) -> Dict[str, Any]:
        """Crea risultato di errore standardizzato."""
        return {
            'original_query': '',
            'processed_query': '',
            'optimized_query': '',
            'whoosh_query': None,
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
    
    def close(self):
        """Chiude l'indice."""
        if self.index:
            self.index.close()
            self.index = None


# Esempio di utilizzo
if __name__ == "__main__":
    processor = WhooshQueryProcessor("whoosh_index")
    
    # Test query semplice
    result = processor.process_query("Tony Blair trust voters")
    print(f"Query semplice: {result['optimized_query']}")
    print(f"  Componenti: {result['components']}")
    
    # Test query booleana
    result = processor.process_query("internet AND privacy")
    print(f"Query booleana: {result['optimized_query']}")
    print(f"  Componenti: {result['components']}")
    
    # Test query per campo singolo
    result = processor.process_query('title:"data analysis"')
    print(f"Query campo singolo: {result['optimized_query']}")
    print(f"  Componenti: {result['components']}")
    print(f"  Tipo: {result['query_type']}")
    
    # Test query per campo multiplo - NUOVO TEST
    result = processor.process_query('content:Scotland title:Football')
    print(f"Query campo multiplo: {result['optimized_query']}")
    print(f"  Componenti: {result['components']}")
    print(f"  Tipo: {result['query_type']}")
    
    # Test query per campo con spazi - NUOVO TEST
    result = processor.process_query('content:"Tony Blair" title:government')
    print(f"Query campo con spazi: {result['optimized_query']}")
    print(f"  Componenti: {result['components']}")
    print(f"  Tipo: {result['query_type']}")
    
    processor.close()