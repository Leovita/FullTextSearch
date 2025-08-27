# Documentazione del Motore di Ricerca PyLucene

Questo documento fornisce una guida completa all'utilizzo del motore di ricerca basato su PyLucene, progettato per il progetto di Gestione dell'informazione. L'engine integra funzionalità come full-text search, indicizzazione automatica e due sistemi di ranking le cui performance verrano
analizzate e comparate utilizzando dei benchmark.

## Sommario
1. [Architettura del Sistema](#1-architettura-del-sistema)
2. [Come Usare l'Engine](#2-come-usare-lengine)
   - [A. Configurazione](#a-configurazione)
   - [B. Inizializzazione](#b-inizializzazione)
   - [C. Esecuzione di una Ricerca](#c-esecuzione-di-una-ricerca)
   - [D. Cambio Ranking Dinamico](#d-cambio-ranking-dinamico)
   - [E. Benchmark e Confronto](#e-benchmark-e-confronto)
3. [Input e Output Standardizzati](#3-input-e-output-standardizzati)
   - [A. Input](#a-input)
   - [B. Output](#b-output)
4. [Sistemi di Ranking](#4-sistemi-di-ranking)
5. [Troubleshooting Comune](#5-troubleshooting-comune)

## 1. Architettura del Sistema

Il sistema è composto da tre moduli principali che lavorano in sinergia:

1. **`PyLuceneSearchEngine.py`**: Il nucleo del motore di ricerca. Gestisce l'indicizzazione automatica da file CSV ed esegue le query di full-text search. Supporta vari tipi di ricerca (semplice, booleana, frase, per campo) e gestisce la connessione all'indice Lucene.
2. **`PyLuceneUnifiedInterface.py`**: L'interfaccia unificata che orchestra il motore di ricerca. Gestisce il cambio dinamico tra i due sistemi di ranking (BM25 e Classic) e fornisce un'API standardizzata per l'esecuzione di ricerche e benchmark.
3. **`CSVReader.py`**: Modulo per la lettura e parsing automatico dei file CSV, convertendo i dati in documenti Lucene con campi strutturati (title, content, category).

## 2. Come Usare l'Engine

L'interfaccia principale da utilizzare è la classe `PyLuceneUnifiedInterface` all'interno del file `PyLuceneUnifiedInterface.py`.

### A. Configurazione

1. Assicurati che PyLucene sia installato e funzionante nel sistema
2. Prepara un file CSV con i dati da indicizzare (campi: title, content, category)
3. L'engine creerà automaticamente la directory dell'indice se non esiste

### B. Inizializzazione

Per creare un'istanza dell'interfaccia, importa la classe e istanziala specificando il file CSV e il ranking iniziale:

```python
from PyLuceneUnifiedInterface import PyLuceneUnifiedInterface

# Inizializza con ranking BM25 (default)
interface_bm25 = PyLuceneUnifiedInterface("dataset.csv", "indexdir", "bm25")

# Inizializza con ranking Classic (TF-IDF)
interface_classic = PyLuceneUnifiedInterface("dataset.csv", "indexdir", "classic")
```

### C. Esecuzione di una Ricerca

La funzione principale è `search()`, che accetta una query di testo e parametri opzionali:

```python
user_query = "machine learning and python"

# Esegui la ricerca
result = interface_bm25.search(user_query, limit=5)

# L'output è un dizionario standardizzato
print(f"Numero risultati: {result['total_results']}")
print(f"Tempo di risposta: {result['response_time_ms']:.2f} ms")

if result['results']:
    for res in result['results']:
        print(f"- Titolo: {res['title']}")
        print(f"  Snippet: {res['snippet']}")
        print(f"  Punteggio: {res['score']:.2f}")
        print(f"  Categoria: {res['category']}")
```

### D. Cambio Ranking Dinamico

Una caratteristica unica è la possibilità di cambiare il sistema di ranking durante l'esecuzione:

```python
# Cambia da BM25 a Classic
interface.similarity = "classic"
interface._init_searcher()  # Reinizializza il searcher

# Esegui ricerca con Classic
result_classic = interface.search("query", limit=5)

# Ripristina BM25
interface.similarity = "bm25"
interface._init_searcher()
```

### E. Benchmark e Confronto

L'engine include funzionalità integrate per benchmark automatici:

```python
# Carica query di test da file JSON
query_list = interface._load_queries_from_file("benchmark_queries_config.json")

# Esegui benchmark confrontando BM25 vs Classic
# (funzionalità integrata nel main)
```

## 3. Input e Output Standardizzati

### A. Input

Il metodo `search()` accetta i seguenti parametri:
- `query_text` (str): La stringa di ricerca. Supporta query semplici, booleane (`AND`, `OR`, `NOT`) e frasi esatte (`"frase"`)
- `limit` (int, opzionale, default: 10): Numero massimo di risultati

### B. Output

Il metodo `search()` restituisce un dizionario con:
- `query` (str): Query originale
- `total_results` (int): Numero risultati trovati
- `results` (list): Lista di documenti con id, title, snippet, score, category
- `response_time_ms` (float): Tempo di risposta in millisecondi
- `status` (str): Successo o errore

## 4. Sistemi di Ranking

### BM25 (Best Matching 25)
- **Algoritmo**: Basato su probabilità e frequenza dei termini
- **Caratteristiche**: 
  - Considera la lunghezza del documento (normalizzazione)
  - Punteggi più alti per documenti più rilevanti
  - Ottimizzato per collezioni di documenti di lunghezza variabile
- **Vantaggi**: Più preciso per documenti lunghi, ranking più discriminante
- **Svantaggi**: Può essere più lento per query complesse

### Classic (TF-IDF)
- **Algoritmo**: Term Frequency - Inverse Document Frequency
- **Caratteristiche**:
  - Calcolo diretto basato su frequenza dei termini
  - Punteggi generalmente più bassi
  - Ranking più uniforme
- **Vantaggi**: Più veloce, stabile, buono per documenti di lunghezza simile
- **Svantaggi**: Meno preciso per documenti di lunghezza variabile

### Confronto Performance
- **Velocità**: Classic è generalmente più veloce (2-3x)
- **Precisione**: BM25 fornisce ranking più accurato
- **Punteggi**: BM25 produce punteggi più alti e discriminanti
- **Stabilità**: Classic più stabile per query complesse

## 5. Troubleshooting Comune

- **Errore "VM not initialized"**: L'engine gestisce automaticamente l'inizializzazione della JVM Lucene
- **Indice non trovato**: L'engine ricrea automaticamente l'indice dal CSV se necessario
- **Query non valide**: L'engine gestisce automaticamente la sintassi Lucene e restituisce errori chiari
- **Performance lente**: Classic è più veloce per query semplici, BM25 per query complesse
- **Memoria insufficiente**: L'engine gestisce automaticamente la connessione all'indice

## Utilizzo Avanzato

### Benchmark Automatico
```bash
cd full-text-search
python __main__.py  # Esegue benchmark completo BM25 vs Classic
```

### Generazione Grafici
Il sistema genera automaticamente grafici di confronto performance e analisi dei risultati.

### Export Risultati
Tutti i risultati vengono esportati in formato JSON per analisi successive. 