#ifndef org_apache_lucene_queries_function_valuesource_IfFunction_H
#define org_apache_lucene_queries_function_valuesource_IfFunction_H

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"

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
      namespace queries {
        namespace function {
          class ValueSource;
          class FunctionValues;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class IndexSearcher;
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

            class IfFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_60b739157d309e8c,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IfFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IfFunction(const IfFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              IfFunction(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
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
            extern PyType_Def PY_TYPE_DEF(IfFunction);
            extern PyTypeObject *PY_TYPE(IfFunction);

            class t_IfFunction {
            public:
              PyObject_HEAD
              IfFunction object;
              static PyObject *wrap_Object(const IfFunction&);
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
