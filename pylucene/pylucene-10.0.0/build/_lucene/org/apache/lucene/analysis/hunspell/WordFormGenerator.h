#ifndef org_apache_lucene_analysis_hunspell_WordFormGenerator_H
#define org_apache_lucene_analysis_hunspell_WordFormGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class Dictionary;
          class AffixedWord;
          class EntrySuggestion;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Consumer;
    }
    class List;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class Runnable;
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
              mid_init$_25851638115dd159,
              mid_compress_9d74e01734ad6f93,
              mid_generateAllSimpleWords_682b0f0c58da8db3,
              mid_getAllWordForms_2a97fb83df696e60,
              mid_getAllWordForms_29fad1d9cdcec56b,
              mid_canStemToOriginal_05c45b0647f3c731,
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
