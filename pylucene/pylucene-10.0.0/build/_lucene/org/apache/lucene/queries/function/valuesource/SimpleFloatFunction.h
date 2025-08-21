#ifndef org_apache_lucene_queries_function_valuesource_SimpleFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_SimpleFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/SingleFunction.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
          class FunctionValues;
        }
      }
      namespace index {
        class LeafReaderContext;
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

            class SimpleFloatFunction : public ::org::apache::lucene::queries::function::valuesource::SingleFunction {
             public:
              enum {
                mid_init$_db3a6d89b0568e70,
                mid_getValues_a7d46b98c691aeac,
                mid_func_2a7dde111948b529,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::SingleFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SimpleFloatFunction(const SimpleFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::SingleFunction(obj) {}

              SimpleFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &);

              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(SimpleFloatFunction);
            extern PyTypeObject *PY_TYPE(SimpleFloatFunction);

            class t_SimpleFloatFunction {
            public:
              PyObject_HEAD
              SimpleFloatFunction object;
              static PyObject *wrap_Object(const SimpleFloatFunction&);
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
