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
    def __init__(self, index_dir: str, csv_file: str):
        """
        Costruttore della classe PyLuceneSearchEngine.
        
        :param index_dir: Directory dove salvare l'indice di Lucene.
        :param csv_file: Percorso del file CSV contenente i documenti.
        """
        # Inizializzare l'ambiente Lucene
        lucene.initVM()
        
        # Creare la directory dell'indice
        self.index_dir = FSDirectory.open(Paths.get(index_dir))
        
        # Creare l'analizzatore e la configurazione per l'indice
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
        for doc in self.documenti:
            self.indicizza_documento(doc["text"], doc["category"])
        self.writer.close()
    
    def search_documents(self, query_text, top_n=10):
        """
        Esegue una ricerca sull'indice creato con PyLucene.
        
        :param query_text: La query da cercare.
        :param top_n: Numero di risultati da restituire (default 10).
        :return: Lista di tuple (contenuto, categoria) dei risultati trovati.
        """
        # Aprire l'indice
        reader = DirectoryReader.open(self.index_dir)
        searcher = IndexSearcher(reader)
        analyzer = StandardAnalyzer()

        # Creare una query a partire dal testo della query
        query = QueryParser("content", analyzer).parse(query_text)
        
        # Eseguire la ricerca
        hits = searcher.search(query, top_n).scoreDocs
        results = []
        for hit in hits:
            doc = searcher.doc(hit.doc)  # Otteniamo il documento dalla posizione nell'indice
            results.append((doc.get("content"), doc.get("category")))
        
        return results
