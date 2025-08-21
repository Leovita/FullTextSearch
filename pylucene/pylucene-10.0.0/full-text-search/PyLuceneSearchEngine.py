import lucene
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
    

    
    def spell_check_query(self, query_text):
        corrections = {
            "tecnology": "technology",
            "bussiness": "business",
            "polotics": "politics",
            "entertainmant": "entertainment",
            "helth": "health",
            "eduction": "education",
            "sience": "science",
            "enviroment": "environment",
            "crim": "crime",
            "christmas": "christmas",
            "nite": "night",
            "updte": "update",
            "trend": "trend",
            "reform": "reform",
            # Nomi propri specifici del dataset
            "gorden": "gordon",
            "budjet": "budget",
            "liverpol": "liverpool",
            "footbal": "football",
            "microsft": "microsoft",
            "googl": "google",
            "scootland": "scotland",
            "armie": "army",
            "toni": "tony",
            "blare": "blair"
        }
        corrected_query = query_text
        for wrong, correct in corrections.items():
            if wrong in query_text.lower():
                corrected_query = corrected_query.replace(wrong, correct)
        return corrected_query
    
    def create_boosted_query(self, query_text, analyzer):
        # Query principale sul contenuto
        main_query = QueryParser("all_text", analyzer).parse(query_text)
        # Query boostata per titolo (peso 3.0)
        title_query = QueryParser("title", analyzer).parse(query_text)
        boosted_title = BoostQuery(title_query, 3.0)
        
        # Query boostata per categoria (peso 2.0)
        category_query = QueryParser("category", analyzer).parse(query_text)
        boosted_category = BoostQuery(category_query, 2.0)
        
        # Combina le query con OR
        combined_query = BooleanQuery.Builder()
        combined_query.add(main_query, BooleanClause.Occur.SHOULD)
        combined_query.add(boosted_title, BooleanClause.Occur.SHOULD)
        combined_query.add(boosted_category, BooleanClause.Occur.SHOULD)
        
        return combined_query.build()
    
    def indicizza_documento(self, title, text, category):
        doc = Document()
        doc.add(TextField("title", title, Field.Store.YES))  
        doc.add(TextField("content", text, Field.Store.YES))  
        doc.add(TextField("all_text", title + " " + text, Field.Store.NO))
        doc.add(StringField("category", category, Field.Store.YES)) 
        self.writer.addDocument(doc)
    
    def index_documents(self):
        try:
            for doc in self.documenti:
                self.indicizza_documento(doc["title"], doc["text"], doc["category"])
        finally:
            self.writer.close()

    def _setup_searcher(self, ranking_model):
        """Setup del searcher con il modello di ranking appropriato"""
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
        """Processa la query con spell checking"""
        # Spell Checking
        corrected_query = self.spell_check_query(query_text)
        if corrected_query != query_text:
            print(f"Query corretta: '{query_text}' → '{corrected_query}'")
            query_text = corrected_query
        
        return query_text
    
    def _execute_search(self, query_text, analyzer, use_advanced_features, top_n):
        """Esegue la ricerca con strategia intelligente"""
        if use_advanced_features:
            query = self.create_boosted_query(query_text, analyzer)
            hits = self.searcher.search(query, top_n * 2).scoreDocs
        else:
            # Strategia: prima esatta, poi fuzzy
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
            
            # Genera snippet evidenziati
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
            # Processa query
            query_text = self._process_query(query_text, use_advanced_features, analyzer)
            
            # Esegue ricerca
            query, hits = self._execute_search(query_text, analyzer, use_advanced_features, top_n)
            
            # Setup highlighter
            formatter = SimpleHTMLFormatter("<mark>", "</mark>")
            scorer = QueryScorer(query)
            highlighter = Highlighter(formatter, scorer)
            
            # Processa risultati
            results = self._process_results(hits, highlighter, analyzer)
            
            return results[:top_n]
            
        finally:
            reader.close()