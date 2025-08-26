#ifndef org_apache_lucene_internal_hppc_IntObjectHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_IntObjectHashMap$ValuesContainer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class ObjectCursor;
          class IntObjectHashMap;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class Iterable;
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
              mid_init$_1f9a09d920392111,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_1e688954528bc160,
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
