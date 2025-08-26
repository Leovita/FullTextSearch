import os
import csv
import logging
import time
from typing import Dict, List, Any, Optional
from whoosh import index
from whoosh.fields import Schema, TEXT, KEYWORD, ID
from whoosh.analysis import StandardAnalyzer, StemmingAnalyzer
from whoosh.filedb.filestore import FileStorage

# Configurazione logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

class WhooshIndexer:
    """
    Indicizzatore per Whoosh con supporto per documenti multi-campo.
    Crea e mantiene l'indice Whoosh per il dataset.
    """
    
    def __init__(self, index_dir: str = "whoosh_index"):
        """
        Inizializza l'indicizzatore Whoosh.
        
        Args:
            index_dir: Directory per l'indice Whoosh
        """
        self.logger = logging.getLogger(__name__)
        self.index_dir = index_dir
        self.index = None
        
        # Crea directory se non esistente
        if not os.path.exists(index_dir):
            os.makedirs(index_dir)
            self.logger.info(f"Directory indice creata: {index_dir}")
        
        # Schema modificata senza ID
        self.schema = Schema(
            id=ID(stored=True),
            title=TEXT(stored=True, analyzer=StemmingAnalyzer()),
            text=TEXT(stored=True, analyzer=StemmingAnalyzer()),  # Cambiato da content a text
            label=KEYWORD(stored=True),
            combined_text=TEXT(analyzer=StemmingAnalyzer())
        )
        
        self.logger.info("WhooshIndexer inizializzato")
    
    def create_index(self) -> bool:
        """
        Crea un nuovo indice Whoosh.
        
        Returns:
            True se successo, False altrimenti
        """
        try:
            # Rimuove indice esistente se presente
            if os.path.exists(self.index_dir):
                import shutil
                shutil.rmtree(self.index_dir)
                os.makedirs(self.index_dir)
            
            # Crea nuovo indice
            self.index = index.create_in(self.index_dir, self.schema)
            self.logger.info("Indice Whoosh creato con successo")
            return True
            
        except Exception as e:
            self.logger.error(f"Errore nella creazione indice: {e}")
            return False
    
    def open_index(self) -> bool:
        """
        Apre un indice esistente.
        
        Returns:
            True se successo, False altrimenti
        """
        try:
            if index.exists_in(self.index_dir):
                self.index = index.open_dir(self.index_dir)
                self.logger.info("Indice Whoosh aperto con successo")
                return True
            else:
                self.logger.warning("Indice non esistente, creazione necessaria")
                return self.create_index()
                
        except Exception as e:
            self.logger.error(f"Errore nell'apertura indice: {e}")
            return False
    
    def index_csv_dataset(self, csv_file: str) -> Dict[str, Any]:
        """
        Indicizza un dataset CSV nel formato specificato:
        Title,Text,Label

        Args:
            csv_file: Path al file CSV
            
        Returns:
            Dizionario con statistiche indicizzazione
        """
        if not self.index:
            if not self.create_index():
                return {"success": False, "error": "Impossibile creare indice"}
        
        start_time = time.time()
        indexed_count = 0
        error_count = 0
        batch_size = 100  # Process documents in batches
        documents_batch = []
        
        try:
            with open(csv_file, 'r', encoding='utf-8', newline='') as file:
                reader = csv.DictReader(file)
                writer = self.index.writer()
                
                for row in reader:
                    try:
                        title = row.get("Title", "").strip()
                        text = row.get("Text", "").strip()
                        label = row.get("Label", "").strip()
                        
                        # Skip righe vuote
                        if not title and not text:
                            continue
                        
                        # Campo combinato per ricerca generale
                        combined = f"{title} {text}".strip()
                        
                        # Aggiungi documento all'indice
                        writer.add_document(
                            id=str(indexed_count + 1),  # Convert to string
                            title=title,
                            text=text,
                            label=label,
                            combined_text=combined
                        )
                        
                        indexed_count += 1
                        
                        if indexed_count % batch_size == 0:
                            # Commit batch and create new writer
                            writer.commit()
                            writer = self.index.writer()
                            self.logger.info(f"Indicizzati {indexed_count} documenti...")
                    
                    except Exception as e:
                        error_count += 1
                        self.logger.error(f"Errore nell'indicizzazione documento: {e}")
                        continue
                
                # Commit any remaining documents
                if writer is not None:
                    writer.commit()
        
            indexing_time = time.time() - start_time
            
            stats = {
                "success": True,
                "indexed_documents": indexed_count,
                "errors": error_count,
                "indexing_time": indexing_time,
                "documents_per_second": indexed_count / indexing_time if indexing_time > 0 else 0
            }
            
            self.logger.info(f"Indicizzazione completata: {indexed_count} documenti in {indexing_time:.2f}s")
            return stats
            
        except Exception as e:
            self.logger.error(f"Errore durante indicizzazione: {e}")
            return {"success": False, "error": str(e)}
    
    def index_documents(self, documents: List[Dict[str, Any]]) -> Dict[str, Any]:
        """
        Indicizza una lista di documenti.
        
        Args:
            documents: Lista di dizionari con campi documento
            
        Returns:
            Dizionario con statistiche indicizzazione
        """
        if not self.index:
            if not self.create_index():
                return {"success": False, "error": "Impossibile creare indice"}
        
        start_time = time.time()
        indexed_count = 0
        error_count = 0
        
        try:
            with self.index.writer() as writer:
                for doc_id, doc in enumerate(documents, 1):
                    try:
                        title = doc.get('title', '').strip()
                        content = doc.get('content', '').strip()
                        label = doc.get('label', '').strip()
                        
                        if not title and not content:
                            continue
                        
                        combined = f"{title} {content}".strip()
                        
                        writer.add_document(
                            id=doc_id,
                            title=title,
                            content=content,
                            label=label,
                            combined_text=combined
                        )
                        
                        indexed_count += 1
                        
                    except Exception as e:
                        error_count += 1
                        self.logger.error(f"Errore nell'indicizzazione documento {doc_id}: {e}")
                        continue
            
            indexing_time = time.time() - start_time
            
            stats = {
                "success": True,
                "indexed_documents": indexed_count,
                "errors": error_count,
                "indexing_time": indexing_time,
                "documents_per_second": indexed_count / indexing_time if indexing_time > 0 else 0
            }
            
            self.logger.info(f"Indicizzazione completata: {indexed_count} documenti")
            return stats
            
        except Exception as e:
            self.logger.error(f"Errore durante indicizzazione: {e}")
            return {"success": False, "error": str(e)}
    
    def add_document(self, doc_id: str, title: str, content: str, label: str = "") -> bool:
        """
        Aggiunge un singolo documento all'indice.
        
        Args:
            doc_id: ID univoco documento
            title: Titolo documento
            content: Contenuto documento
            label: Label/categoria documento
            
        Returns:
            True se successo, False altrimenti
        """
        if not self.index:
            if not self.open_index():
                return False
        
        try:
            combined = f"{title} {content}".strip()
            
            with self.index.writer() as writer:
                writer.add_document(
                    id=doc_id,
                    title=title,
                    content=content,
                    label=label,
                    combined_text=combined
                )
            
            self.logger.info(f"Documento {doc_id} aggiunto all'indice")
            return True
            
        except Exception as e:
            self.logger.error(f"Errore nell'aggiunta documento {doc_id}: {e}")
            return False
    
    def update_document(self, doc_id: str, title: str, content: str, label: str = "") -> bool:
        """
        Aggiorna un documento esistente nell'indice.
        
        Args:
            doc_id: ID documento da aggiornare
            title: Nuovo titolo
            content: Nuovo contenuto
            label: Nuova label
            
        Returns:
            True se successo, False altrimenti
        """
        if not self.index:
            if not self.open_index():
                return False
        
        try:
            combined = f"{title} {content}".strip()
            
            with self.index.writer() as writer:
                writer.update_document(
                    id=doc_id,
                    title=title,
                    content=content,
                    label=label,
                    combined_text=combined
                )
            
            self.logger.info(f"Documento {doc_id} aggiornato")
            return True
            
        except Exception as e:
            self.logger.error(f"Errore nell'aggiornamento documento {doc_id}: {e}")
            return False
    
    def delete_document(self, doc_id: str) -> bool:
        """
        Elimina un documento dall'indice.
        
        Args:
            doc_id: ID documento da eliminare
            
        Returns:
            True se successo, False altrimenti
        """
        if not self.index:
            if not self.open_index():
                return False
        
        try:
            with self.index.writer() as writer:
                writer.delete_by_term('id', doc_id)
            
            self.logger.info(f"Documento {doc_id} eliminato")
            return True
            
        except Exception as e:
            self.logger.error(f"Errore nell'eliminazione documento {doc_id}: {e}")
            return False
    
    def get_index_stats(self) -> Dict[str, Any]:
        """
        Restituisce statistiche sull'indice.
        
        Returns:
            Dizionario con statistiche
        """
        if not self.index:
            if not self.open_index():
                return {"error": "Indice non disponibile"}
        
        try:
            with self.index.searcher() as searcher:
                stats = {
                    "total_documents": searcher.doc_count(),
                    "unique_terms": len(list(searcher.lexicon("combined_text"))),
                    "index_size_mb": self._get_index_size() / (1024 * 1024),
                    "index_directory": self.index_dir,
                    "schema_fields": list(self.schema.names())
                }
                
                # Statistiche per label se disponibili
                try:
                    from collections import Counter
                    labels = [doc['label'] for doc in searcher.documents()]
                    stats["documents_by_label"] = dict(Counter(labels))
                except:
                    pass
                
                return stats
                
        except Exception as e:
            self.logger.error(f"Errore nel recupero statistiche: {e}")
            return {"error": str(e)}
    
    def _get_index_size(self) -> int:
        """Calcola dimensione indice in bytes."""
        total_size = 0
        try:
            for dirpath, dirnames, filenames in os.walk(self.index_dir):
                for filename in filenames:
                    filepath = os.path.join(dirpath, filename)
                    total_size += os.path.getsize(filepath)
        except:
            pass
        return total_size
    
    def optimize_index(self) -> bool:
        """
        Ottimizza l'indice per migliori performance.
        
        Returns:
            True se successo, False altrimenti
        """
        if not self.index:
            if not self.open_index():
                return False
        
        try:
            start_time = time.time()
            # Invece di usare il writer in un blocco with, chiamiamo direttamente optimize
            self.index.optimize()
            
            optimization_time = time.time() - start_time
            self.logger.info(f"Indice ottimizzato in {optimization_time:.2f}s")
            return True
            
        except Exception as e:
            self.logger.error(f"Errore nell'ottimizzazione indice: {e}")
            return False
    
    def close(self):
        """Chiude l'indice."""
        if self.index:
            self.index.close()
            self.index = None
            self.logger.info("Indice chiuso")
    
    def __enter__(self):
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()


# Esempio di utilizzo
if __name__ == "__main__":
    # Test dell'indicizzatore
    indexer = WhooshIndexer("whoosh_index")
    
    # Test con file CSV
    csv_file = "../docs/dataset.csv"  # Assicurati che il file esista
    if os.path.exists(csv_file):
        result = indexer.index_csv_dataset(csv_file)
        print(f"Risultato indicizzazione: {result}")
        
        # Statistiche
        stats = indexer.get_index_stats()
        print(f"Statistiche indice: {stats}")
        
        # Ottimizzazione
        indexer.optimize_index()
    
    # Chiusura
    indexer.close()