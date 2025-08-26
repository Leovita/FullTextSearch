import lucene
import re
from CSVReader import CSVReader
from java.nio.file import Paths
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.document import Document, Field, TextField, StringField
from org.apache.lucene.index import IndexWriter, IndexWriterConfig, DirectoryReader, Term
from org.apache.lucene.store import FSDirectory
from org.apache.lucene.search import IndexSearcher, BooleanQuery, BooleanClause, TermQuery, BoostQuery
from org.apache.lucene.queryparser.classic import QueryParser
from org.apache.lucene.search.similarities import BM25Similarity, ClassicSimilarity
from org.apache.lucene.search.highlight import Highlighter, QueryScorer, SimpleHTMLFormatter  


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
        config.setOpenMode(IndexWriterConfig.OpenMode.CREATE)
        self.writer = IndexWriter(self.index_dir, config)
        self.documenti = CSVReader(csv_file)
    
    #function to create boosted query prioritizing title and category
    def create_boosted_query(self, query_text, analyzer):
        #boosting values
        CATEGORY_BOOST = 1.5
        TITLE_BOOST = 3.0

        main_query = QueryParser("all_text", analyzer).parse(query_text)
        title_query = QueryParser("title", analyzer).parse(query_text)
        category_query = QueryParser("category", analyzer).parse(query_text)

        #query boosting: title and category have more weight than the main query
        boosted_title = BoostQuery(title_query, TITLE_BOOST)
        boosted_category = BoostQuery(category_query, CATEGORY_BOOST)

        #combined query with boosted title and category
        combined_query = BooleanQuery.Builder()
        combined_query.add(main_query, BooleanClause.Occur.SHOULD)
        combined_query.add(boosted_title, BooleanClause.Occur.SHOULD)
        combined_query.add(boosted_category, BooleanClause.Occur.SHOULD)
        
        return combined_query.build()
    
    def index_documents(self):
        """Indicizza tutti i documenti"""
        try:
            for doc in self.documenti:
                lucene_doc = Document()
                lucene_doc.add(TextField("title", doc["title"], Field.Store.YES))  
                lucene_doc.add(TextField("content", doc["text"], Field.Store.YES))  
                lucene_doc.add(TextField("all_text", doc["title"] + " " + doc["text"], Field.Store.NO))
                lucene_doc.add(StringField("category", doc["category"], Field.Store.YES)) 
                
                self.writer.addDocument(lucene_doc)
        finally:
            self.writer.close()

    def _setup_searcher(self, ranking_model):
        """Setup del searcher con il modello di ranking desiderato"""
        reader = DirectoryReader.open(self.index_dir)
        searcher = IndexSearcher(reader)
        
        if ranking_model == "bm25":
            searcher.setSimilarity(BM25Similarity())
        elif ranking_model == "tfidf":
            searcher.setSimilarity(ClassicSimilarity())
        else:
            raise ValueError(f"Modello di ranking non valido: {ranking_model}")
        
        return reader, searcher
    
    def _process_query(self, query_text, use_advanced_features, analyzer):
        """Processa e migliora la query prima della ricerca"""
        if not query_text or not query_text.strip():
            return ""
        
        #query cleaning
        query_text = query_text.strip().lower()
        query_text = re.sub(r'[^\w\s]', ' ', query_text)    
        query_text = re.sub(r'\s+', ' ', query_text)
        
        return query_text
    
    def _execute_search(self, query_text, analyzer, use_advanced_features, top_n):
        """Esegue la ricerca con strategia intelligente"""
        if use_advanced_features:
            query = self.create_boosted_query(query_text, analyzer)
            hits = self.searcher.search(query, top_n * 2).scoreDocs
        else:
            #prima esatta, poi fuzzy con boost
            query_exact = QueryParser("all_text", analyzer).parse(query_text)
            hits_exact = self.searcher.search(query_exact, top_n).scoreDocs
            
            if len(hits_exact) > 0:
                query = query_exact
                hits = hits_exact
            else:
                query_fuzzy = QueryParser("all_text", analyzer).parse(query_text + "~0.8")
                hits = self.searcher.search(query_fuzzy, top_n).scoreDocs
                query = query_fuzzy
        
        return query, hits
    
    def _process_results(self, hits, highlighter, analyzer):
        """Processa i risultati e genera snippet evidenziati"""
        results = []
        for hit in hits:
            doc = self.searcher.storedFields().document(hit.doc)
            title = doc.get("title") or "Titolo non disponibile"
            content = doc.get("content") or "Contenuto non disponibile"
            category = doc.get("category") or "Categoria non disponibile"
            
            try:
                highlighted_title = highlighter.getBestFragment(analyzer, "title", title) or title
                highlighted_content = highlighter.getBestFragment(analyzer, "content", content) or content[:200] + "..."
            except:
                highlighted_title = title
                highlighted_content = content[:200] + "..."
            
            results.append((title, content, category, highlighted_title, highlighted_content))
        
        return results

    def search_documents(self, query_text, top_n=3, ranking_model="bm25", use_advanced_features=True):
        """Ricerca con funzionalità essenziali: spell checking, boosting e highlighting"""
        reader, self.searcher = self._setup_searcher(ranking_model)
        analyzer = StandardAnalyzer()
        
        try:
            query_text = self._process_query(query_text, use_advanced_features, analyzer)
            query, hits = self._execute_search(query_text, analyzer, use_advanced_features, top_n)
            
            #highlighting per il matching
            formatter = SimpleHTMLFormatter("<mark>", "</mark>")
            scorer = QueryScorer(query)
            highlighter = Highlighter(formatter, scorer)
            
            results = self._process_results(hits, highlighter, analyzer)
            return results[:top_n]
            
        finally:
            reader.close()