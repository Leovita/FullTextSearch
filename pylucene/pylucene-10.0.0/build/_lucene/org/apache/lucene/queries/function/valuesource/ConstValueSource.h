#ifndef org_apache_lucene_queries_function_valuesource_ConstValueSource_H
#define org_apache_lucene_queries_function_valuesource_ConstValueSource_H

#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class Number;
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

            class ConstValueSource : public ::org::apache::lucene::queries::function::valuesource::ConstNumberSource {
             public:
              enum {
                mid_init$_675f4cb9a2529ee0,
                mid_description_e7df854526d67fa3,
                mid_equals_00d17418847797d4,
                mid_getBool_9aa4f33e82ea333f,
                mid_getDouble_6fb37e123fed7a1f,
                mid_getFloat_8b62236f0e4d0dbc,
                mid_getInt_bd89ce15dad49192,
                mid_getLong_0f176418e3e16541,
                mid_getNumber_b9665294ea488d3c,
                mid_getValues_9f85153ef1e32cca,
                mid_hashCode_bd89ce15dad49192,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstValueSource(const ConstValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {}

              ConstValueSource(jfloat);

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
            extern PyType_Def PY_TYPE_DEF(ConstValueSource);
            extern PyTypeObject *PY_TYPE(ConstValueSource);

            class t_ConstValueSource {
            public:
              PyObject_HEAD
              ConstValueSource object;
              static PyObject *wrap_Object(const ConstValueSource&);
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
