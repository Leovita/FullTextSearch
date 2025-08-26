Of course, here is the documentation for the Whoosh search engine component.

# Documentazione del Motore di Ricerca Whoosh

Questo documento fornisce una guida completa all'utilizzo del motore di ricerca basato su **Whoosh**, una libreria di indicizzazione e ricerca full-text interamente scritta in Python. L'engine è stato progettato per integrarsi nel progetto di Information Retrieval, offrendo funzionalità avanzate come l'analisi intelligente delle query, ranking personalizzabile e un'API unificata per un facile utilizzo.

-----

## **Sommario**

1. [Architettura del Sistema](#1-architettura-del-sistema)
2. [Come Usare l'Engine](#2-come-usare-lengine)
   - [A. Installazione e Configurazione](#a-installazione-e-configurazione)
   - [B. Inizializzazione](#b-inizializzazione)
   - [C. Esecuzione di una Ricerca](#c-esecuzione-di-una-ricerca)
   - [D. Ottenere le Statistiche](#d-ottenere-le-statistiche)
   - [E. Gestione delle Risorse](#e-gestione-delle-risorse)
3. [Input e Output Standardizzati](#3-input-e-output-standardizzati)
   - [A. Input](#a-input)
   - [B. Output](#b-output)
4. [Troubleshooting Comune](#4-troubleshooting-comune)

-----

## **1. Architettura del Sistema**

Il sistema Whoosh è stato modularizzato per separare le responsabilità e garantire flessibilità. È composto da quattro script principali:

1.  `whoosh_indexer.py`: Si occupa della **creazione e gestione dell'indice**. Legge i documenti da una fonte (es. un file CSV), li processa e li scrive in una directory di indice ottimizzata per la ricerca. Definisce lo schema dei dati (campi come `title`, `text`, `label`).
2.  `whoosh_engine.py`: È il **cuore della ricerca**. Riceve le query già processate e le esegue sull'indice Whoosh. Supporta diversi tipi di ricerca (semplice, booleana, per frase, per campo, wildcard) e implementa i modelli di scoring per il ranking.
3.  `whoosh_query_processor.py`: Un componente intelligente che **analizza e pre-elabora la query** dell'utente. Identifica automaticamente il tipo di query (es. `BOOLEAN`, `PHRASE`), ne valida la sintassi e la ottimizza. Un'ottimizzazione chiave è l'ordinamento dinamico dei termini in base alla loro frequenza nell'indice, migliorando la velocità di esecuzione.
4.  `whoosh_interface.py`: L'**interfaccia unificata** che orchestra gli altri componenti. Agisce come un'API standardizzata, rendendo l'interazione con il sistema Whoosh identica a quella con il sistema PostgreSQL. Gestisce l'intero flusso: riceve la query utente, la passa al processore, invia la query ottimizzata all'engine e formatta l'output in modo standard.

-----

## **2. Come Usare l'Engine**

L'interazione con il sistema avviene tramite la classe `WhooshUnifiedInterface` nel file `whoosh_interface.py`, che astrae tutta la complessità sottostante.

### A. Installazione e Configurazione

Prima di poter effettuare ricerche, è necessario creare un indice a partire dal dataset.

1.  Installa i moduli Python necessari con il comando: `pip install -r ./setup/requirements.txt`.
2.  Assicurati che il tuo dataset sia in formato CSV con le colonne `Title`, `Text`, `Label`.
3.  Esegui lo script `whoosh_indexer.py`. Questo creerà una cartella (es. `test_index`) contenente i file dell'indice Whoosh. Puoi modificare il percorso del CSV e della cartella di output direttamente nello script.

<!-- end list -->

```python
# Esempio in whoosh_indexer.py
if __name__ == "__main__":
    indexer = WhooshIndexer("test_index") # Specifica la cartella per l'indice
    csv_file = "../docs/dataset.csv"      # Specifica il percorso del tuo dataset
    indexer.index_csv_dataset(csv_file)
    indexer.close()
```

### **B. Inizializzazione**

Per utilizzare il motore di ricerca, importa la classe `WhooshUnifiedInterface` e crea un'istanza. Durante l'inizializzazione puoi configurare parametri importanti.

```python
from whoosh_interface import WhooshUnifiedInterface

# Inizializza con il metodo di ranking di default (TF-IDF)
# Assicurati che la directory "test_index" esista
interface_freq = WhooshUnifiedInterface(index_dir="test_index", ranking="Frequency")

# Inizializza con il metodo di ranking BM25F (più moderno)
interface_dens = WhooshUnifiedInterface(index_dir="test_index", ranking="Density")
```

**Parametri Configurabili:**

  * `index_dir` (str): Il percorso della cartella che contiene l'indice Whoosh creato in precedenza. **Default**: `"test_index"`.
  * `ranking` (str): Il modello di scoring da utilizzare per classificare i risultati.
      * `"Frequency"` (default): Utilizza il modello classico **TF-IDF**.
      * `"Density"`: Utilizza il modello **BM25F**, spesso considerato più efficace.

### **C. Esecuzione di una Ricerca**

Il metodo `search()` è il punto di ingresso principale per tutte le interrogazioni.

```python
user_query = "Tony Blair trust voters"

# Esegui la ricerca con il ranking BM25F
result = interface_dens.search(user_query, limit=5, min_score=0.1)

# L'output è un dizionario standardizzato, compatibile con quello di PostgreSQL
print(f"Tipo di query analizzata: {result['processed_info']['query_type']}")
print(f"Numero di risultati: {result['total_results']}")
print(f"Tempo di risposta: {result['metrics']['response_time_ms']:.2f} ms")

if result['results']:
    for res in result['results']:
        print(f"- Titolo: {res['title']}")
        print(f"  Snippet: {res['snippet']}")
        print(f"  Punteggio: {res['score']:.2f}")
```

### **D. Ottenere le Statistiche**

Per monitorare le performance e le caratteristiche dell'indice, puoi usare il metodo `get_stats()`.

```python
stats = interface_dens.get_stats()
print("Statistiche del sistema Whoosh:")
print(f"  - Documenti totali: {stats['stats']['total_documents']}")
print(f"  - Dimensione indice: {stats['stats']['index_size_mb']:.2f} MB")
print(f"  - Tempo medio di risposta: {stats['performance']['avg_response_time_ms']:.2f} ms")
```

### **E. Gestione delle Risorse**

La classe supporta il **context manager** di Python (`with`), che garantisce la corretta chiusura delle risorse (lettori di indice) anche in caso di errori.

```python
with WhooshUnifiedInterface(ranking="Frequency") as engine:
    engine.search("document clustering")
    # Altre operazioni...
# I file dell'indice vengono chiusi automaticamente qui
```

-----

## **3. Input e Output Standardizzati**

L'API è stata progettata per essere coerente con quella di PostgreSQL, facilitando il benchmark comparativo.

### **A. Input**

Il metodo `search()` accetta i seguenti parametri:

  * `user_query` (str): La stringa di ricerca. Il sistema riconosce automaticamente:
      * **Query semplici**: `machine learning`
      * **Query booleane**: `privacy AND internet NOT social`
      * **Query di frase**: `"voters trust Tony Blair"`
      * **Query per campo**: `title:"data analysis"` oppure `title:data analysis`
      * **Query con wildcard**: `comp*`
  * `limit` (int, opzionale, default: 10): Il numero massimo di risultati da restituire.
  * `min_score` (float, opzionale, default: 0.0): Il punteggio minimo di rilevanza per includere un documento nei risultati.

### **B. Output**

Il metodo `search()` restituisce un dizionario con la stessa struttura dell'engine PostgreSQL:

  * `query` (str): La query originale dell'utente.
  * `processed_info` (dict): Dettagli sulla query analizzata dal `WhooshQueryProcessor`.
  * `total_results` (int): Il numero di risultati trovati.
  * `results` (list): Una lista di documenti, ognuno rappresentato da un dizionario.
      * `title` (str): Il titolo del documento.
      * `snippet` (str): Un breve estratto del testo.
      * `score` (float): Il punteggio di rilevanza calcolato da Whoosh.
      * `metadata` (dict): Metadati aggiuntivi.
  * `metrics` (dict): Metriche di performance.
      * `response_time_ms` (float): Tempo totale di risposta in millisecondi.
  * `status` (str): `success` o `error`.
  * `errors` (list): Eventuali messaggi di errore.
  * `suggestions` (list): Suggerimenti per correggere query non valide.

-----

## **4. Troubleshooting Comune**

  - **`FileNotFoundError: Indice Whoosh non trovato in...`**: Questo errore si verifica se la directory specificata in `WhooshUnifiedInterface(index_dir=...)` non esiste o è vuota. Assicurati di aver prima eseguito lo script `whoosh_indexer.py` per creare l'indice.
  - **La ricerca non restituisce risultati attesi**: Controlla lo schema in `whoosh_indexer.py`. I campi `title` e `text` utilizzano uno `StemmingAnalyzer`, che riduce le parole alla loro radice (es. "analysis" e "analyzing" diventano "analyz"). Questo influisce su come vengono abbinati i termini. Per ricerche esatte, usa le virgolette per una *phrase query*.
  - **La query viene classificata come non valida (`status: error`)**: `WhooshQueryProcessor` rileva errori di sintassi, come un operatore booleano all'inizio (`AND query...`) o frasi vuote (`""`). L'output nel campo `errors` e `suggestions` fornirà indicazioni su come correggere la query.
  - **Le performance sono lente con query wildcard**: Le query che iniziano con un asterisco (es. `*term`) sono molto dispendiose in termini di risorse perché richiedono la scansione di tutti i termini nell'indice. Ove possibile, è preferibile usare wildcard alla fine della parola (`term*`).