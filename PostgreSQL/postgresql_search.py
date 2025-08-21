import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

import psycopg2
from utils.password import PASSWORD

DB_NAME = "gestione"
DB_USER = "postgres"   # Cambia se necessario
DB_PASS = PASSWORD
DB_HOST = "localhost"
DB_PORT = "5432"

class PostgresSearch:
    def __init__(self):
        self.conn = psycopg2.connect(
            dbname=DB_NAME, user=DB_USER,
            password=DB_PASS, host=DB_HOST, port=DB_PORT
        )
        self.cur = self.conn.cursor()

    def search(self, query, limit=10):
        """
        Esegue una ricerca full-text su title + content
        Restituisce: lista di tuple (id, title, score)
        """
        sql = """
        SELECT id, title, label,
               ts_rank(tsv, plainto_tsquery('english', %s)) AS score
        FROM documents
        WHERE tsv @@ plainto_tsquery('english', %s)
        ORDER BY score DESC
        LIMIT %s;
        """
        self.cur.execute(sql, (query, query, limit))
        return self.cur.fetchall()

    def close(self):
        self.cur.close()
        self.conn.close()
