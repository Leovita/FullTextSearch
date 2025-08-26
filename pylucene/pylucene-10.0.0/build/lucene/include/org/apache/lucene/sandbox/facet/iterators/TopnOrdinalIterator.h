#ifndef org_apache_lucene_sandbox_facet_iterators_TopnOrdinalIterator_H
#define org_apache_lucene_sandbox_facet_iterators_TopnOrdinalIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {
            class OrdinalIterator;
            class ComparableSupplier;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
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

            class TopnOrdinalIterator : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7c8ac5269f0a0c48,
                mid_nextOrd_bd89ce15dad49192,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TopnOrdinalIterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TopnOrdinalIterator(const TopnOrdinalIterator& obj) : ::java::lang::Object(obj) {}

              TopnOrdinalIterator(const ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator &, const ::org::apache::lucene::sandbox::facet::iterators::ComparableSupplier &, jint);

              jint nextOrd() const;
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
            extern PyType_Def PY_TYPE_DEF(TopnOrdinalIterator);
            extern PyTypeObject *PY_TYPE(TopnOrdinalIterator);

            class t_TopnOrdinalIterator {
            public:
              PyObject_HEAD
              TopnOrdinalIterator object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TopnOrdinalIterator *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TopnOrdinalIterator&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TopnOrdinalIterator&, PyTypeObject *);
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
