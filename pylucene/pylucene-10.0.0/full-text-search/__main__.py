from PyLuceneSearchEngine import PyLuceneSearchEngine

if __name__ == "__main__":

    index_dir = "/Users/leovita/uni/unidev/GestioneInfo/pylucene/pylucene-10.0.0/full-text-search/indexing"  
    csv_file = "/Users/leovita/uni/unidev/GestioneInfo/docs/dataset.csv"  

    search_engine = PyLuceneSearchEngine(index_dir=index_dir, csv_file=csv_file)

    search_engine.index_documents()

    print("Indicizzazione completata.")
