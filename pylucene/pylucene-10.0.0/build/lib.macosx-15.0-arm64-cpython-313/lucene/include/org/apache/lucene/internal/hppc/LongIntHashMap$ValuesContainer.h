#ifndef org_apache_lucene_internal_hppc_LongIntHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_LongIntHashMap$ValuesContainer_H

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
          class LongIntHashMap;
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

          class LongIntHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_44d6e208bd26a01d,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_623cd4a044ba647a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongIntHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongIntHashMap$ValuesContainer(const LongIntHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            LongIntHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::LongIntHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(LongIntHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(LongIntHashMap$ValuesContainer);

          class t_LongIntHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            LongIntHashMap$ValuesContainer object;
            static PyObject *wrap_Object(const LongIntHashMap$ValuesContainer&);
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
