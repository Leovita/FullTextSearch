# export_results.py
import json
import os
from typing import Any, Dict, List, Union


def export_to_json(
    results: Union[List[Dict[str, Any]], Dict[str, Any]],
    output_path: str = "export.json",
    indent: int = 4
) -> str:
    """
    Esporta i dati di ricerca (results e stats) in un file JSON.

    Args:
        results (Union[List[Dict[str, Any]], Dict[str, Any]]): Risultati della ricerca
        output_path (str, optional): Percorso del file JSON di output. Default: "export.json"
        indent (int, optional): Indentazione per leggibilità. Default: 4

    Returns:
        str: Percorso del file JSON generato
    """
    export_data = {
        "data": results
    }

    try:
        os.makedirs(os.path.dirname(output_path), exist_ok=True) if os.path.dirname(output_path) else None

        if os.path.exists(output_path):
            print(f"Il file {output_path} esiste già. I nuovi dati verranno aggiunti.")
            with open(output_path, "r", encoding="utf-8") as f:
                try:
                    existing_data = json.load(f)
                    if not isinstance(existing_data, list):
                        # Se il file non è una lista, lo trasformo in lista
                        existing_data = [existing_data]
                    print(f"Caricati {len(existing_data)} record esistenti.")
                except json.JSONDecodeError:
                    # File vuoto o corrotto → inizio da zero
                    print("File esistente vuoto o corrotto. Inizio da zero.")
                    existing_data = []
        else:
            print("File non trovato. Inizio da zero.")
            existing_data = []

        existing_data.append(export_data)

        with open(output_path, "w", encoding="utf-8") as f:
            json.dump(existing_data, f, ensure_ascii=False, indent=indent, default=str)

        return output_path
    except Exception as e:
        raise RuntimeError(f"Errore durante l'esportazione dei dati: {e}")
