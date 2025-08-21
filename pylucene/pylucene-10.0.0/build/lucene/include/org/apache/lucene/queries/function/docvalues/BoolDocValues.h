#ifndef org_apache_lucene_queries_function_docvalues_BoolDocValues_H
#define org_apache_lucene_queries_function_docvalues_BoolDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues$ValueFiller;
          class ValueSource;
        }
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
          namespace docvalues {

            class BoolDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_db3a6d89b0568e70,
                mid_boolVal_ae22d3a856ad56f1,
                mid_byteVal_3b30672d0bff9ebb,
                mid_doubleVal_788f636887bfcb79,
                mid_floatVal_29cfa01aaad92564,
                mid_getValueFiller_fad7fc73a89d9be3,
                mid_intVal_3c9bba330f083871,
                mid_longVal_7b22650fccb5d574,
                mid_objectVal_eb7eace67c4a21fd,
                mid_shortVal_5e7313b7c028d5e0,
                mid_strVal_cd8436557ab831f9,
                mid_toString_cd8436557ab831f9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BoolDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BoolDocValues(const BoolDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              BoolDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              jbyte byteVal(jint) const;
              jdouble doubleVal(jint) const;
              jfloat floatVal(jint) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint intVal(jint) const;
              jlong longVal(jint) const;
              ::java::lang::Object objectVal(jint) const;
              jshort shortVal(jint) const;
              ::java::lang::String strVal(jint) const;
              ::java::lang::String toString(jint) const;
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
          namespace docvalues {
            extern PyType_Def PY_TYPE_DEF(BoolDocValues);
            extern PyTypeObject *PY_TYPE(BoolDocValues);

            class t_BoolDocValues {
            public:
              PyObject_HEAD
              BoolDocValues object;
              static PyObject *wrap_Object(const BoolDocValues&);
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
