#ifndef org_apache_lucene_queries_function_valuesource_MultiValuedDoubleFieldSource_H
#define org_apache_lucene_queries_function_valuesource_MultiValuedDoubleFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/DoubleFieldSource.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortedNumericSelector$Type;
        class SortField;
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

            class MultiValuedDoubleFieldSource : public ::org::apache::lucene::queries::function::valuesource::DoubleFieldSource {
             public:
              enum {
                mid_init$_dbe0e483590005c2,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getSortField_33273beb7e6f6fa1,
                mid_hashCode_20fbf7565993c3d7,
                mid_getNumericDocValues_7907eac73ef81c86,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiValuedDoubleFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::DoubleFieldSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiValuedDoubleFieldSource(const MultiValuedDoubleFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::DoubleFieldSource(obj) {}

              MultiValuedDoubleFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(MultiValuedDoubleFieldSource);
            extern PyTypeObject *PY_TYPE(MultiValuedDoubleFieldSource);

            class t_MultiValuedDoubleFieldSource {
            public:
              PyObject_HEAD
              MultiValuedDoubleFieldSource object;
              static PyObject *wrap_Object(const MultiValuedDoubleFieldSource&);
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
