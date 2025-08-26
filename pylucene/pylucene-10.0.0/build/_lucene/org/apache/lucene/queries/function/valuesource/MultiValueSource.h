#ifndef org_apache_lucene_queries_function_valuesource_MultiValueSource_H
#define org_apache_lucene_queries_function_valuesource_MultiValueSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class MultiValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_dimension_bd89ce15dad49192,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiValueSource(const MultiValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              MultiValueSource();

              jint dimension() const;
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
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyType_Def PY_TYPE_DEF(MultiValueSource);
            extern PyTypeObject *PY_TYPE(MultiValueSource);

            class t_MultiValueSource {
            public:
              PyObject_HEAD
              MultiValueSource object;
              static PyObject *wrap_Object(const MultiValueSource&);
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
