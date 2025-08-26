#ifndef org_apache_lucene_internal_hppc_IntDoubleHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_IntDoubleHashMap$ValuesContainer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class IntDoubleHashMap;
          class DoubleCursor;
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

          class IntDoubleHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_018de5ac3d8f4601,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_1d737fde75f82f40,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntDoubleHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntDoubleHashMap$ValuesContainer(const IntDoubleHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            IntDoubleHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::IntDoubleHashMap &);

            ::java::util::Iterator iterator() const;
            jint size() const;
            JArray< jdouble > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntDoubleHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(IntDoubleHashMap$ValuesContainer);

          class t_IntDoubleHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            IntDoubleHashMap$ValuesContainer object;
            static PyObject *wrap_Object(const IntDoubleHashMap$ValuesContainer&);
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
