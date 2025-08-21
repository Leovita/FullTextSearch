#ifndef org_apache_lucene_queries_function_valuesource_ComparisonBoolFunction_H
#define org_apache_lucene_queries_function_valuesource_ComparisonBoolFunction_H

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

            class ComparisonBoolFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_342f670648d89063,
                mid_compare_d1f27551e09cd238,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                mid_name_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ComparisonBoolFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ComparisonBoolFunction(const ComparisonBoolFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              ComparisonBoolFunction(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::String &);

              jboolean compare(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &) const;
              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::String name() const;
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
            extern PyType_Def PY_TYPE_DEF(ComparisonBoolFunction);
            extern PyTypeObject *PY_TYPE(ComparisonBoolFunction);

            class t_ComparisonBoolFunction {
            public:
              PyObject_HEAD
              ComparisonBoolFunction object;
              static PyObject *wrap_Object(const ComparisonBoolFunction&);
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
