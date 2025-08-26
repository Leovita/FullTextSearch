#ifndef org_apache_lucene_sandbox_facet_iterators_ComparableSupplier_H
#define org_apache_lucene_sandbox_facet_iterators_ComparableSupplier_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {

            class ComparableSupplier : public ::java::lang::Object {
             public:
              enum {
                mid_createComparable_4ec2126f39b1749d,
                mid_reuseComparable_ff51b862bb39d102,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ComparableSupplier(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ComparableSupplier(const ComparableSupplier& obj) : ::java::lang::Object(obj) {}

              ::java::lang::Comparable createComparable(jint) const;
              void reuseComparable(jint, const ::java::lang::Comparable &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {
            extern PyType_Def PY_TYPE_DEF(ComparableSupplier);
            extern PyTypeObject *PY_TYPE(ComparableSupplier);

            class t_ComparableSupplier {
            public:
              PyObject_HEAD
              ComparableSupplier object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ComparableSupplier *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ComparableSupplier&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ComparableSupplier&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
