import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

import psycopg2
import csv
from utils.password import PASSWORD

DB_NAME = "gestione"
DB_USER = "postgres"   # Cambia se hai user diverso
DB_PASS = PASSWORD   # Inserisci la tua password
DB_HOST = "localhost"
DB_PORT = "5432"

def insert_data(csv_file="../../docs/dataset_processed.csv"):
    conn = psycopg2.connect(
        dbname=DB_NAME, user=DB_USER,
        password=DB_PASS, host=DB_HOST, port=DB_PORT
    )
    cur = conn.cursor()

    with open(csv_file, "r", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        for row in reader:
            title = row["Title"].strip()
            text = row["Text"].strip()
            label = int(row["Label"]) if row["Label"].isdigit() else None

            cur.execute(
                "INSERT INTO documents (title, content, label) VALUES (%s, %s, %s)",
                (title, text, label)
            )

    conn.commit()
    cur.close()
    conn.close()
    print("Dati inseriti correttamente.")

if __name__ == "__main__":
    insert_data()
