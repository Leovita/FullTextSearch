import csv
import re
import string
import nltk
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer

nltk.download('stopwords')

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

                title = row['Title'].strip()
                
                text = row['Text'].strip().replace("\n", " ").replace("\r", " ")
                text = text.replace('Â', '').replace('\'', '').strip()
                text = re.sub(r'\s+', ' ', text)
                text = self.preprocess_text(text)
                
                title = self.preprocess_text(title)
                documento = {
                    'title': title,
                    'text': text,
                    'category': categoria
                }
                documenti.append(documento)
        return documenti

    def preprocess_text(self, text):
        text = text.lower()
        text = text.translate(str.maketrans('', '', string.punctuation))
        words = text.split()
        stop_words = set(stopwords.words('english'))
        words = [word for word in words if word not in stop_words]
        stemmer = PorterStemmer()
        words = [stemmer.stem(word) for word in words]

        return ' '.join(words)

    def __iter__(self):
        return iter(self.documenti)
