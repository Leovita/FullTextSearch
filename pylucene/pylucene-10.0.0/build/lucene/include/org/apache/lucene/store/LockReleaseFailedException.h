#ifndef org_apache_lucene_store_LockReleaseFailedException_H
#define org_apache_lucene_store_LockReleaseFailedException_H

#include "java/io/IOException.h"

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
      namespace store {

        class LockReleaseFailedException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_0d82408c6e55bc30,
            mid_init$_ea9871c48698171a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockReleaseFailedException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockReleaseFailedException(const LockReleaseFailedException& obj) : ::java::io::IOException(obj) {}

          LockReleaseFailedException(const ::java::lang::String &);
          LockReleaseFailedException(const ::java::lang::String &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(LockReleaseFailedException);
        extern PyTypeObject *PY_TYPE(LockReleaseFailedException);

        class t_LockReleaseFailedException {
        public:
          PyObject_HEAD
          LockReleaseFailedException object;
          static PyObject *wrap_Object(const LockReleaseFailedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
