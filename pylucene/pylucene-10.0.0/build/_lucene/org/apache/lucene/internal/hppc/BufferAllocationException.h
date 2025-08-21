#ifndef org_apache_lucene_internal_hppc_BufferAllocationException_H
#define org_apache_lucene_internal_hppc_BufferAllocationException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class BufferAllocationException : public ::java::lang::RuntimeException {
           public:
            enum {
              mid_init$_0d82408c6e55bc30,
              mid_init$_65857bc096222f13,
              mid_init$_2b921e30982ab392,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BufferAllocationException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BufferAllocationException(const BufferAllocationException& obj) : ::java::lang::RuntimeException(obj) {}

            BufferAllocationException(const ::java::lang::String &);
            BufferAllocationException(const ::java::lang::String &, const JArray< ::java::lang::Object > &);
            BufferAllocationException(const ::java::lang::String &, const ::java::lang::Throwable &, const JArray< ::java::lang::Object > &);
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
      namespace internal {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(BufferAllocationException);
          extern PyTypeObject *PY_TYPE(BufferAllocationException);

          class t_BufferAllocationException {
          public:
            PyObject_HEAD
            BufferAllocationException object;
            static PyObject *wrap_Object(const BufferAllocationException&);
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
