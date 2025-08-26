
# Makefile per PyLucene
# Comandi utili per la gestione dell'ambiente

.PHONY: help setup install test benchmark clean status

# Variabili
PYTHON = python3
VENV = venv
PYLUCENE_DIR = full-text-search

help:
	@echo "🚀 Makefile PyLucene - Comandi disponibili:"
	@echo ""
	@echo "📦 Setup e installazione:"
	@echo "   make setup      - Setup completo dell'ambiente"
	@echo "   make install    - Installa PyLucene"
	@echo "   make venv       - Crea virtual environment"
	@echo ""
	@echo "🧪 Test e benchmark:"
	@echo "   make test       - Test rapido PyLucene"
	@echo "   make benchmark  - Esegue benchmark completo"
	@echo ""
	@echo "🧹 Manutenzione:"
	@echo "   make clean      - Pulisce l'ambiente"
	@echo "   make status     - Mostra stato installazione"
	@echo "   make help       - Mostra questo aiuto"

setup: venv install test
	@echo "✅ Setup completato!"

venv:
	@echo "📦 Creazione virtual environment..."
	$(PYTHON) -m venv $(VENV)
	@echo "✅ Virtual environment creato"

install: venv
	@echo "📥 Installazione PyLucene..."
	@source $(VENV)/bin/activate && \
	if [ -f "dist/lucene-10.0.0-cp313-cp313-macosx_15_0_arm64.whl" ]; then \
		echo "✅ Trovato wheel precompilato"; \
		pip install dist/lucene-10.0.0-cp313-cp313-macosx_15_0_arm64.whl; \
	else \
		echo "⚠️  Compilazione da sorgente"; \
		make compile; \
	fi

compile:
	@echo "🔨 Compilazione PyLucene da sorgente..."
	@source $(VENV)/bin/activate && \
	make && make install

test:
	@echo "🧪 Test PyLucene..."
	@source $(VENV)/bin/activate && \
	python -c "import lucene; lucene.initVM(); print('✅ PyLucene funziona!')"

benchmark: test
	@echo "🏃 Esecuzione benchmark PyLucene..."
	@source $(VENV)/bin/activate && \
	cd $(PYLUCENE_DIR) && \
	python __main__.py

status:
	@echo "📊 Stato installazione PyLucene:"
	@echo "  Directory: $(shell pwd)"
	@echo "  Virtual env: $(shell if [ -d $(VENV) ]; then echo '✅ Presente'; else echo '❌ Assente'; fi)"
	@if [ -d $(VENV) ]; then \
		source $(VENV)/bin/activate && \
		echo "  PyLucene: $$(python -c 'import lucene; print(\"✅ Installato\")' 2>/dev/null || echo '❌ Non installato')"; \
	else \
		echo "  PyLucene: ❌ Virtual env non attivo"; \
	fi

clean:
	@echo "🧹 Pulizia ambiente..."
	rm -rf $(VENV)
	rm -rf indexdir_*
	@echo "✅ Pulizia completata"

# Comandi legacy per compatibilità
all: setup
compile-old:
	@echo "🔨 Compilazione legacy..."
	@source $(VENV)/bin/activate && \
	$(PYTHON) setup.py build_ext --inplace

install-old: compile-old
	@echo "📥 Installazione legacy..."
	@source $(VENV)/bin/activate && \
	$(PYTHON) setup.py install
