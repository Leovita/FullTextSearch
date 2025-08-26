#ifndef org_apache_lucene_queries_function_valuesource_SimpleFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_SimpleFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/SingleFunction.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace io {
    class IOException;
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
          class FunctionValues;
          class ValueSource;
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
                mid_init$_59499d05e6417711,
                mid_getValues_9f85153ef1e32cca,
                mid_func_3feb7071772c0817,
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
