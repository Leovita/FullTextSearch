#ifndef org_apache_lucene_internal_hppc_CharObjectHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_CharObjectHashMap$KeysContainer_H

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
          class CharCursor;
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

          class CharObjectHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c6fd4e892c3b3c77,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_toArray_77d52ded526199de,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharObjectHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharObjectHashMap$KeysContainer(const CharObjectHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            CharObjectHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::CharObjectHashMap &);

            ::java::util::Iterator iterator() const;
            jint size() const;
            JArray< jchar > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(CharObjectHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(CharObjectHashMap$KeysContainer);

          class t_CharObjectHashMap$KeysContainer {
          public:
            PyObject_HEAD
            CharObjectHashMap$KeysContainer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharObjectHashMap$KeysContainer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharObjectHashMap$KeysContainer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharObjectHashMap$KeysContainer&, PyTypeObject *);
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
