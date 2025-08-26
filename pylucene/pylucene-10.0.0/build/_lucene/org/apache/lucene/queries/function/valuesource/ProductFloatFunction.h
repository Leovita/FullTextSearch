#ifndef org_apache_lucene_queries_function_valuesource_ProductFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_ProductFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/MultiFloatFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class ProductFloatFunction : public ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction {
             public:
              enum {
                mid_init$_20f24faff8ce675a,
                mid_name_e7df854526d67fa3,
                mid_func_995fdbb6859b2731,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ProductFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ProductFloatFunction(const ProductFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::MultiFloatFunction(obj) {}

              ProductFloatFunction(const JArray< ::org::apache::lucene::queries::function::ValueSource > &);
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
            extern PyType_Def PY_TYPE_DEF(ProductFloatFunction);
            extern PyTypeObject *PY_TYPE(ProductFloatFunction);

            class t_ProductFloatFunction {
            public:
              PyObject_HEAD
              ProductFloatFunction object;
              static PyObject *wrap_Object(const ProductFloatFunction&);
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
