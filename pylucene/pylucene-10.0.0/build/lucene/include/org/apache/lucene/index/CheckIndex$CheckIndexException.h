#ifndef org_apache_lucene_index_CheckIndex$CheckIndexException_H
#define org_apache_lucene_index_CheckIndex$CheckIndexException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$CheckIndexException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_ee46a189998009d6,
            mid_init$_95082f1abe6d9712,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$CheckIndexException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$CheckIndexException(const CheckIndex$CheckIndexException& obj) : ::java::lang::RuntimeException(obj) {}

          CheckIndex$CheckIndexException(const ::java::lang::String &);
          CheckIndex$CheckIndexException(const ::java::lang::String &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CheckIndex$CheckIndexException);
        extern PyTypeObject *PY_TYPE(CheckIndex$CheckIndexException);

        class t_CheckIndex$CheckIndexException {
        public:
          PyObject_HEAD
          CheckIndex$CheckIndexException object;
          static PyObject *wrap_Object(const CheckIndex$CheckIndexException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
