#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitingReaderException_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitingReaderException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ExitableDirectoryReader$ExitingReaderException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_ee46a189998009d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitingReaderException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitingReaderException(const ExitableDirectoryReader$ExitingReaderException& obj) : ::java::lang::RuntimeException(obj) {}

          ExitableDirectoryReader$ExitingReaderException(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitingReaderException);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitingReaderException);

        class t_ExitableDirectoryReader$ExitingReaderException {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitingReaderException object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitingReaderException *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitingReaderException&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitingReaderException&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
