import os
import re
from collections import Counter, defaultdict
import json
import logging
from typing import Dict, List, Any

# Definisce il percorso per la cartella dei log
LOG_DIR = '/'
LOG_FILE = os.path.join(LOG_DIR, 'query_processor.log')

# Configurazione del logging per l'analizzatore
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

class LogAnalyzer:
    """
    Analizza i log del QueryProcessor per generare statistiche sulle query.
    """
    
    def __init__(self):
        self.logger = logging.getLogger(__name__)
        self.query_logs = self._read_log_file()
        self.total_queries = len(self.query_logs)
        self.stats = {}

    def _read_log_file(self) -> List[Dict[str, str]]:
        """
        Legge il file di log e estrae le linee rilevanti.
        Ogni riga di log 'Query processata' contiene informazioni chiave.
        """
        logs = []
        if not os.path.exists(LOG_FILE):
            self.logger.warning(f"File di log non trovato: {LOG_FILE}")
            return logs
        
        # Regex per analizzare la riga di log
        log_pattern = re.compile(
            r'.*Query processata\. Tipo: (?P<type>\w+)\. Validità: (?P<valid>\w+)\s* {(?P<details>.*?)}'
        )
        
        with open(LOG_FILE, 'r') as f:
            for line in f:
                match = log_pattern.match(line)
                if match:
                    log_data = match.groupdict()
                    logs.append({
                        'type': log_data['type'],
                        'is_valid': log_data['valid'] == 'True'
                    })
        return logs

    def generate_report(self) -> Dict[str, Any]:
        """
        Genera un rapporto completo sulle query processate.
        """
        self.logger.info("Generazione del rapporto di analisi dei log...")
        
        if self.total_queries == 0:
            self.logger.warning("Nessuna query trovata nel log. Impossibile generare il rapporto.")
            return {"status": "No data found"}
        
        self.stats['total_queries'] = self.total_queries
        self.stats['query_type_distribution'] = self._analyze_query_types()
        self.stats['validity_stats'] = self._analyze_query_validity()
        self.stats['most_searched_terms'] = self._analyze_most_common_terms()
        
        self.logger.info("Rapporto generato con successo.")
        return self.stats

    def _analyze_query_types(self) -> Dict[str, float]:
        """Calcola la distribuzione dei tipi di query."""
        type_counts = Counter(log['type'] for log in self.query_logs)
        distribution = {
            query_type: count / self.total_queries
            for query_type, count in type_counts.items()
        }
        return distribution

    def _analyze_query_validity(self) -> Dict[str, Any]:
        """Analizza il rapporto tra query valide e non valide."""
        valid_count = sum(1 for log in self.query_logs if log['is_valid'])
        invalid_count = self.total_queries - valid_count
        
        return {
            'total_valid': valid_count,
            'total_invalid': invalid_count,
            'validity_rate': valid_count / self.total_queries if self.total_queries > 0 else 0
        }

    def _analyze_most_common_terms(self, top_n: int = 10) -> Dict[str, int]:
        """
        Estrae i termini più comuni dalle query nel log.
        Questa implementazione è semplificata e non considera l'analisi semantica.
        """
        # Questo è un placeholder. In una soluzione reale, servirebbe un log più dettagliato
        # per recuperare i termini esatti delle query, che l'attuale `query_processor.log` non salva.
        # Dovremmo modificare il `query_processor` per loggare il contenuto della query.
        
        # A scopo dimostrativo, usiamo un metodo che cerca parole comuni
        # se il file di log fosse più verboso.
        self.logger.warning("L'analisi dei termini più cercati è basata su un'ipotesi di log più dettagliato.")
        
        # Simula il recupero dei termini da un log più verboso
        terms_counter = Counter()
        with open(LOG_FILE, 'r') as f:
            for line in f:
                if 'Query processata.' in line:
                    # Ipotizziamo che la query originale sia loggata in un formato specifico
                    match = re.search(r"'original_query':\s*['\"]([^'\"]+)['\"]", line)
                    if match:
                        query_text = match.group(1).lower()
                        # Semplice tokenizzazione
                        if "field:" in query_text:
                            query_text = re.sub(r"field:", "", query_text)
                        words = re.findall(r'\b\w+\b', query_text)
                        # Filtra termini non utili
                        filtered_words = [word for word in words if len(word) > 2 and word not in ['and', 'or', 'not', 'the']]
                        terms_counter.update(filtered_words)
                        
        return dict(terms_counter.most_common(top_n))

    def print_report(self):
        """Stampa il rapporto in un formato leggibile."""
        report = self.generate_report()
        
        if "status" in report:
            print(report["status"])
            return

        print("\n" + "="*50)
        print(" RAPPORTI DI ANALISI DELLE QUERY ")
        print("="*50)
        print(f"Numero totale di query processate: {report['total_queries']}")
        print("-" * 50)
        
        print("Distribuzione per tipo di query:")
        for q_type, percentage in report['query_type_distribution'].items():
            print(f"- {q_type.capitalize():<10}: {percentage:.2%}")
        print("-" * 50)
        
        print("Statistiche di validità:")
        print(f"- Query valide: {report['validity_stats']['total_valid']}")
        print(f"- Query non valide: {report['validity_stats']['total_invalid']}")
        print(f"- Tasso di validità: {report['validity_stats']['validity_rate']:.2%}")
        print("-" * 50)
        
        print("Termini più ricercati:")
        if report['most_searched_terms']:
            for term, count in report['most_searched_terms'].items():
                print(f"- {term}: {count} volte")
        else:
            print("Nessun dato disponibile.")
        
        print("="*50)
        
if __name__ == "__main__":
    analyzer = LogAnalyzer()
    analyzer.print_report()