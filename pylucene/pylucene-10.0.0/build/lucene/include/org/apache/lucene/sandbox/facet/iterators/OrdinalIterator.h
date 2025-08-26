#ifndef org_apache_lucene_sandbox_facet_iterators_OrdinalIterator_H
#define org_apache_lucene_sandbox_facet_iterators_OrdinalIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {
            class OrdinalIterator;
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

            class OrdinalIterator : public ::java::lang::Object {
             public:
              enum {
                mid_fromArray_832e3a8ccf9d95fd,
                mid_nextOrd_bd89ce15dad49192,
                mid_toArray_4b72a28a860ae838,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OrdinalIterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OrdinalIterator(const OrdinalIterator& obj) : ::java::lang::Object(obj) {}

              static OrdinalIterator *EMPTY;
              static jint NO_MORE_ORDS;

              static OrdinalIterator fromArray(const JArray< jint > &);
              jint nextOrd() const;
              JArray< jint > toArray() const;
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
            extern PyType_Def PY_TYPE_DEF(OrdinalIterator);
            extern PyTypeObject *PY_TYPE(OrdinalIterator);

            class t_OrdinalIterator {
            public:
              PyObject_HEAD
              OrdinalIterator object;
              static PyObject *wrap_Object(const OrdinalIterator&);
              static PyObject *wrap_jobject(const jobject&);
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
