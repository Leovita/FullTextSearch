#ifndef org_apache_lucene_internal_hppc_IntObjectHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_IntObjectHashMap$ValuesContainer_H

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
          class IntObjectHashMap;
          class ObjectCursor;
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

          class IntObjectHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b24d87a75f376608,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_e6b839682a4610a6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntObjectHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntObjectHashMap$ValuesContainer(const IntObjectHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            IntObjectHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::IntObjectHashMap &);

            ::java::util::Iterator iterator() const;
            jint size() const;
            JArray< ::java::lang::Object > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntObjectHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(IntObjectHashMap$ValuesContainer);

          class t_IntObjectHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            IntObjectHashMap$ValuesContainer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntObjectHashMap$ValuesContainer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntObjectHashMap$ValuesContainer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntObjectHashMap$ValuesContainer&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
