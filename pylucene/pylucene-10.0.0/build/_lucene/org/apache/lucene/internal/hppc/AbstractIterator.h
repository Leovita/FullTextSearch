#ifndef org_apache_lucene_internal_hppc_AbstractIterator_H
#define org_apache_lucene_internal_hppc_AbstractIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class AbstractIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_hasNext_9aa4f33e82ea333f,
              mid_next_4819806f62f1360a,
              mid_remove_e7bdbe105ce1bafb,
              mid_fetch_4819806f62f1360a,
              mid_done_4819806f62f1360a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractIterator(const AbstractIterator& obj) : ::java::lang::Object(obj) {}

            AbstractIterator();

            jboolean hasNext() const;
            ::java::lang::Object next() const;
            void remove() const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractIterator);
          extern PyTypeObject *PY_TYPE(AbstractIterator);

          class t_AbstractIterator {
          public:
            PyObject_HEAD
            AbstractIterator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractIterator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractIterator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractIterator&, PyTypeObject *);
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
