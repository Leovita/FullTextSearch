#ifndef org_apache_lucene_queries_function_valuesource_ByteVectorSimilarityFunction_H
#define org_apache_lucene_queries_function_valuesource_ByteVectorSimilarityFunction_H

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

            class ByteVectorSimilarityFunction : public ::org::apache::lucene::queries::function::valuesource::VectorSimilarityFunction {
             public:
              enum {
                mid_init$_e5edf29e78a12878,
                mid_func_8726746481c3aed8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteVectorSimilarityFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::VectorSimilarityFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ByteVectorSimilarityFunction(const ByteVectorSimilarityFunction& obj) : ::org::apache::lucene::queries::function::valuesource::VectorSimilarityFunction(obj) {}

              ByteVectorSimilarityFunction(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);
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
            extern PyType_Def PY_TYPE_DEF(ByteVectorSimilarityFunction);
            extern PyTypeObject *PY_TYPE(ByteVectorSimilarityFunction);

            class t_ByteVectorSimilarityFunction {
            public:
              PyObject_HEAD
              ByteVectorSimilarityFunction object;
              static PyObject *wrap_Object(const ByteVectorSimilarityFunction&);
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
