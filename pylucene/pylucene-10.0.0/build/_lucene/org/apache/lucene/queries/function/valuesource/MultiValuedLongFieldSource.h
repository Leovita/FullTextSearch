#ifndef org_apache_lucene_queries_function_valuesource_MultiValuedLongFieldSource_H
#define org_apache_lucene_queries_function_valuesource_MultiValuedLongFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/LongFieldSource.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
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

            class MultiValuedLongFieldSource : public ::org::apache::lucene::queries::function::valuesource::LongFieldSource {
             public:
              enum {
                mid_init$_5da2e10ab596578d,
                mid_description_e7df854526d67fa3,
                mid_equals_00d17418847797d4,
                mid_getSortField_6b771f2dc8fe37aa,
                mid_hashCode_bd89ce15dad49192,
                mid_getNumericDocValues_acbba77126cc7841,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiValuedLongFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::LongFieldSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiValuedLongFieldSource(const MultiValuedLongFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::LongFieldSource(obj) {}

              MultiValuedLongFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

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
            extern PyType_Def PY_TYPE_DEF(MultiValuedLongFieldSource);
            extern PyTypeObject *PY_TYPE(MultiValuedLongFieldSource);

            class t_MultiValuedLongFieldSource {
            public:
              PyObject_HEAD
              MultiValuedLongFieldSource object;
              static PyObject *wrap_Object(const MultiValuedLongFieldSource&);
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
