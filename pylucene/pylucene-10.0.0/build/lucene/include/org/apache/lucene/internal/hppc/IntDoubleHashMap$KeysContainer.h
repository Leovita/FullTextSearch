#ifndef org_apache_lucene_internal_hppc_IntDoubleHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_IntDoubleHashMap$KeysContainer_H

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
          class IntCursor;
          class IntDoubleHashMap;
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

          class IntDoubleHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_018de5ac3d8f4601,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_4b72a28a860ae838,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntDoubleHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntDoubleHashMap$KeysContainer(const IntDoubleHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            IntDoubleHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::IntDoubleHashMap &);

            ::java::util::Iterator iterator() const;
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
          extern PyType_Def PY_TYPE_DEF(IntDoubleHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(IntDoubleHashMap$KeysContainer);

          class t_IntDoubleHashMap$KeysContainer {
          public:
            PyObject_HEAD
            IntDoubleHashMap$KeysContainer object;
            static PyObject *wrap_Object(const IntDoubleHashMap$KeysContainer&);
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
