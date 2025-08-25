# Documentazione del Motore di Ricerca PostgreSQL 

Questo documento fornisce una guida completa all'utilizzo del motore di ricerca basato su PostgreSQL, progettato per il progetto di Information Retrieval. L'engine integra funzionalità avanzate come full-text search, caching, e pre-elaborazione delle query per ottimizzare le performance e la precisione.

# Documentazione del Motore di Ricerca PostgreSQL

## Sommario
1. [Architettura del Sistema](#1-architettura-del-sistema)
2. [Come Usare l'Engine](#2-come-usare-lengine)
   - [A. Installazione e Configurazione](#a-installazione-e-configurazione)
   - [B. Inizializzazione](#b-inizializzazione)
   - [C. Esecuzione di una Ricerca](#c-esecuzione-di-una-ricerca)
   - [D. Ottenere le Statistiche](#d-ottenere-le-statistiche)
   - [E. Chiusura delle Connessioni](#e-chiusura-delle-connessioni)
3. [Input e Output Standardizzati](#input-e-output-standardizzati)
   - [A. Input](#a-input)
   - [B. Output](#b-output)
4. [Troubleshooting Comune](#4-troubleshooting-comune)


## 1\. Architettura del Sistema 

Il sistema è composto da tre moduli principali che lavorano in sinergia:

1.  `postgresql_engine.py`: Il nucleo del motore di ricerca. Gestisce la connessione al database PostgreSQL ed esegue le query di full-text search. Supporta vari tipi di ricerca (semplice, booleana, frase, per campo).
2.  `cache_system.py`: Un modulo opzionale che implementa un sistema di caching basato su LRU (Least Recently Used) con TTL (Time-To-Live). Riduce i tempi di risposta per query ripetute.
3.  `query_processor.py`: Un processore intelligente che analizza la query dell'utente, ne identifica il tipo (es. booleana, frase, semplice) e la pre-elabora. Un'ottimizzazione chiave è l'ordinamento dinamico dei termini in base alla loro frequenza, elaborando prima i termini più selettivi per migliorare la velocità.
4.  `postgresql_interface.py`: L'interfaccia unificata. Questo modulo agisce come un'API standardizzata che orchestra gli altri tre componenti. Prende in input la query dell'utente e gestisce l'intero flusso di lavoro: analisi, esecuzione (con o senza cache) e formattazione dell'output.

## 2\. Come Usare l'Engine 

L'interfaccia principale da utilizzare è la classe `PostgreSQLUnifiedInterface` all'interno del file `postgresql_interface.py`.

### A. Installazione e Configurazione

1.  Assicurati di avere un'installazione di PostgreSQL e un database chiamato `gestione` (o modifica il parametro `dbname` in `PostgreSQLUnifiedInterface.db_config`).
2.  Devi popolare il database con una tabella `documents` contenente almeno i campi `id`, `title`, `label`, `content` e un indice `tsv` per il full-text search, il codice sql necessario è situato nella cartella `/setup/` nella quale sono presenti anche le query di ottimizzazione, requisiti e modulo di riempimento del database con i dati di test.
3.  Installa i moduli Python necessari con il comando: `pip install -r ./setup/requirements.txt`.
4.  Nel file `utils/password.py`, assicurati che la variabile `PASSWORD` contenga la password del tuo utente PostgreSQL.

### B. Inizializzazione

Per creare un'istanza dell'interfaccia, importa la classe e istanziala. Puoi scegliere se abilitare o meno il caching.

```python
from postgresql_interface import PostgreSQLUnifiedInterface

# Inizializza l'interfaccia con il caching (default)
interface_with_cache = PostgreSQLUnifiedInterface(use_cache=True)

# Inizializza l'interfaccia senza il caching
interface_no_cache = PostgreSQLUnifiedInterface(use_cache=False)
```

### C. Esecuzione di una Ricerca

La funzione principale è `search()`, che accetta una query di testo e parametri opzionali.

```python
user_query = "machine learning and python"

# Esegui la ricerca con l'interfaccia che ha il caching
result = interface_with_cache.search(user_query, limit=5, min_score=0.1)

# L'output è un dizionario standardizzato
print(f"Tipo di query: {result['processed_info']['query_type']}")
print(f"Numero risultati trovati: {result['total_results']}")
print(f"Tempo di risposta: {result['metrics']['response_time_ms']:.2f} ms")

if result['results']:
    for res in result['results']:
        print(f"- Titolo: {res['title']}")
        print(f"  Snippet: {res['snippet']}")
        print(f"  Punteggio: {res['score']:.2f}")
        print(f"  È un risultato della cache? {res['metadata']['cached']}")
```

### D. Ottenere le Statistiche

Puoi accedere alle metriche di performance e alle statistiche interne del sistema con il metodo `get_stats()`.

```python
stats = interface_with_cache.get_stats()
print("Statistiche del sistema:")
print(stats)
```

L'output di `get_stats()` varierà a seconda che il caching sia abilitato o meno. Se abilitato, mostrerà metriche dettagliate come il **tasso di hit della cache** e l'**utilizzo della memoria**.

### E. Chiusura delle Connessioni

Per una corretta gestione delle risorse, è fondamentale chiudere le connessioni al database. La classe supporta il **context manager** di Python (`with`), che gestisce automaticamente la chiusura.

```python
with PostgreSQLUnifiedInterface(use_cache=True) as engine:
    engine.search("document clustering")
    # Altre operazioni...
# La connessione si chiude automaticamente qui, anche in caso di errore
```

# Input e Output Standardizzati 

Per facilitare l'integrazione nel tuo progetto di benchmark, l'API segue una struttura standardizzata.

### A. Input

Il metodo `search()` accetta i seguenti parametri:

  - `user_query` (str): La stringa di ricerca. L'interfaccia è in grado di riconoscere automaticamente **query semplici**, **query booleane** (`AND`, `OR`, `NOT`) e **query di frase** (`"frase esatta"`).
  - `limit` (int, opzionale, default: 10): Il numero massimo di risultati da restituire.
  - `min_score` (float, opzionale, default: 0.0): Il punteggio minimo di rilevanza del full-text search.

### B. Output

Il metodo `search()` restituisce sempre un dizionario con la seguente struttura:

  - `query` (str): La query originale dell'utente.
  - `processed_info` (dict): Dettagli sulla query analizzata dal `QueryProcessor`, inclusi il tipo (`simple`, `boolean`, `phrase`), i componenti estratti e la validazione.
  - `total_results` (int): Il numero di risultati trovati.
  - `results` (list): Una lista di dizionari, dove ogni dizionario rappresenta un documento.
      - `id` (int): L'ID del documento.
      - `title` (str): Il titolo del documento.
      - `snippet` (str): Un breve estratto del contenuto che mostra dove sono stati trovati i termini di ricerca.
      - `score` (float): Il punteggio di rilevanza assegnato da PostgreSQL.
      - `metadata` (dict): Metadati aggiuntivi come il tempo di ricerca e se il risultato proviene dalla cache.
  - `metrics` (dict): Metriche di performance a livello di API.
      - `response_time_ms` (float): Tempo totale di risposta in millisecondi.
  - `status` (str): `success` o `error`.
  - `errors` (list): Una lista di stringhe di errore in caso di fallimento.
  - `suggestions` (list): Suggerimenti per l'utente in caso di query non valide.

## 4\. Troubleshooting Comune 
  - **Query non valida, restituisce un errore (`status: error`)**: Controlla la sezione `errors` nell'output. `QueryProcessor` rileva problemi comuni come operatori booleani all'inizio della query (`AND ...`) o sintassi errata. Segui i suggerimenti (`suggestions`) per correggere la query.
  - **Le ricerche con cache non sembrano più veloci**: Le performance migliorano significativamente solo sulla seconda esecuzione di una **stessa identica query**. Assicurati di non modificare nemmeno un carattere tra una ricerca e l'altra. I benefici della cache sono più evidenti con un volume elevato di query ripetute.