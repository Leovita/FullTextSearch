#ifndef org_apache_lucene_analysis_hunspell_EntrySuggestion_H
#define org_apache_lucene_analysis_hunspell_EntrySuggestion_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class DictEntry;
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

          class EntrySuggestion : public ::java::lang::Object {
           public:
            enum {
              mid_getEntriesToAdd_1387e1e2702ac173,
              mid_getEntriesToEdit_1387e1e2702ac173,
              mid_getExtraGeneratedWords_1387e1e2702ac173,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EntrySuggestion(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EntrySuggestion(const EntrySuggestion& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getEntriesToAdd() const;
            ::java::util::List getEntriesToEdit() const;
            ::java::util::List getExtraGeneratedWords() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(EntrySuggestion);
          extern PyTypeObject *PY_TYPE(EntrySuggestion);

          class t_EntrySuggestion {
          public:
            PyObject_HEAD
            EntrySuggestion object;
            static PyObject *wrap_Object(const EntrySuggestion&);
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
