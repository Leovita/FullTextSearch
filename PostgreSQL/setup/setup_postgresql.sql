-- Creazione database
CREATE DATABASE gestione
    WITH ENCODING 'UTF8'
    LC_COLLATE='en_US.utf8'
    LC_CTYPE='en_US.utf8'
    TEMPLATE template0;

\c gestione;

-- Estensioni necessarie per full-text search
CREATE EXTENSION IF NOT EXISTS pg_trgm;
CREATE EXTENSION IF NOT EXISTS unaccent;

-- Creazione tabella documenti
DROP TABLE IF EXISTS documents CASCADE;
CREATE TABLE documents (
    id INTEGER PRIMARY KEY,
    title TEXT NOT NULL,
    label TEXT NOT NULL,
    body TEXT NOT NULL,
    category VARCHAR(50),
    tsv tsvector
);

-- Trigger per aggiornare il campo tsvector automaticamente
CREATE OR REPLACE FUNCTION documents_tsvector_update() RETURNS trigger AS $$
BEGIN
  NEW.tsv :=
    setweight(to_tsvector('english', coalesce(NEW.title, '')), 'A') ||
    setweight(to_tsvector('english', coalesce(NEW.body, '')), 'B');
  RETURN NEW;
END
$$ LANGUAGE plpgsql;

CREATE TRIGGER tsvectorupdate BEFORE INSERT OR UPDATE
    ON documents FOR EACH ROW EXECUTE FUNCTION documents_tsvector_update();

-- Indice GIN per velocizzare le ricerche full-text
CREATE INDEX idx_documents_tsv ON documents USING GIN(tsv);
