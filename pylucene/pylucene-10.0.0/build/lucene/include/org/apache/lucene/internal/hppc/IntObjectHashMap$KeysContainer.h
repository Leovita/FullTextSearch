#ifndef org_apache_lucene_internal_hppc_IntObjectHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_IntObjectHashMap$KeysContainer_H

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
          class IntObjectHashMap;
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

          class IntObjectHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b24d87a75f376608,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_623cd4a044ba647a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntObjectHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntObjectHashMap$KeysContainer(const IntObjectHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            IntObjectHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::IntObjectHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(IntObjectHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(IntObjectHashMap$KeysContainer);

          class t_IntObjectHashMap$KeysContainer {
          public:
            PyObject_HEAD
            IntObjectHashMap$KeysContainer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntObjectHashMap$KeysContainer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntObjectHashMap$KeysContainer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntObjectHashMap$KeysContainer&, PyTypeObject *);
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
