#ifndef org_apache_lucene_queries_function_valuesource_VectorFieldFunction_H
#define org_apache_lucene_queries_function_valuesource_VectorFieldFunction_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class VectorFieldFunction : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_exists_a8281eb3b9d9672d,
                mid_toString_0da8f0b89b1e9a22,
                mid_getVectorIterator_b78969502cbf4939,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VectorFieldFunction(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              VectorFieldFunction(const VectorFieldFunction& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              jboolean exists(jint) const;
              ::java::lang::String toString(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(VectorFieldFunction);
            extern PyTypeObject *PY_TYPE(VectorFieldFunction);

            class t_VectorFieldFunction {
            public:
              PyObject_HEAD
              VectorFieldFunction object;
              static PyObject *wrap_Object(const VectorFieldFunction&);
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
