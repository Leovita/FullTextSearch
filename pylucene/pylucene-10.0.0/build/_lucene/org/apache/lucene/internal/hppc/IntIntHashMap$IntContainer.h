#ifndef org_apache_lucene_internal_hppc_IntIntHashMap$IntContainer_H
#define org_apache_lucene_internal_hppc_IntIntHashMap$IntContainer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class IntCursor;
          class IntIntHashMap;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class IntIntHashMap$IntContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e64000e07a51e58e,
              mid_size_20fbf7565993c3d7,
              mid_toArray_623cd4a044ba647a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntIntHashMap$IntContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap$IntContainer(const IntIntHashMap$IntContainer& obj) : ::java::lang::Object(obj) {}

            IntIntHashMap$IntContainer(const ::org::apache::lucene::internal::hppc::IntIntHashMap &);

            jint size() const;
            JArray< jint > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap$IntContainer);
          extern PyTypeObject *PY_TYPE(IntIntHashMap$IntContainer);

          class t_IntIntHashMap$IntContainer {
          public:
            PyObject_HEAD
            IntIntHashMap$IntContainer object;
            static PyObject *wrap_Object(const IntIntHashMap$IntContainer&);
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
