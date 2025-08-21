#ifndef org_apache_lucene_internal_hppc_CharObjectHashMap$ValuesContainer_H
#define org_apache_lucene_internal_hppc_CharObjectHashMap$ValuesContainer_H

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
          class CharObjectHashMap;
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

          class CharObjectHashMap$ValuesContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c6fd4e892c3b3c77,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_e6b839682a4610a6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharObjectHashMap$ValuesContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharObjectHashMap$ValuesContainer(const CharObjectHashMap$ValuesContainer& obj) : ::java::lang::Object(obj) {}

            CharObjectHashMap$ValuesContainer(const ::org::apache::lucene::internal::hppc::CharObjectHashMap &);

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
          extern PyType_Def PY_TYPE_DEF(CharObjectHashMap$ValuesContainer);
          extern PyTypeObject *PY_TYPE(CharObjectHashMap$ValuesContainer);

          class t_CharObjectHashMap$ValuesContainer {
          public:
            PyObject_HEAD
            CharObjectHashMap$ValuesContainer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharObjectHashMap$ValuesContainer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharObjectHashMap$ValuesContainer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharObjectHashMap$ValuesContainer&, PyTypeObject *);
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
