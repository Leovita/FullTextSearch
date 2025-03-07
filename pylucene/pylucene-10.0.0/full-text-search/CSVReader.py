import csv, re

class CSVReader:
    def __init__(self, file_path):
        self.categorie = {
            0: 'Politics',
            1: 'Sport',
            2: 'Technology',
            3: 'Entertainment',
            4: 'Business'
        }
        self.file_path = file_path
        self.documenti = self.leggi_csv()  

    def leggi_csv(self):
        documenti = []
        with open(self.file_path, newline='', encoding='utf-8-sig') as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                try:
                    label = int(row['Label'].strip())
                    categoria = self.categorie[label]
                except ValueError:
                    print(f"Errore nel valore di Label: {row['Label']} in riga {row}")
                    continue
                except KeyError:
                    print(f"Indice di categoria non trovato per Label: {label} in riga {row}")
                    continue

                # Dataset cleaning
                t = row['Text'].strip().replace("\n", " ").replace("\r", " ")
                t = t.replace('Â', '').replace('\'', '').strip()
                t = re.sub(r'\s+', ' ', t)

                documento = {
                    'text': t,
                    'category': categoria
                }
                documenti.append(documento)
        return documenti

    # Rendiamo iterabile zeb senno piange
    def __iter__(self):
        return iter(self.documenti)
