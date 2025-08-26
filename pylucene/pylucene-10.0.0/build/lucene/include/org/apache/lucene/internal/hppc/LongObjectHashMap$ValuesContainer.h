#ifndef org_apache_lucene_internal_hppc_LongObjectHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_LongObjectHashMap$ValuesContainer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class ObjectCursor;
          class LongObjectHashMap;
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

          class LongObjectHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f06275d73bb9493e,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_1e688954528bc160,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongObjectHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongObjectHashMap$ValuesContainer(const LongObjectHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            LongObjectHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::LongObjectHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(LongObjectHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(LongObjectHashMap$ValuesContainer);

          class t_LongObjectHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            LongObjectHashMap$ValuesContainer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongObjectHashMap$ValuesContainer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongObjectHashMap$ValuesContainer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongObjectHashMap$ValuesContainer&, PyTypeObject *);
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
