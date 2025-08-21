#ifndef org_apache_lucene_queries_function_valuesource_DoubleConstValueSource_H
#define org_apache_lucene_queries_function_valuesource_DoubleConstValueSource_H

#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
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

            class DoubleConstValueSource : public ::org::apache::lucene::queries::function::valuesource::ConstNumberSource {
             public:
              enum {
                mid_init$_b5bc1a2fb9ff9e90,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getBool_947277eca0748c4e,
                mid_getDouble_32caabaad86c508b,
                mid_getFloat_9b6c3480dac00edf,
                mid_getInt_20fbf7565993c3d7,
                mid_getLong_16939d9d0a9a9721,
                mid_getNumber_1b3282bb4db06655,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DoubleConstValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DoubleConstValueSource(const DoubleConstValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {}

              DoubleConstValueSource(jdouble);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
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
            extern PyType_Def PY_TYPE_DEF(DoubleConstValueSource);
            extern PyTypeObject *PY_TYPE(DoubleConstValueSource);

            class t_DoubleConstValueSource {
            public:
              PyObject_HEAD
              DoubleConstValueSource object;
              static PyObject *wrap_Object(const DoubleConstValueSource&);
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
