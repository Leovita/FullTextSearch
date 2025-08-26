from typing import Optional
import pandas as pd
import os
import kagglehub
from kagglehub import KaggleDatasetAdapter

def download_dataset(file_path: Optional[str] = "data/dataset.csv"):
    """
    Scarica il dataset da una fonte esterna e lo salva in un file CSV.
    """
    os.makedirs(os.path.dirname(file_path), exist_ok=True)

    # Scarica il dataset (il file rimane in cache di kagglehub)
    local_path = kagglehub.dataset_download(
        "tanishqdublish/text-classification-documentation"
    )

    # Costruisci il path al file
    csv_path = f"{local_path}/df_file.csv"

    # Leggi con encoding robusto
    df = pd.read_csv(csv_path, encoding="latin1")  # oppure encoding="cp1252"

    # Salva in utf-8 per usi futuri
    df.to_csv(file_path, index=False, encoding="utf-8")

    print("Primi 5 record:", df.head())
    print("Download effettuato con successo!")


if __name__ == "__main__":

    # Sostituisci con i tuoi percorsi di file
    input_file = "data/dataset_raw.csv" 
    output_file = "data/dataset.csv"  

    try:
        print("Inizio il download del dataset...")
        download_dataset(input_file)

    except Exception as e:
        print(f"Errore durante il download: {str(e)}")