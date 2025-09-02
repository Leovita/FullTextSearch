import pandas as pd

def split_csv_text(input_file, output_file):
    """
    Legge un file CSV con colonne 'Text' e 'Label' e lo suddivide in 'titolo', 'testo', 'label'
    mantenendo la formattazione originale del testo.
    
    Args:
        input_file (str): Percorso del file CSV di input
        output_file (str): Percorso del file CSV di output
    """
    
    # Leggi il file CSV
    df = pd.read_csv(input_file)
    
    # Verifica che le colonne necessarie esistano
    if 'Text' not in df.columns or 'Label' not in df.columns:
        raise ValueError("Il file CSV deve contenere le colonne 'Text' e 'Label'")
    
    # Liste per i nuovi dati
    indici = []
    titoli = []
    testi = []
    labels = []
    
    for index, row in df.iterrows():
        text = row['Text']
        label = row['Label']
        
        # Dividi il testo in righe mantenendo le righe vuote
        lines = text.splitlines()
        
        # Trova la prima riga non vuota come titolo
        titolo = ""
        resto_testo = ""
        start_text_index = 0
        
        for i, line in enumerate(lines):
            if line.strip() and not titolo:
                titolo = line.strip()
                start_text_index = i + 1
                break
        
        # Il resto del testo mantiene la formattazione originale
        resto_testo = '\n'.join(lines[start_text_index:])
        
        indici.append(index)
        titoli.append(titolo)
        testi.append(resto_testo)
        labels.append(label)
    
    # Crea un nuovo DataFrame
    new_df = pd.DataFrame({
        'ID': indici,
        'Title': titoli,
        'Text': testi,
        'Label': labels
    })
    
    # Salva nel file di output
    new_df.to_csv(output_file, index=False, encoding='utf-8')
    
    print(f"File processato con successo!")
    print(f"Righe processate: {len(new_df)}")
    print(f"File salvato come: {output_file}")
    
    return new_df

def preview_data(df, num_rows=2):
    """
    Mostra un'anteprima dei dati processati
    
    Args:
        df: DataFrame con i dati processati
        num_rows: Numero di righe da mostrare
    """
    print("\n" + "="*50)
    print("ANTEPRIMA DEI DATI PROCESSATI:")
    print("="*50)
    
    for i in range(min(num_rows, len(df))):
        print(f"\n--- RECORD {i+1} ---")
        print(f"ID: {df.iloc[i]['ID']}")
        print(f"TITOLO: {df.iloc[i]['Title']}")
        print(f"LABEL: {df.iloc[i]['Label']}")
        print(f"TESTO (primi 200 caratteri): {df.iloc[i]['Text'][:200]}...")
        print("-" * 30)


if __name__ == "__main__":

    # Sostituisci con i tuoi percorsi di file
    input_file = "data/dataset_raw.csv" 
    output_file = "data/dataset.csv"  

    try:
        print("Inizio la pulizia del dataset...")

        # Processa il file
        processed_df = split_csv_text(input_file, output_file)
        
        # Mostra un'anteprima
        preview_data(processed_df)
        
    except FileNotFoundError:
        print(f"Errore: Il file '{input_file}' non è stato trovato.")
        print("Assicurati che il percorso del file sia corretto.")
    except Exception as e:
        print(f"Errore durante il processing: {str(e)}")