#ifndef org_apache_lucene_queries_function_valuesource_MultiBoolFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiBoolFunction_H

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
    class List;
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

            class MultiBoolFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_9425cd4f62c94bce,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_f321a80125c21569,
                mid_hashCode_20fbf7565993c3d7,
                mid_name_09a7afff1868fc5e,
                mid_func_50589dd14c9a9f13,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiBoolFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiBoolFunction(const MultiBoolFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              MultiBoolFunction(const ::java::util::List &);

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
            extern PyType_Def PY_TYPE_DEF(MultiBoolFunction);
            extern PyTypeObject *PY_TYPE(MultiBoolFunction);

            class t_MultiBoolFunction {
            public:
              PyObject_HEAD
              MultiBoolFunction object;
              static PyObject *wrap_Object(const MultiBoolFunction&);
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
