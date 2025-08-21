#ifndef org_apache_lucene_queries_function_valuesource_QueryValueSource_H
#define org_apache_lucene_queries_function_valuesource_QueryValueSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class QueryValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_ecadbbedb78e5212,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getDefaultValue_9b6c3480dac00edf,
                mid_getQuery_a3eacfacada795d4,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryValueSource(const QueryValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              QueryValueSource(const ::org::apache::lucene::search::Query &, jfloat);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jfloat getDefaultValue() const;
              ::org::apache::lucene::search::Query getQuery() const;
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
            extern PyType_Def PY_TYPE_DEF(QueryValueSource);
            extern PyTypeObject *PY_TYPE(QueryValueSource);

            class t_QueryValueSource {
            public:
              PyObject_HEAD
              QueryValueSource object;
              static PyObject *wrap_Object(const QueryValueSource&);
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
