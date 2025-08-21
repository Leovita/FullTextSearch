#ifndef org_apache_lucene_queries_function_valuesource_VectorSimilarityFunction_H
#define org_apache_lucene_queries_function_valuesource_VectorSimilarityFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorSimilarityFunction;
        class LeafReaderContext;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class VectorSimilarityFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_e5edf29e78a12878,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                mid_func_8726746481c3aed8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VectorSimilarityFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              VectorSimilarityFunction(const VectorSimilarityFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              VectorSimilarityFunction(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
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
            extern PyType_Def PY_TYPE_DEF(VectorSimilarityFunction);
            extern PyTypeObject *PY_TYPE(VectorSimilarityFunction);

            class t_VectorSimilarityFunction {
            public:
              PyObject_HEAD
              VectorSimilarityFunction object;
              static PyObject *wrap_Object(const VectorSimilarityFunction&);
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
