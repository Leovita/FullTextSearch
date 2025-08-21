#ifndef org_apache_lucene_misc_index_BPIndexReorderer$NotEnoughRAMException_H
#define org_apache_lucene_misc_index_BPIndexReorderer$NotEnoughRAMException_H

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
      namespace misc {
        namespace index {

          class BPIndexReorderer$NotEnoughRAMException : public ::java::lang::RuntimeException {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BPIndexReorderer$NotEnoughRAMException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BPIndexReorderer$NotEnoughRAMException(const BPIndexReorderer$NotEnoughRAMException& obj) : ::java::lang::RuntimeException(obj) {}
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
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(BPIndexReorderer$NotEnoughRAMException);
          extern PyTypeObject *PY_TYPE(BPIndexReorderer$NotEnoughRAMException);

          class t_BPIndexReorderer$NotEnoughRAMException {
          public:
            PyObject_HEAD
            BPIndexReorderer$NotEnoughRAMException object;
            static PyObject *wrap_Object(const BPIndexReorderer$NotEnoughRAMException&);
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
