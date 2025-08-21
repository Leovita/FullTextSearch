#ifndef org_apache_lucene_search_FuzzyTermsEnum$FuzzyTermsException_H
#define org_apache_lucene_search_FuzzyTermsEnum$FuzzyTermsException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FuzzyTermsEnum$FuzzyTermsException : public ::java::lang::RuntimeException {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyTermsEnum$FuzzyTermsException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FuzzyTermsEnum$FuzzyTermsException(const FuzzyTermsEnum$FuzzyTermsException& obj) : ::java::lang::RuntimeException(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FuzzyTermsEnum$FuzzyTermsException);
        extern PyTypeObject *PY_TYPE(FuzzyTermsEnum$FuzzyTermsException);

        class t_FuzzyTermsEnum$FuzzyTermsException {
        public:
          PyObject_HEAD
          FuzzyTermsEnum$FuzzyTermsException object;
          static PyObject *wrap_Object(const FuzzyTermsEnum$FuzzyTermsException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
