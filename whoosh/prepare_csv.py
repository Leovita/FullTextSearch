import csv

def read_csv(file_path):
    documenti = []
    categorie = {0: 'politica', 1: 'sport', 2: 'technology'}  
    with open(file_path, newline='', encoding='utf-8') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            documento = {
                'text': row['Text'], 
                'category': categorie[int(row['Indice'])] 
            }
            documenti.append(documento)
    return documenti


