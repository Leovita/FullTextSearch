#ifndef org_apache_lucene_util_hnsw_IntToIntFunction_H
#define org_apache_lucene_util_hnsw_IntToIntFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class IntToIntFunction : public ::java::lang::Object {
           public:
            enum {
              mid_apply_3c9bba330f083871,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntToIntFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntToIntFunction(const IntToIntFunction& obj) : ::java::lang::Object(obj) {}

            jint apply(jint) const;
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(IntToIntFunction);
          extern PyTypeObject *PY_TYPE(IntToIntFunction);

          class t_IntToIntFunction {
          public:
            PyObject_HEAD
            IntToIntFunction object;
            static PyObject *wrap_Object(const IntToIntFunction&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
