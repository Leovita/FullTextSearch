-- ===============================================
-- CONFIGURAZIONE OTTIMIZZAZIONE POSTGRESQL
-- Per Information Retrieval con Full-Text Search
-- ===============================================

-- ===== CONFIGURAZIONE PARAMETRI DATABASE =====
-- Modifica postgresql.conf per ottimizzare le performance

-- 1. MEMORIA E BUFFER
-- Aumenta shared_buffers (25% della RAM disponibile)
-- shared_buffers = 256MB        -- Per sistemi con 1GB RAM
-- shared_buffers = 512MB        -- Per sistemi con 2GB RAM
-- shared_buffers = 1GB          -- Per sistemi con 4GB+ RAM

-- 2. WORK MEMORY
-- Aumenta work_mem per operazioni di sorting e hashing
-- work_mem = 16MB               -- Default: 4MB
-- maintenance_work_mem = 128MB  -- Per operazioni di manutenzione

-- 3. CHECKPOINT E WAL
-- effective_cache_size = 1GB    -- 75% della RAM totale
-- checkpoint_completion_target = 0.9
-- wal_buffers = 16MB

-- 4. QUERY PLANNER
-- random_page_cost = 1.1        -- Per SSD (default: 4.0 per HDD)
-- effective_io_concurrency = 200 -- Per SSD

-- ===== SETUP DATABASE E TABELLA =====

-- Assicurati che la tabella documents esista
CREATE TABLE IF NOT EXISTS documents (
    id INTEGER PRIMARY KEY,
    title TEXT NOT NULL,
    label TEXT NOT NULL,
    content TEXT NOT NULL,
    tsv TSVECTOR
);

-- ===== OTTIMIZZAZIONE INDICI =====

-- 1. Indice GIN per full-text search (FONDAMENTALE)
DROP INDEX IF EXISTS idx_documents_tsv;
CREATE INDEX idx_documents_tsv ON documents USING GIN(tsv);

-- 2. Indice per il campo label (per filtering)
DROP INDEX IF EXISTS idx_documents_label;
CREATE INDEX idx_documents_label ON documents(label);

-- 3. Indice composto per query filtrate
DROP INDEX IF EXISTS idx_documents_label_id;
CREATE INDEX idx_documents_label_id ON documents(label, id);

-- 4. Indice per il campo title se usato spesso
DROP INDEX IF EXISTS idx_documents_title;
CREATE INDEX idx_documents_title ON documents USING GIN(to_tsvector('english', title));

-- 5. Indice parziale per documenti "attivi" (se applicabile)
-- CREATE INDEX idx_documents_active ON documents(id) WHERE label IN (0, 1, 2);

-- ===== TRIGGER PER AGGIORNAMENTO AUTOMATICO TSV =====

-- Funzione per aggiornare tsvector automaticamente
CREATE OR REPLACE FUNCTION update_tsv_trigger() RETURNS trigger AS $$
BEGIN
    NEW.tsv := setweight(to_tsvector('english', coalesce(NEW.title, '')), 'A') ||
               setweight(to_tsvector('english', coalesce(NEW.content, '')), 'B');
    RETURN NEW;
END
$$ LANGUAGE plpgsql;

-- Trigger per INSERT e UPDATE
DROP TRIGGER IF EXISTS tsvector_update ON documents;
CREATE TRIGGER tsvector_update BEFORE INSERT OR UPDATE
    ON documents FOR EACH ROW EXECUTE FUNCTION update_tsv_trigger();

-- ===== FUNZIONI OTTIMIZZATE PER RICERCA =====

-- Funzione per ricerca full-text ottimizzata
CREATE OR REPLACE FUNCTION search_documents(
    search_query TEXT,
    search_limit INTEGER DEFAULT 10,
    min_rank REAL DEFAULT 0.0
)
RETURNS TABLE(
    id INTEGER,
    title TEXT,
    label INTEGER,
    content TEXT,
    rank REAL,
    snippet TEXT
) AS $$
DECLARE
    ts_query TSQUERY;
BEGIN
    -- Converti la query in tsquery
    ts_query := plainto_tsquery('english', search_query);
    
    -- Se la query è vuota, ritorna risultati vuoti
    IF ts_query IS NULL THEN
        RETURN;
    END IF;
    
    -- Esegui la ricerca ottimizzata
    RETURN QUERY
    SELECT 
        d.id,
        d.title,
        d.label,
        CASE 
            WHEN length(d.content) > 500 THEN substring(d.content, 1, 500) || '...'
            ELSE d.content 
        END as content,
        ts_rank(d.tsv, ts_query)::REAL as rank,
        ts_headline('english', d.content, ts_query, 
                   'MaxWords=30, MinWords=10, MaxFragments=2') as snippet
    FROM documents d
    WHERE d.tsv @@ ts_query
    AND ts_rank(d.tsv, ts_query) >= min_rank
    ORDER BY rank DESC, d.id
    LIMIT search_limit;
END;
$$ LANGUAGE plpgsql;

-- Funzione per ricerca booleana ottimizzata
CREATE OR REPLACE FUNCTION boolean_search_documents(
    search_query TEXT,
    search_limit INTEGER DEFAULT 10
)
RETURNS TABLE(
    id INTEGER,
    title TEXT,
    label INTEGER,
    content TEXT,
    rank REAL,
    snippet TEXT
) AS $$
DECLARE
    ts_query TSQUERY;
