#ifndef org_apache_lucene_queries_function_valuesource_VectorValueSource_H
#define org_apache_lucene_queries_function_valuesource_VectorValueSource_H

#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"

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

            class VectorValueSource : public ::org::apache::lucene::queries::function::valuesource::MultiValueSource {
             public:
              enum {
                mid_init$_acbb405b60a30822,
                mid_createWeight_61f11467fc4f893b,
                mid_description_e7df854526d67fa3,
                mid_dimension_bd89ce15dad49192,
                mid_equals_00d17418847797d4,
                mid_getSources_1387e1e2702ac173,
                mid_getValues_9f85153ef1e32cca,
                mid_hashCode_bd89ce15dad49192,
                mid_name_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VectorValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              VectorValueSource(const VectorValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {}

              VectorValueSource(const ::java::util::List &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jint dimension() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::util::List getSources() const;
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
            extern PyType_Def PY_TYPE_DEF(VectorValueSource);
            extern PyTypeObject *PY_TYPE(VectorValueSource);

            class t_VectorValueSource {
            public:
              PyObject_HEAD
              VectorValueSource object;
              static PyObject *wrap_Object(const VectorValueSource&);
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
