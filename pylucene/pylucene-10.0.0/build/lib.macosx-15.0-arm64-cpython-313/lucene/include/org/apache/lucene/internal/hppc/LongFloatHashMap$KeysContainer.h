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
              mid_init$_e65bc95cab5f2409,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_a057bd1a0d2826b3,
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
