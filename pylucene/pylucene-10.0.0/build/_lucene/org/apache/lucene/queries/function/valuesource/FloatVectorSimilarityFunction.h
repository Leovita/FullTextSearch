#ifndef org_apache_lucene_queries_function_valuesource_FloatVectorSimilarityFunction_H
#define org_apache_lucene_queries_function_valuesource_FloatVectorSimilarityFunction_H

#include "org/apache/lucene/queries/function/valuesource/VectorSimilarityFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class FloatVectorSimilarityFunction : public ::org::apache::lucene::queries::function::valuesource::VectorSimilarityFunction {
             public:
              enum {
                mid_init$_66630380548f024d,
                mid_func_1c1d3073930107dc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FloatVectorSimilarityFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::VectorSimilarityFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FloatVectorSimilarityFunction(const FloatVectorSimilarityFunction& obj) : ::org::apache::lucene::queries::function::valuesource::VectorSimilarityFunction(obj) {}

              FloatVectorSimilarityFunction(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);
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
            extern PyType_Def PY_TYPE_DEF(FloatVectorSimilarityFunction);
            extern PyTypeObject *PY_TYPE(FloatVectorSimilarityFunction);

            class t_FloatVectorSimilarityFunction {
            public:
              PyObject_HEAD
              FloatVectorSimilarityFunction object;
              static PyObject *wrap_Object(const FloatVectorSimilarityFunction&);
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
