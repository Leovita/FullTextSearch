#ifndef org_apache_lucene_internal_hppc_LongObjectHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_LongObjectHashMap$KeysContainer_H

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
          class LongObjectHashMap;
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

          class LongObjectHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7c18306bfe70ad9b,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_a057bd1a0d2826b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongObjectHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongObjectHashMap$KeysContainer(const LongObjectHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            LongObjectHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::LongObjectHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(LongObjectHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(LongObjectHashMap$KeysContainer);

          class t_LongObjectHashMap$KeysContainer {
          public:
            PyObject_HEAD
            LongObjectHashMap$KeysContainer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongObjectHashMap$KeysContainer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongObjectHashMap$KeysContainer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongObjectHashMap$KeysContainer&, PyTypeObject *);
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
