#ifndef org_apache_lucene_internal_hppc_IntLongHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_IntLongHashMap$KeysContainer_H

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
          class IntLongHashMap;
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

          class IntLongHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bff2455e3181a6d4,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_4b72a28a860ae838,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntLongHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntLongHashMap$KeysContainer(const IntLongHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            IntLongHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::IntLongHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(IntLongHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(IntLongHashMap$KeysContainer);

          class t_IntLongHashMap$KeysContainer {
          public:
            PyObject_HEAD
            IntLongHashMap$KeysContainer object;
            static PyObject *wrap_Object(const IntLongHashMap$KeysContainer&);
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
