#ifndef org_apache_lucene_queries_function_valuesource_MultiFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiFunction_H

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
    class List;
    class Map;
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

            class MultiFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_9425cd4f62c94bce,
                mid_allExists_50589dd14c9a9f13,
                mid_allExists_d1f27551e09cd238,
                mid_anyExists_50589dd14c9a9f13,
                mid_anyExists_d1f27551e09cd238,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_description_7ec3d131ad2bcd25,
                mid_equals_570b5248a6da3ef6,
                mid_hashCode_20fbf7565993c3d7,
                mid_toString_5ea3043317137a6e,
                mid_valsArr_9915285ae941b572,
                mid_name_09a7afff1868fc5e,
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
