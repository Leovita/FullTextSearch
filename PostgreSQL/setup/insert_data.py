try:
    import psycopg2
    PSYCOPG2_AVAILABLE = True
except ImportError:
    print("⚠️  psycopg2 non disponibile, alcune funzionalità PostgreSQL saranno limitate")
    PSYCOPG2_AVAILABLE = False

import csv, os, sys

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PARENT_DIR = os.path.dirname(BASE_DIR)

if PARENT_DIR not in sys.path:
    sys.path.insert(0, PARENT_DIR)


from utils.password import PASSWORD

DB_NAME = "gestione"
DB_USER = "postgres"   # Cambia se hai user diverso
DB_PASS = PASSWORD   # Inserisci la tua password
DB_HOST = "localhost"
DB_PORT = "5432"

def insert_data(csv_file="../../data/dataset.csv"):
    conn = psycopg2.connect(
        dbname=DB_NAME, user=DB_USER,
        password=DB_PASS, host=DB_HOST, port=DB_PORT
    )
    cur = conn.cursor()

    with open(csv_file, "r", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        for row in reader:
            id = row["ID"].strip()
            title = row["Title"].strip()
            text = row["Text"].strip()
            label = int(row["Label"]) if row["Label"].isdigit() else None

            cur.execute(
                "INSERT INTO documents (id, title, body, label) VALUES (%s, %s, %s, %s)",
                (id, title, text, label)
            )

    conn.commit()
    cur.close()
    conn.close()
    print("Dati inseriti correttamente.")

if __name__ == "__main__":
    insert_data()
