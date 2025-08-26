#ifndef org_apache_lucene_queries_function_valuesource_ConstNumberSource_H
#define org_apache_lucene_queries_function_valuesource_ConstNumberSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class ConstNumberSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_getBool_9aa4f33e82ea333f,
                mid_getDouble_6fb37e123fed7a1f,
                mid_getFloat_8b62236f0e4d0dbc,
                mid_getInt_bd89ce15dad49192,
                mid_getLong_0f176418e3e16541,
                mid_getNumber_b9665294ea488d3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstNumberSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstNumberSource(const ConstNumberSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              ConstNumberSource();

              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
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
            extern PyType_Def PY_TYPE_DEF(ConstNumberSource);
            extern PyTypeObject *PY_TYPE(ConstNumberSource);

            class t_ConstNumberSource {
            public:
              PyObject_HEAD
              ConstNumberSource object;
              static PyObject *wrap_Object(const ConstNumberSource&);
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
