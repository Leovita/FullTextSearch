#ifndef org_apache_lucene_internal_hppc_LongFloatHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_LongFloatHashMap$KeysContainer_H

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
          class LongFloatHashMap;
          class LongCursor;
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

          class LongFloatHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3ec36fb9acb5b4dd,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_1aab5293a9d94cd3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongFloatHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongFloatHashMap$KeysContainer(const LongFloatHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            LongFloatHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::LongFloatHashMap &);

            ::java::util::Iterator iterator() const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(LongFloatHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(LongFloatHashMap$KeysContainer);

          class t_LongFloatHashMap$KeysContainer {
          public:
            PyObject_HEAD
            LongFloatHashMap$KeysContainer object;
            static PyObject *wrap_Object(const LongFloatHashMap$KeysContainer&);
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
