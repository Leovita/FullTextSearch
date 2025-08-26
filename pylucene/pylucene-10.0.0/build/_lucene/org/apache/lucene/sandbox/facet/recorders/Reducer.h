#ifndef org_apache_lucene_sandbox_facet_recorders_Reducer_H
#define org_apache_lucene_sandbox_facet_recorders_Reducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {
            class Reducer;
          }
        }
      }
    }
  }
}
namespace java {
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
          namespace recorders {

            class Reducer : public ::java::lang::Object {
             public:
              enum {
                mid_reduce_9314817161e40a7e,
                mid_reduce_ab52dff7447e3c87,
                mid_reduce_7f27cf81a85a97e9,
                mid_reduce_5804bd1c01b59205,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Reducer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Reducer(const Reducer& obj) : ::java::lang::Object(obj) {}

              static Reducer *MAX;
              static Reducer *SUM;

              jdouble reduce(jdouble, jdouble) const;
              jfloat reduce(jfloat, jfloat) const;
              jint reduce(jint, jint) const;
              jlong reduce(jlong, jlong) const;
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
          namespace recorders {
            extern PyType_Def PY_TYPE_DEF(Reducer);
            extern PyTypeObject *PY_TYPE(Reducer);

            class t_Reducer {
            public:
              PyObject_HEAD
              Reducer object;
              static PyObject *wrap_Object(const Reducer&);
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
