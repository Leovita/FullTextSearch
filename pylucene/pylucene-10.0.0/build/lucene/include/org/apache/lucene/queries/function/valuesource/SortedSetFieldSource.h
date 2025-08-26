#ifndef org_apache_lucene_queries_function_valuesource_SortedSetFieldSource_H
#define org_apache_lucene_queries_function_valuesource_SortedSetFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

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
        }
      }
      namespace search {
        class SortedSetSelector$Type;
        class SortField;
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

            class SortedSetFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_ee46a189998009d6,
                mid_init$_83df237011d2a544,
                mid_description_e7df854526d67fa3,
                mid_equals_00d17418847797d4,
                mid_getSortField_6b771f2dc8fe37aa,
                mid_getValues_9f85153ef1e32cca,
                mid_hashCode_bd89ce15dad49192,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SortedSetFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SortedSetFieldSource(const SortedSetFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              SortedSetFieldSource(const ::java::lang::String &);
              SortedSetFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::SortedSetSelector$Type &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(SortedSetFieldSource);
            extern PyTypeObject *PY_TYPE(SortedSetFieldSource);

            class t_SortedSetFieldSource {
            public:
              PyObject_HEAD
              SortedSetFieldSource object;
              static PyObject *wrap_Object(const SortedSetFieldSource&);
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
