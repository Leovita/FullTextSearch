#ifndef org_apache_lucene_queries_function_valuesource_DefFunction_H
#define org_apache_lucene_queries_function_valuesource_DefFunction_H

#include "org/apache/lucene/queries/function/valuesource/MultiFunction.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
  namespace util {
    class List;
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

            class DefFunction : public ::org::apache::lucene::queries::function::valuesource::MultiFunction {
             public:
              enum {
                mid_init$_9425cd4f62c94bce,
                mid_getValues_a7d46b98c691aeac,
                mid_name_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DefFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DefFunction(const DefFunction& obj) : ::org::apache::lucene::queries::function::valuesource::MultiFunction(obj) {}

              DefFunction(const ::java::util::List &);

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
            extern PyType_Def PY_TYPE_DEF(DefFunction);
            extern PyTypeObject *PY_TYPE(DefFunction);

            class t_DefFunction {
            public:
              PyObject_HEAD
              DefFunction object;
              static PyObject *wrap_Object(const DefFunction&);
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
