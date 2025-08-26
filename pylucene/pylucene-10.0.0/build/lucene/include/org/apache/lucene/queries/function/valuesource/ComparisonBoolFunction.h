#ifndef org_apache_lucene_queries_function_valuesource_ComparisonBoolFunction_H
#define org_apache_lucene_queries_function_valuesource_ComparisonBoolFunction_H

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
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
      namespace search {
        class IndexSearcher;
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

            class ComparisonBoolFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_2b0420dab002ba4e,
                mid_compare_09cea75812180629,
                mid_createWeight_61f11467fc4f893b,
                mid_description_e7df854526d67fa3,
                mid_equals_00d17418847797d4,
                mid_getValues_9f85153ef1e32cca,
                mid_hashCode_bd89ce15dad49192,
                mid_name_e7df854526d67fa3,
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
