#ifndef org_apache_lucene_queries_function_valuesource_MultiFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

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
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues;
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

            class MultiFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_acbb405b60a30822,
                mid_allExists_da9008e0fa57cbd0,
                mid_allExists_09cea75812180629,
                mid_anyExists_da9008e0fa57cbd0,
                mid_anyExists_09cea75812180629,
                mid_createWeight_61f11467fc4f893b,
                mid_description_e7df854526d67fa3,
                mid_description_121cad1a14786755,
                mid_equals_00d17418847797d4,
                mid_hashCode_bd89ce15dad49192,
                mid_toString_67763e5325090981,
                mid_valsArr_f10723d225d2efb4,
                mid_name_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiFunction(const MultiFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              MultiFunction(const ::java::util::List &);

              static jboolean allExists(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);
              static jboolean allExists(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &);
              static jboolean anyExists(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);
              static jboolean anyExists(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &);
              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              static ::java::lang::String description(const ::java::lang::String &, const ::java::util::List &);
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              static ::java::lang::String toString(const ::java::lang::String &, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &, jint);
              static JArray< ::org::apache::lucene::queries::function::FunctionValues > valsArr(const ::java::util::List &, const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &);
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
            extern PyType_Def PY_TYPE_DEF(MultiFunction);
            extern PyTypeObject *PY_TYPE(MultiFunction);

            class t_MultiFunction {
            public:
              PyObject_HEAD
              MultiFunction object;
              static PyObject *wrap_Object(const MultiFunction&);
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
