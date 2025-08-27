import os
import sys
import json
import time
from typing import List, Dict, Any
import lucene
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, StringField, TextField, Field
from org.apache.lucene.index import IndexWriter, DirectoryReader, IndexWriterConfig
from org.apache.lucene.search import IndexSearcher
from org.apache.lucene.queryparser.classic import QueryParser
from org.apache.lucene.store import FSDirectory
from org.apache.lucene.search.similarities import BM25Similarity, ClassicSimilarity
from org.apache.lucene.search.highlight import Highlighter, QueryScorer, SimpleHTMLFormatter
from java.nio.file import Paths
import csv

class PyLuceneUnifiedInterface:
    """Interfaccia unificata per PyLucene con supporto per query benchmark."""
    
    _is_vm_initialized = False
    
    def __init__(self, csv_file: str, index_dir: str = "indexdir", similarity: str = "bm25"):
        """Inizializza l'interfaccia PyLucene."""
        if not PyLuceneUnifiedInterface._is_vm_initialized:
            lucene.initVM()
            PyLuceneUnifiedInterface._is_vm_initialized = True
        
        #crea la directory dell'indice se non esiste
        os.makedirs(index_dir, exist_ok=True)
        
        self.csv_file = csv_file
        self.index_dir = index_dir
        self.similarity = similarity
        self.analyzer = StandardAnalyzer()
        self._build_index(csv_file)
        self._init_searcher()
    
    def _build_index(self, csv_file: str) -> None:
        """Costruisce l'indice Lucene dal file CSV."""
        try:
            category_map = {
                '0': 'Politics',
                '1': 'Sport', 
                '2': 'Technology',
                '3': 'Entertainment',
                '4': 'Business'
            }
            
            with open(csv_file, 'r', encoding='utf-8') as file:
                reader = csv.DictReader(file)
                
                config = IndexWriterConfig(self.analyzer)
                config.setOpenMode(IndexWriterConfig.OpenMode.CREATE)
                writer = IndexWriter(FSDirectory.open(Paths.get(self.index_dir)), config)
                
                try:
                    for row in reader:
                        title = row.get('Title', '').strip()
                        text = row.get('Text', '').strip()
                        label = row.get('Label', '').strip()
                        
                        # Converti il numero della label in categoria
                        category = category_map.get(label, 'Unknown')
                        
                        if title and text:
                            doc_lucene = Document()
                            doc_lucene.add(TextField("title", title, Field.Store.YES))
                            doc_lucene.add(TextField("content", text, Field.Store.YES))
                            doc_lucene.add(StringField("category", category, Field.Store.YES))
                            
                            writer.addDocument(doc_lucene)
                    
                    writer.commit()
                    writer.close()
                    
                except Exception as e:
                    writer.rollback()
                    writer.close()
                    raise e
                            
            print(f"Indice costruito con successo in: {self.index_dir}")
            
        except Exception as e:
            print(f"Errore durante la costruzione dell'indice: {e}")
            raise
    
    def _init_searcher(self):
        """Inizializza il searcher con il metodo di ranking specificato."""
        reader = DirectoryReader.open(FSDirectory.open(Paths.get(self.index_dir)))
        self.searcher = IndexSearcher(reader)
        
        if self.similarity == "bm25":
            self.searcher.setSimilarity(BM25Similarity())
        else:  #tf-idf (classic)
            self.searcher.setSimilarity(ClassicSimilarity())
        
        print(f"Searcher inizializzato con ranking: {self.similarity}")
    
    def _load_queries_from_file(self, file_path: str) -> List[Dict[str, str]]:
        """
        Carica le query da un file di configurazione JSON.
        
        Args:
            file_path (str): Percorso al file di configurazione
            
        Returns:
            List[Dict[str, str]]: Lista di dizionari con 'id' e 'query'
        """
        import json
        import os
        
        try:
            if not os.path.exists(file_path):
                print(f"File configurazione non trovato: {file_path}")
                return []

            with open(file_path, 'r', encoding='utf-8') as f:
                config = json.load(f)   

            test_queries = []
            for query_data in config.get('test_queries', []):
                test_queries.append({
                    'id': query_data['id'],
                    'query': query_data['query'],
                })

            print(f"Caricamento query effettuato con successo: {len(test_queries)} query caricate")
            return test_queries

        except Exception as e:
            print(f"Errore caricamento configurazione: {e}")
            return []
    
    def search(self, query_text: str, limit: int = 10) -> Dict[str, Any]:
        """Esegue una ricerca full-text con supporto per campi specifici."""
        try:
            # Debug: mostra i campi disponibili nell'indice
            if query_text == "title:Hollywood":
                print(f"[DEBUG] Query speciale: {query_text}")
                print(f"[DEBUG] Campi disponibili nell'indice:")
                try:
                    reader = DirectoryReader.open(FSDirectory.open(Paths.get(self.index_dir)))
                    print(f"[DEBUG] Numero documenti nell'indice: {reader.numDocs()}")
                    if reader.numDocs() > 0:
                        sample_doc = reader.storedFields().document(0)
                        print(f"[DEBUG] Campi del primo documento: {list(sample_doc.getFields())}")
                        print(f"[DEBUG] Titolo primo documento: '{sample_doc.get('title')}'")
                    reader.close()
                except Exception as e:
                    print(f"[DEBUG] Errore lettura indice: {e}")
            
            #gestione query per campo specifico 
            if ':' in query_text and not query_text.startswith('"'):
                field_parts = query_text.split(':', 1)
                if len(field_parts) == 2:
                    field_name = field_parts[0].strip().lower()
                    field_value = field_parts[1].strip()
                    
                    valid_fields = ['title', 'content', 'category']
                    if field_name in valid_fields:
                        query = QueryParser(field_name, self.analyzer).parse(field_value)
                        print(f"[DEBUG] Ricerca nel campo '{field_name}' con valore '{field_value}'")
                        print(f"[DEBUG] Query Lucene generata: {query}")
                    else:
                        query = QueryParser("content", self.analyzer).parse(field_value)
                else:
                    query = QueryParser("content", self.analyzer).parse(query_text)
            else:
                query = QueryParser("content", self.analyzer).parse(query_text)
            
            top_docs = self.searcher.search(query, limit)
            
            print(f"[DEBUG] Risultati trovati: {top_docs.totalHits}")
            
            results = []
            for hit in top_docs.scoreDocs:
                doc = self.searcher.storedFields().document(hit.doc)
                
                title = doc.get("title") or ""
                content = doc.get("content") or ""
                category = doc.get("category") or ""
                
                #crea snippet evidenziato
                snippet = self._create_snippet(query_text, content)
                
                results.append({
                    'title': title,
                    'content': content,
                    'category': category,
                    'snippet': snippet,
                    'score': hit.score
                })
            
            return {
                'query': query_text,
                'total_results': len(results),
                'results': results,
                'metadata': {
                    'ranking_method': self.similarity
                }
            }
            
        except Exception as e:
            print(f"Errore durante la ricerca: {e}")
            return {
                'query': query_text,
                'total_results': 0,
                'results': [],
                'error': str(e),
                'metadata': {
                    'ranking_method': self.similarity
                }
            }
    
    def _create_snippet(self, query_text: str, content: str, max_length: int = 200) -> str:
        """Crea uno snippet evidenziato del contenuto."""
        if not content:
            return ""
        
        # Estrai il valore effettivo da cercare per le query per campo
        search_value = query_text
        if ':' in query_text and not query_text.startswith('"'):
            field_parts = query_text.split(':', 1)
            if len(field_parts) == 2:
                search_value = field_parts[1].strip()
        
        # Cerca il valore nel contenuto (case-insensitive)
        start_pos = content.lower().find(search_value.lower())
        
        if start_pos == -1:
            return content[:max_length] + "..." if len(content) > max_length else content
        
        snippet_start = max(0, start_pos - 50)
        snippet_end = min(len(content), start_pos + len(search_value) + 50)
        
        snippet = content[snippet_start:snippet_end]
        
        if snippet_start > 0:
            snippet = "..." + snippet
        if snippet_end < len(content):
            snippet = snippet + "..."
        
        return snippet
    
    def run_benchmark_queries(self, config_file: str = "../../../benchmark_queries_config.json") -> List[Dict[str, Any]]:
        """Esegue tutte le query benchmark e restituisce le statistiche."""
        
        queries = self._load_queries_from_file(config_file)
        if not queries:
            print("[ERRORE] Nessuna query caricata per il benchmark")
            return []
        
        results = []
        total_time = 0
        
        for query_info in queries:
            query_text = query_info['query']
            start_time = time.time()
            
            result = self.search(query_text, limit=10)
            end_time = time.time()
            
            response_time = (end_time - start_time) * 1000
            total_time += response_time
            
            results.append({
                'query': query_text,
                'total_results': result['total_results'],
                'response_time_ms': response_time,
                'ranking_method': self.similarity
            })
        
        # Stampa statistiche
        avg_time = total_time / len(queries) if queries else 0
        print("\n" + "=" * 50)
        print("STATISTICHE BENCHMARK")
        print("=" * 50)
        print(f"   Query eseguite: {len(queries)}")
        print(f"   Tempo totale: {total_time:.2f}ms")
        print(f"   Tempo medio: {avg_time:.2f}ms")
        print(f"   Ranking: {self.similarity}")
        
        return results
    
    def close(self):
        """Chiude le risorse."""
        try:
            if hasattr(self, 'searcher') and self.searcher:
                # Chiudi il reader sottostante
                reader = self.searcher.getIndexReader()
                if reader:
                    reader.close()
        except Exception as e:
            print(f"Errore durante la chiusura: {e}")
    
    def __enter__(self):
        """Context manager entry."""
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        """Context manager exit."""
        self.close()