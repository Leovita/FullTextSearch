#ifndef org_apache_lucene_internal_hppc_IntLongHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_IntLongHashMap$ValuesContainer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class IntLongHashMap;
          class LongCursor;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class Iterable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class IntLongHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_921fdf44254c33e1,
              mid_iterator_0db4c76ff7ee995b,
              mid_toArray_a057bd1a0d2826b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntLongHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntLongHashMap$ValuesContainer(const IntLongHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            IntLongHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::IntLongHashMap &);

            ::java::util::Iterator iterator() const;
            JArray< jlong > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntLongHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(IntLongHashMap$ValuesContainer);

          class t_IntLongHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            IntLongHashMap$ValuesContainer object;
            static PyObject *wrap_Object(const IntLongHashMap$ValuesContainer&);
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
