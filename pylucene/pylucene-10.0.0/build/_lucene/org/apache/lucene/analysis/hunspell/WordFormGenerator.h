#ifndef org_apache_lucene_analysis_hunspell_WordFormGenerator_H
#define org_apache_lucene_analysis_hunspell_WordFormGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Consumer;
    }
    class Set;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class AffixedWord;
          class EntrySuggestion;
          class Dictionary;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class WordFormGenerator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_081d976eaef7e2bb,
              mid_compress_2c0e3e016933b160,
              mid_generateAllSimpleWords_477a46962c7a43aa,
              mid_getAllWordForms_5d97058074f9c965,
              mid_getAllWordForms_736d0365d80f38a6,
              mid_canStemToOriginal_0fa7a1dd667c6b48,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordFormGenerator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordFormGenerator(const WordFormGenerator& obj) : ::java::lang::Object(obj) {}

            WordFormGenerator(const ::org::apache::lucene::analysis::hunspell::Dictionary &);

            ::org::apache::lucene::analysis::hunspell::EntrySuggestion compress(const ::java::util::List &, const ::java::util::Set &, const ::java::lang::Runnable &) const;
            void generateAllSimpleWords(const ::java::util::function::Consumer &, const ::java::lang::Runnable &) const;
            ::java::util::List getAllWordForms(const ::java::lang::String &, const ::java::lang::Runnable &) const;
            ::java::util::List getAllWordForms(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::Runnable &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(WordFormGenerator);
          extern PyTypeObject *PY_TYPE(WordFormGenerator);

          class t_WordFormGenerator {
          public:
            PyObject_HEAD
            WordFormGenerator object;
            static PyObject *wrap_Object(const WordFormGenerator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
