#ifndef org_apache_lucene_internal_hppc_LongFloatHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_LongFloatHashMap$ValuesContainer_H

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
          class FloatCursor;
          class LongFloatHashMap;
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

          class LongFloatHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3ec36fb9acb5b4dd,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_67d89dc3894661ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongFloatHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongFloatHashMap$ValuesContainer(const LongFloatHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            LongFloatHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::LongFloatHashMap &);

            ::java::util::Iterator iterator() const;
            jint size() const;
            JArray< jfloat > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(LongFloatHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(LongFloatHashMap$ValuesContainer);

          class t_LongFloatHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            LongFloatHashMap$ValuesContainer object;
            static PyObject *wrap_Object(const LongFloatHashMap$ValuesContainer&);
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
