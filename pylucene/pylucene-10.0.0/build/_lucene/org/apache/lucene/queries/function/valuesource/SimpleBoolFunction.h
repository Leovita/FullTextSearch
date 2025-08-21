#ifndef org_apache_lucene_queries_function_valuesource_SimpleBoolFunction_H
#define org_apache_lucene_queries_function_valuesource_SimpleBoolFunction_H

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {
            class BoolDocValues;
          }
          class ValueSource;
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

            class SimpleBoolFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_db3a6d89b0568e70,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_f321a80125c21569,
                mid_hashCode_20fbf7565993c3d7,
                mid_name_09a7afff1868fc5e,
                mid_func_a3ec06d1f7309d93,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleBoolFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SimpleBoolFunction(const SimpleBoolFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              SimpleBoolFunction(const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::docvalues::BoolDocValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(SimpleBoolFunction);
            extern PyTypeObject *PY_TYPE(SimpleBoolFunction);

            class t_SimpleBoolFunction {
            public:
              PyObject_HEAD
              SimpleBoolFunction object;
              static PyObject *wrap_Object(const SimpleBoolFunction&);
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
