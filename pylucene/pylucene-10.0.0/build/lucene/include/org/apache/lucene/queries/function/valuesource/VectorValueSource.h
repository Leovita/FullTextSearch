#ifndef org_apache_lucene_queries_function_valuesource_VectorValueSource_H
#define org_apache_lucene_queries_function_valuesource_VectorValueSource_H

#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"

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

            class VectorValueSource : public ::org::apache::lucene::queries::function::valuesource::MultiValueSource {
             public:
              enum {
                mid_init$_9425cd4f62c94bce,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_dimension_20fbf7565993c3d7,
                mid_equals_570b5248a6da3ef6,
                mid_getSources_36830460e10839eb,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                mid_name_09a7afff1868fc5e,
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
