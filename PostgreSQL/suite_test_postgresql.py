import unittest
import time
import logging
from unittest.mock import Mock, patch, MagicMock
from typing import List, Dict, Any

# Import dei moduli da testare
from utils.postgresql_engine import PostgreSQLSearchEngine
from utils.query_processor import QueryProcessor, QueryType
from utils.password import PASSWORD

# Configurazione logging per i test
logging.basicConfig(level=logging.WARNING)

class TestPostgreSQLSearchEngine(unittest.TestCase):
    """Test suite per PostgreSQLSearchEngine."""
    
    def setUp(self):
        """Setup per ogni test."""
        # Mock della configurazione database
        self.mock_db_config = {
            'dbname': 'test_db',
            'user': 'test_user',
            'password': 'test_pass',
            'host': 'localhost',
            'port': '5432'
        }
        
        # Dati di test
        self.sample_results = [
            (1, 'Machine Learning Basics', 'AI', 'Introduction to ML concepts', 0.8, 'ML snippet'),
            (2, 'Deep Learning Guide', 'AI', 'Advanced neural networks', 0.7, 'DL snippet'),
            (3, 'Data Science Overview', 'Data', 'Data analysis methods', 0.6, 'DS snippet')
        ]
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_initialization_success(self, mock_connect):
        """Test inizializzazione corretta del motore."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        
        self.assertIsNotNone(engine)
        self.assertEqual(engine.db_config, self.mock_db_config)
        mock_connect.assert_called_once_with(**self.mock_db_config)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_initialization_failure(self, mock_connect):
        """Test gestione errore in inizializzazione."""
        mock_connect.side_effect = Exception("Connection failed")
        
        with self.assertRaises(Exception):
            PostgreSQLSearchEngine(self.mock_db_config)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_search_general(self, mock_connect):
        """Test ricerca generale."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchall.return_value = self.sample_results
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.search("machine learning", limit=5)
        
        self.assertEqual(len(results), 3)
        self.assertEqual(results[0]['title'], 'Machine Learning Basics')
        self.assertEqual(results[0]['score'], 0.8)
        self.assertIn('search_time', results[0])
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_search_specific_fields(self, mock_connect):
        """Test ricerca su campi specifici."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchall.return_value = self.sample_results
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.search("learning", fields=['title'], limit=3)
        
        self.assertIsNotNone(results)
        # Verifica che sia stata chiamata la query corretta
        mock_cursor.execute.assert_called()
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_boolean_search(self, mock_connect):
        """Test ricerca booleana."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchall.return_value = self.sample_results[:2]
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.boolean_search("machine AND learning")
        
        self.assertEqual(len(results), 2)
        self.assertIn('search_time', results[0])
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_phrase_search(self, mock_connect):
        """Test ricerca frasi esatte."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchall.return_value = self.sample_results[:1]
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.phrase_search("machine learning")
        
        self.assertEqual(len(results), 1)
        self.assertEqual(results[0]['title'], 'Machine Learning Basics')
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_field_search(self, mock_connect):
        """Test ricerca su campo specifico."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchall.return_value = self.sample_results[:1]
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.field_search("title", "machine learning")
        
        self.assertEqual(len(results), 1)
        self.assertEqual(results[0]['matched_field'], 'title')
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_field_search_invalid_field(self, mock_connect):
        """Test ricerca su campo non valido."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.field_search("invalid_field", "test")
        
        self.assertEqual(len(results), 0)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_get_document_by_id(self, mock_connect):
        """Test recupero documento per ID."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchone.return_value = (1, 'Test Title', 'Test Label', 'Test Content')
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        doc = engine.get_document_by_id(1)
        
        self.assertIsNotNone(doc)
        self.assertEqual(doc['id'], 1)
        self.assertEqual(doc['title'], 'Test Title')
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_get_document_by_id_not_found(self, mock_connect):
        """Test recupero documento non esistente."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchone.return_value = None
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        doc = engine.get_document_by_id(999)
        
        self.assertIsNone(doc)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_get_stats(self, mock_connect):
        """Test recupero statistiche."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        
        # Mock delle diverse query per statistiche
        mock_cursor.fetchone.side_effect = [(100,), (150.5,)]
        mock_cursor.fetchall.return_value = [('AI', 50), ('Data', 30), ('Tech', 20)]
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        stats = engine.get_stats()
        
        self.assertIn('total_documents', stats)
        self.assertIn('documents_by_label', stats)
        self.assertIn('avg_content_length', stats)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_search_error_handling(self, mock_connect):
        """Test gestione errori durante ricerca."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.execute.side_effect = Exception("Database error")
        mock_connect.return_value = mock_conn
        
        engine = PostgreSQLSearchEngine(self.mock_db_config)
        results = engine.search("test query")
        
        self.assertEqual(len(results), 0)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_context_manager(self, mock_connect):
        """Test uso come context manager."""
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_connect.return_value = mock_conn
        
        with PostgreSQLSearchEngine(self.mock_db_config) as engine:
            self.assertIsNotNone(engine)
        
        # Verifica che close sia stato chiamato
        mock_cursor.close.assert_called()
        mock_conn.close.assert_called()


class TestQueryProcessor(unittest.TestCase):
    """Test suite per QueryProcessor."""
    
    def setUp(self):
        """Setup per ogni test."""
        self.processor = QueryProcessor()
    
    def test_process_simple_query(self):
        """Test processamento query semplice."""
        result = self.processor.process_query("machine learning")
        
        self.assertEqual(result['query_type'], QueryType.SIMPLE)
        self.assertTrue(result['validation']['is_valid'])
        self.assertEqual(len(result['components']['terms']), 2)
    
    def test_process_boolean_query(self):
        """Test processamento query booleana."""
        result = self.processor.process_query("python AND machine learning")
        
        self.assertEqual(result['query_type'], QueryType.BOOLEAN)
        self.assertTrue(result['validation']['is_valid'])
        self.assertIn('AND', result['components']['operators'])
    
    def test_process_phrase_query(self):
        """Test processamento query con frasi."""
        result = self.processor.process_query('"machine learning"')
        
        self.assertEqual(result['query_type'], QueryType.PHRASE)
        self.assertTrue(result['validation']['is_valid'])
        self.assertIn('machine learning', result['components']['phrases'])
    
    def test_process_field_query(self):
        """Test processamento query su campo."""
        result = self.processor.process_query('title:"artificial intelligence"')
        
        self.assertEqual(result['query_type'], QueryType.FIELD)
        self.assertTrue(result['validation']['is_valid'])
        self.assertEqual(result['query_info']['primary_field'], 'title')
    
    def test_process_wildcard_query(self):
        """Test processamento query con wildcard."""
        result = self.processor.process_query("machin*")
        
        self.assertEqual(result['query_type'], QueryType.WILDCARD)
        self.assertTrue(result['validation']['is_valid'])
    
    def test_empty_query(self):
        """Test query vuota."""
        result = self.processor.process_query("")
        
        self.assertFalse(result['validation']['is_valid'])
        self.assertIn("Query vuota", result['validation']['errors'][0])
    
    def test_invalid_field_query(self):
        """Test query con campo non valido."""
        result = self.processor.process_query('invalid_field:"test"')
        
        self.assertEqual(result['query_type'], QueryType.FIELD)
        self.assertFalse(result['validation']['is_valid'])
        self.assertTrue(any("Campo non valido" in error for error in result['validation']['errors']))
    
    def test_invalid_boolean_query(self):
        """Test query booleana non valida."""
        result = self.processor.process_query("AND machine learning")
        
        self.assertEqual(result['query_type'], QueryType.BOOLEAN)
        self.assertFalse(result['validation']['is_valid'])
    
    def test_query_complexity_score(self):
        """Test calcolo complessità query."""
        # Query semplice
        simple_score = self.processor.get_query_complexity_score("machine learning")
        self.assertLessEqual(simple_score, 0.2)
        
        # Query complessa
        complex_score = self.processor.get_query_complexity_score(
            'title:"machine learning" AND (python OR java) NOT "deep learning"'
        )
        self.assertGreater(complex_score, 0.5)
    
    def test_create_search_params(self):
        """Test creazione parametri di ricerca."""
        processed = self.processor.process_query("machine learning")
        params = self.processor.create_search_params(processed)
        
        self.assertIn('query', params)
        self.assertIn('type', params)
        self.assertEqual(params['type'], 'simple')


class TestBooleanQueryBuilder(unittest.TestCase):
    """Test suite per BooleanQueryBuilder."""
    
    def test_simple_build(self):
        """Test costruzione query booleana semplice."""
        builder = BooleanQueryBuilder()
        query = builder.add_term("machine").add_term("learning", "AND").build()
        
        self.assertEqual(query, "machine AND learning")
    
    def test_complex_build(self):
        """Test costruzione query booleana complessa."""
        builder = BooleanQueryBuilder()
        query = (builder
                .add_term("machine learning")
                .add_phrase("artificial intelligence", "AND")
                .add_field_query("title", "neural networks", "OR")
                .build())
        
        self.assertIn("machine learning", query)
        self.assertIn('AND "artificial intelligence"', query)
        self.assertIn('OR title:"neural networks"', query)


class TestQueryOptimizer(unittest.TestCase):
    """Test suite per QueryOptimizer."""
    
    def setUp(self):
        """Setup per ogni test."""
        self.optimizer = QueryOptimizer()
    
    def test_optimize_simple_query(self):
        """Test ottimizzazione query semplice."""
        original = "data analysis method"
        optimized = self.optimizer.optimize_query(original, QueryType.SIMPLE)
        
        # Verifica che la query sia stata processata
        self.assertIsInstance(optimized, str)
        self.assertGreater(len(optimized), 0)
    
    def test_suggest_alternatives(self):
        """Test suggerimento alternative."""
        suggestions = self.optimizer.suggest_alternatives("python")
        
        self.assertGreater(len(suggestions), 0)
        self.assertIn('"python"', suggestions)  # Frase esatta
        self.assertIn('python*', suggestions)   # Wildcard


class IntegrationTestSuite(unittest.TestCase):
    """Test di integrazione tra i componenti."""
    
    def setUp(self):
        """Setup per i test di integrazione."""
        self.processor = QueryProcessor()
        self.optimizer = QueryOptimizer()
    
    def test_processor_optimizer_integration(self):
        """Test integrazione processor + optimizer."""
        # Processa query
        processed = self.processor.process_query("machine learning data science")
        
        # Ottimizza se valida
        if processed['validation']['is_valid']:
            optimized = self.optimizer.optimize_query(
                processed['processed_query'], 
                processed['query_type']
            )
            self.assertIsNotNone(optimized)
    
    @patch('postgresql_engine.psycopg2.connect')
    def test_full_search_pipeline(self, mock_connect):
        """Test pipeline completa di ricerca."""
        # Mock database
        mock_conn = Mock()
        mock_cursor = Mock()
        mock_conn.cursor.return_value = mock_cursor
        mock_conn.closed = 0
        mock_cursor.fetchall.return_value = [
            (1, 'Test Title', 'Label', 'Content', 0.8, 'Snippet')
        ]
        mock_connect.return_value = mock_conn
        
        # Pipeline: Query -> Processor -> Engine
        query = "machine learning"
        processed = self.processor.process_query(query)
        
        self.assertTrue(processed['validation']['is_valid'])
        
        # Simula ricerca con motore
        with PostgreSQLSearchEngine() as engine:
            results = engine.search(processed['processed_query'])
            self.assertEqual(len(results), 1)


class PerformanceTestSuite(unittest.TestCase):
    """Test delle performance."""
    
    def setUp(self):
        """Setup per i test di performance."""
        self.processor = QueryProcessor()
    
    def test_query_processing_performance(self):
        """Test performance processamento query."""
        queries = [
            "machine learning",
            "python AND data science",
            '"artificial intelligence"',
            'title:"neural networks"',
            "data* AND (machine OR learning)"
        ]
        
        start_time = time.time()
        
        for query in queries:
            result = self.processor.process_query(query)
            self.assertTrue(result['validation']['is_valid'] or len(result['validation']['errors']) > 0)
        
        end_time = time.time()
        avg_time = (end_time - start_time) / len(queries)
        
        # Dovrebbe processare query in meno di 10ms ciascuna
        self.assertLess(avg_time, 0.01)


def run_tests():
    """Esegue tutta la test suite."""
    # Crea test suite
    test_classes = [
        TestPostgreSQLSearchEngine,
        TestQueryProcessor,
        TestBooleanQueryBuilder,
        TestQueryOptimizer,
        IntegrationTestSuite,
        PerformanceTestSuite
    ]
    
    loader = unittest.TestLoader()
    suite = unittest.TestSuite()
    
    for test_class in test_classes:
        tests = loader.loadTestsFromTestCase(test_class)
        suite.addTests(tests)
    
    # Esegue i test
    runner = unittest.TextTestRunner(verbosity=2)
    result = runner.run(suite)
    
    # Report finale
    print(f"\n{'='*50}")
    print(f"TEST COMPLETATI")
    print(f"{'='*50}")
    print(f"Test eseguiti: {result.testsRun}")
    print(f"Errori: {len(result.errors)}")
    print(f"Fallimenti: {len(result.failures)}")
    print(f"Successo: {result.wasSuccessful()}")
    
    if result.errors:
        print(f"\nERRORI:")
        for test, error in result.errors:
            print(f"- {test}: {error}")
    
    if result.failures:
        print(f"\nFALLIMENTI:")
        for test, failure in result.failures:
            print(f"- {test}: {failure}")
    
    return result.wasSuccessful()


if __name__ == "__main__":
    # Esegue i test
    success = run_tests()
    exit(0 if success else 1)