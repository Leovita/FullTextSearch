#ifndef org_apache_lucene_analysis_hunspell_SuggestionTimeoutException_H
#define org_apache_lucene_analysis_hunspell_SuggestionTimeoutException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class SuggestionTimeoutException : public ::java::lang::RuntimeException {
           public:
            enum {
              mid_init$_3b582520f99b8484,
              mid_getPartialResult_36830460e10839eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SuggestionTimeoutException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SuggestionTimeoutException(const SuggestionTimeoutException& obj) : ::java::lang::RuntimeException(obj) {}

            SuggestionTimeoutException(const ::java::lang::String &, const ::java::util::List &);

            ::java::util::List getPartialResult() const;
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
          extern PyType_Def PY_TYPE_DEF(SuggestionTimeoutException);
          extern PyTypeObject *PY_TYPE(SuggestionTimeoutException);

          class t_SuggestionTimeoutException {
          public:
            PyObject_HEAD
            SuggestionTimeoutException object;
            static PyObject *wrap_Object(const SuggestionTimeoutException&);
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
