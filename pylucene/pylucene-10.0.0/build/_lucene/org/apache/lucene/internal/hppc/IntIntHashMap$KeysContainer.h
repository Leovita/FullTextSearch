#ifndef org_apache_lucene_internal_hppc_IntIntHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_IntIntHashMap$KeysContainer_H

#include "org/apache/lucene/internal/hppc/IntIntHashMap$IntContainer.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
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

          class IntIntHashMap$KeysContainer : public ::org::apache::lucene::internal::hppc::IntIntHashMap$IntContainer {
           public:
            enum {
              mid_init$_0c20f8e915fe8507,
              mid_iterator_c7985fafdcf40e83,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntIntHashMap$KeysContainer(jobject obj) : ::org::apache::lucene::internal::hppc::IntIntHashMap$IntContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap$KeysContainer(const IntIntHashMap$KeysContainer& obj) : ::org::apache::lucene::internal::hppc::IntIntHashMap$IntContainer(obj) {}

            IntIntHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::IntIntHashMap &);

            ::java::util::Iterator iterator() const;
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
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(IntIntHashMap$KeysContainer);

          class t_IntIntHashMap$KeysContainer {
          public:
            PyObject_HEAD
            IntIntHashMap$KeysContainer object;
            static PyObject *wrap_Object(const IntIntHashMap$KeysContainer&);
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
