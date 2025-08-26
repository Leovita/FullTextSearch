#!/usr/bin/env python3
"""
Script di setup automatico per PyLucene.
Esegui questo script per configurare l'ambiente PyLucene.
"""

import os
import sys
import subprocess
import platform
from pathlib import Path

def run_command(command, description):
    """Esegue un comando e gestisce gli errori."""
    print(f"🔧 {description}...")
    try:
        result = subprocess.run(command, shell=True, check=True, capture_output=True, text=True)
        print(f"✅ {description} completato")
        return result.stdout
    except subprocess.CalledProcessError as e:
        print(f"❌ Errore in {description}: {e}")
        print(f"   Output: {e.stdout}")
        print(f"   Errori: {e.stderr}")
        return None

def check_python_version():
    """Controlla la versione di Python."""
    version = sys.version_info
    print(f"🐍 Python {version.major}.{version.minor}.{version.micro}")
    
    if version.major != 3 or version.minor < 8:
        print("⚠️  Versione Python non supportata. Richiesto Python 3.8+")
        return False
    return True

def setup_virtual_environment():
    """Configura il virtual environment."""
    venv_path = Path("venv")
    
    if not venv_path.exists():
        print("📦 Creazione virtual environment...")
        if run_command("python3 -m venv venv", "Creazione virtual environment"):
            print("✅ Virtual environment creato")
        else:
            return False
    else:
        print("✅ Virtual environment già esistente")
    
    return True

def activate_virtual_environment():
    """Attiva il virtual environment."""
    # In uno script Python, dobbiamo modificare il PATH
    venv_bin = Path("venv/bin")
    if venv_bin.exists():
        os.environ["PATH"] = f"{venv_bin}:{os.environ.get('PATH', '')}"
        os.environ["VIRTUAL_ENV"] = str(Path("venv").absolute())
        
        # Modifica sys.path per usare il Python del venv
        venv_site_packages = Path("venv/lib/python3.13/site-packages")
        if venv_site_packages.exists():
            sys.path.insert(0, str(venv_site_packages))
        
        print("✅ Virtual environment attivato")
        return True
    return False

def install_pylucene():
    """Installa PyLucene."""
    print("📥 Controllo installazione PyLucene...")
    
    try:
        import lucene
        print("✅ PyLucene già installato")
        return True
    except ImportError:
        print("📦 PyLucene non installato, installazione in corso...")
        
        # Controlla se esiste il wheel precompilato
        wheel_path = Path("dist/lucene-10.0.0-cp313-cp313-macosx_15_0_arm64.whl")
        if wheel_path.exists():
            print("✅ Trovato wheel precompilato")
            if run_command("pip install dist/lucene-10.0.0-cp313-cp313-macosx_15_0_arm64.whl", "Installazione wheel"):
                return True
        else:
            print("⚠️  Wheel non trovato, compilazione da sorgente...")
            if run_command("make", "Compilazione PyLucene"):
                if run_command("make install", "Installazione PyLucene"):
                    return True
        
        return False

def test_pylucene():
    """Testa l'installazione di PyLucene."""
    print("🔍 Test PyLucene...")
    
    try:
        import lucene
        print("✅ Import PyLucene riuscito")
        
        # Test inizializzazione JVM
        lucene.initVM()
        print("✅ Inizializzazione JVM riuscita")
        
        return True
    except Exception as e:
        print(f"❌ Errore test PyLucene: {e}")
        return False

def main():
    """Funzione principale."""
    print("🚀 Setup automatico PyLucene")
    print("=" * 50)
    
    # Controlla la versione di Python
    if not check_python_version():
        return False
    
    # Controlla la directory corrente
    current_dir = Path.cwd()
    if not current_dir.name == "pylucene-10.0.0":
        print(f"⚠️  Script eseguito da {current_dir}")
        print("   Assicurati di essere nella directory pylucene-10.0.0")
        return False
    
    # Setup virtual environment
    if not setup_virtual_environment():
        return False
    
    # Attiva virtual environment
    if not activate_virtual_environment():
        return False
    
    # Installa PyLucene
    if not install_pylucene():
        return False
    
    # Test PyLucene
    if not test_pylucene():
        return False
    
    print("\n🎉 Setup completato con successo!")
    print("\n📋 Comandi utili:")
    print("   - Esegui benchmark: python full-text-search/__main__.py")
    print("   - Test rapido: python -c \"import lucene; print('PyLucene OK')\"")
    print("\n🔧 Per usare PyLucene in un nuovo terminale:")
    print("   cd pylucene/pylucene-10.0.0")
    print("   source venv/bin/activate")
    print("   python setup_pylucene.py")
    
    return True

if __name__ == "__main__":
    success = main()
    sys.exit(0 if success else 1) 