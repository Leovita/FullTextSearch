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
                mid_init$_3720c61b0679eb3e,
                mid_getBool_947277eca0748c4e,
                mid_getDouble_32caabaad86c508b,
                mid_getFloat_9b6c3480dac00edf,
                mid_getInt_20fbf7565993c3d7,
                mid_getLong_16939d9d0a9a9721,
                mid_getNumber_1b3282bb4db06655,
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
