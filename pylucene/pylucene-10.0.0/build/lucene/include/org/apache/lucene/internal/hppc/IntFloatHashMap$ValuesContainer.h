#ifndef org_apache_lucene_internal_hppc_IntFloatHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_IntFloatHashMap$ValuesContainer_H

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
          class IntFloatHashMap;
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

          class IntFloatHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ad0b62d86f13d1d0,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_808165844ea67079,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntFloatHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntFloatHashMap$ValuesContainer(const IntFloatHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            IntFloatHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::IntFloatHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(IntFloatHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(IntFloatHashMap$ValuesContainer);

          class t_IntFloatHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            IntFloatHashMap$ValuesContainer object;
            static PyObject *wrap_Object(const IntFloatHashMap$ValuesContainer&);
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
