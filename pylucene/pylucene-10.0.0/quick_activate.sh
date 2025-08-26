#!/bin/bash

PYLUCENE_DIR="/Users/leovita/uni/unidev/GestioneInfo/FullTextSearch/pylucene/pylucene-10.0.0"

cd "$PYLUCENE_DIR"

if [ ! -d "venv" ]; then
    echo "Virtual environment non trovato, creazione in corso..."
    python3 -m venv venv
    echo "Virtual environment creato"
fi

echo "Attivazione virtual environment..."
source venv/bin/activate

if [ -z "$VIRTUAL_ENV" ]; then
    echo "Errore nell'attivazione del virtual environment"
    exit 1
fi

if python -c "import lucene; print('PyLucene installato e funzionante!')" 2>/dev/null; then
    echo " PyLucene funziona correttamente!"
else
    echo "PyLucene non installato o non funzionante"
    echo "Per installare PyLucene, esegui:"
    echo "   make setup"
    echo "   oppure"
    echo "   python setup_pylucene.py"
fi

echo ""
echo "🎉 Ambiente PyLucene attivato!"
echo ""
echo "📋 Comandi utili:"
echo "   - Test rapido: python -c \"import lucene; print('PyLucene OK')\""
echo "   - Benchmark: cd full-text-search && python __main__.py"
echo "   - Stato: make status"
echo "   - Setup: make setup"
echo ""
echo "Directory: $(pwd)"
echo "Python: $(which python)"
echo "PyLucene: $(python -c 'import lucene; print(lucene.__file__)' 2>/dev/null || echo 'Non installato')"
echo ""
echo "Per usare PyLucene in un nuovo terminale:"
echo "   source $PYLUCENE_DIR/quick_activate.sh" 