BEGIN
    -- Converti la query booleana in tsquery
    BEGIN
        ts_query := to_tsquery('english', search_query);
    EXCEPTION WHEN OTHERS THEN
        -- Se la query non è valida, usa plainto_tsquery
        ts_query := plainto_tsquery('english', search_query);
    END;
    
    IF ts_query IS NULL THEN
        RETURN;
    END IF;
    
    RETURN QUERY
    SELECT 
        d.id,
        d.title,
        d.label,
        CASE 
            WHEN length(d.content) > 500 THEN substring(d.content, 1, 500) || '...'
            ELSE d.content 
        END as content,
        ts_rank(d.tsv, ts_query)::REAL as rank,
        ts_headline('english', d.content, ts_query, 
                   'MaxWords=30, MinWords=10') as snippet
    FROM documents d
    WHERE d.tsv @@ ts_query
    ORDER BY rank DESC, d.id
    LIMIT search_limit;
END;
$$ LANGUAGE plpgsql;

-- ===== VISTE OTTIMIZZATE =====

-- Vista per statistiche rapide
CREATE OR REPLACE VIEW document_stats AS
SELECT 
    label,
    COUNT(*) as document_count,
    AVG(length(content)) as avg_content_length,
    MAX(length(content)) as max_content_length,
    MIN(length(content)) as min_content_length
FROM documents
GROUP BY label;

-- Vista per documenti con ranking pre-calcolato per query comuni
CREATE OR REPLACE VIEW popular_documents AS
SELECT 
    id,
    title,
    label,
    content,
    tsv,
    length(content) as content_length,
    (length(title) + length(content)) as total_length
FROM documents
WHERE length(content) > 100  -- Solo documenti significativi
ORDER BY total_length DESC;

-- ===== STORED PROCEDURE PER MANUTENZIONE =====

-- Procedura per aggiornare statistiche
CREATE OR REPLACE FUNCTION update_table_statistics()
RETURNS VOID AS $$
BEGIN
    ANALYZE documents;
    
    -- Aggiorna statistiche estese per ottimizzare il query planner
    SELECT pg_stat_reset();
    
    RAISE NOTICE 'Statistiche tabelle aggiornate';
END;
$$ LANGUAGE plpgsql;

-- Procedura per ricostruire indici
CREATE OR REPLACE FUNCTION rebuild_search_indexes()
RETURNS VOID AS $$
BEGIN
    -- Ricostruisce l'indice GIN principale
    REINDEX INDEX idx_documents_tsv;
    REINDEX INDEX idx_documents_label;
    
    RAISE NOTICE 'Indici ricostruiti';
END;
$$ LANGUAGE plpgsql;

-- ===== QUERY OTTIMIZZATE DI ESEMPIO =====

-- Query 1: Ricerca semplice con ranking
/*
SELECT id, title, ts_rank(tsv, plainto_tsquery('english', 'election')) as rank
FROM documents 
WHERE tsv @@ plainto_tsquery('english', 'election')
ORDER BY rank DESC 
LIMIT 10;
*/

-- Query 2: Ricerca con filtro per categoria
/*
SELECT id, title, label
FROM documents 
WHERE tsv @@ plainto_tsquery('english', 'economy')
AND label = 0
ORDER BY ts_rank(tsv, plainto_tsquery('english', 'economy')) DESC 
LIMIT 10;
*/

-- Query 3: Ricerca frase esatta
/*
SELECT id, title, 
       ts_headline('english', content, phraseto_tsquery('english', 'machine learning')) as snippet
FROM documents 
WHERE tsv @@ phraseto_tsquery('english', 'machine learning')
ORDER BY ts_rank(tsv, phraseto_tsquery('english', 'machine learning')) DESC;
*/

-- ===== CONFIGURAZIONE MEMORY E PERFORMANCE =====

-- Imposta parametri di sessione per ottimizzazioni
SET work_mem = '32MB';
SET maintenance_work_mem = '128MB';
SET temp_buffers = '32MB';

-- ===== GRANT PERMISSIONS =====
GRANT SELECT, INSERT, UPDATE, DELETE ON documents TO postgres;
GRANT USAGE, SELECT ON SEQUENCE documents_id_seq TO postgres;

-- ===== SCRIPT DI VERIFICA =====

-- Verifica esistenza indici
SELECT 
    indexname, 
    indexdef 
FROM pg_indexes 
WHERE tablename = 'documents';

-- Verifica dimensioni tabella e indici
SELECT 
    pg_size_pretty(pg_total_relation_size('documents')) as table_size,
    pg_size_pretty(pg_relation_size('idx_documents_tsv')) as gin_index_size;

-- Test performance indice GIN
EXPLAIN (ANALYZE, BUFFERS) 
SELECT * FROM documents 
WHERE tsv @@ plainto_tsquery('english', 'test') 
LIMIT 10;

-- ===== NOTE E RACCOMANDAZIONI =====
/*
RACCOMANDAZIONI PER OTTIMIZZAZIONE:

1. CONFIGURAZIONE POSTGRESQL.CONF:
   - Aumenta shared_buffers al 25% della RAM
   - Imposta work_mem = 16-32MB
   - effective_cache_size = 75% della RAM
   - random_page_cost = 1.1 per SSD

2. MONITORAGGIO:
   - Usa pg_stat_statements per monitorare query lente
   - Controlla cache hit ratio > 95%
   - Monitora I/O wait times

3. MANUTENZIONE:
   - Esegui VACUUM ANALYZE regolarmente
   - Ricostruisci indici GIN se necessario
   - Aggiorna statistiche dopo inserimenti massivi

4. QUERY OPTIMIZATION:
   - Usa EXPLAIN ANALYZE per analizzare piani
   - Limita risultati con LIMIT appropriati
   - Usa filtri su label per ridurre spazio di ricerca

5. SCALABILITÀ:
   - Considera partizionamento per dataset > 1M documenti
   - Implementa connection pooling
   - Usa prepared statements per query frequenti
*/