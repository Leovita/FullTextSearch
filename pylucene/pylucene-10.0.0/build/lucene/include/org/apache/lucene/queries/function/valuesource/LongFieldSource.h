#ifndef org_apache_lucene_queries_function_valuesource_LongFieldSource_H
#define org_apache_lucene_queries_function_valuesource_LongFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
      namespace search {
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

            class LongFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_0d82408c6e55bc30,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_externalToLong_e942a6f864c95ca0,
                mid_getSortField_33273beb7e6f6fa1,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                mid_longToObject_fbeea4c1018ff27e,
                mid_longToString_f0c925499cca37b2,
                mid_getNumericDocValues_7907eac73ef81c86,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LongFieldSource(const LongFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              LongFieldSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jlong externalToLong(const ::java::lang::String &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::Object longToObject(jlong) const;
              ::java::lang::String longToString(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(LongFieldSource);
            extern PyTypeObject *PY_TYPE(LongFieldSource);

            class t_LongFieldSource {
            public:
              PyObject_HEAD
              LongFieldSource object;
              static PyObject *wrap_Object(const LongFieldSource&);
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
