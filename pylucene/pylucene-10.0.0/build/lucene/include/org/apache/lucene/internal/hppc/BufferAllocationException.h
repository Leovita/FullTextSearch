#ifndef org_apache_lucene_internal_hppc_BufferAllocationException_H
#define org_apache_lucene_internal_hppc_BufferAllocationException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Object;
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
              mid_init$_ee46a189998009d6,
              mid_init$_450414b70aae8f27,
              mid_init$_dcb5edd4091d62c3,
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
