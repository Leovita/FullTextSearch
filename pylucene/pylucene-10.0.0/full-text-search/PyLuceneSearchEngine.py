import lucene
from CSVReader import CSVReader
import csv

from java.nio.file import Paths
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, TextField, StringField
from org.apache.lucene.index import IndexWriter, IndexWriterConfig
from org.apache.lucene.store import FSDirectory
from org.apache.lucene.search import IndexSearcher
from org.apache.lucene.queryparser.classic import QueryParser
from org.apache.lucene.index import DirectoryReader

class PyLuceneSearchEngine:
    _is_vm_initialized = False


    def __init__(self, index_dir: str, csv_file: str):
        """
        Costruttore della classe PyLuceneSearchEngine.
        
        :param index_dir: Directory dove salvare l'indice di Lucene.
        :param csv_file: Percorso del file CSV contenente i documenti.
        """
        if not PyLuceneSearchEngine._is_vm_initialized:
            lucene.initVM()
            PyLuceneSearchEngine._is_vm_initialized = True
        
        self.index_dir = FSDirectory.open(Paths.get(index_dir))
        
        analyzer = StandardAnalyzer()
        config = IndexWriterConfig(analyzer)
        self.writer = IndexWriter(self.index_dir, config)
        self.documenti = CSVReader(csv_file)
    
    def indicizza_documento(self, text, category):
        """
        Aggiunge un documento all'indice.
        
        :param text: Testo del documento.
        :param category: Categoria del documento.
        """
        doc = Document()
        doc.add(TextField("content", text, Field.Store.YES))  
        doc.add(StringField("category", category, Field.Store.YES)) 
        self.writer.addDocument(doc)
    
    def index_documents(self):
        """
        Indicizza tutti i documenti letti dal file CSV.
        """
        try:
            for doc in self.documenti:
                self.indicizza_documento(doc["text"], doc["category"])
        finally:
            self.writer.close()

    def search_documents(self, query_text, top_n=3):
        """
        Esegue una ricerca sull'indice creato con PyLucene.
        
        :param query_text: La query da cercare.
        :param top_n: Numero di risultati da restituire (default 10).
        :return: Lista di tuple (contenuto, categoria) dei risultati trovati.
        """
        reader = DirectoryReader.open(self.index_dir)
        searcher = IndexSearcher(reader)
        analyzer = StandardAnalyzer()
        query = QueryParser("content", analyzer).parse(query_text)
        
        hits = searcher.search(query, top_n).scoreDocs
        results = []
        for hit in hits:
            doc = searcher.storedFields().document(hit.doc)
            content = doc.get("content") if doc.get("content") else "Contenuto non disponibile"
            category = doc.get("category") if doc.get("category") else "Categoria non disponibile"
            results.append((content, category))
        reader.close()
        
        return results