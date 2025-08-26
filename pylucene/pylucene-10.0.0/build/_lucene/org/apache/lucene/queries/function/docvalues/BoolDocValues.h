#ifndef org_apache_lucene_queries_function_docvalues_BoolDocValues_H
#define org_apache_lucene_queries_function_docvalues_BoolDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
                mid_init$_59499d05e6417711,
                mid_boolVal_a8281eb3b9d9672d,
                mid_byteVal_9e902c8fd52d5208,
                mid_doubleVal_3bb466f769ef1c7f,
                mid_floatVal_5873a23b935a9d49,
                mid_getValueFiller_32f41a37c2710e92,
                mid_intVal_a3904e10f5bb9437,
                mid_longVal_49af390f180d8ee7,
                mid_objectVal_2a2d7d7b9153274c,
                mid_shortVal_03c4a11d0633d4d1,
                mid_strVal_0da8f0b89b1e9a22,
                mid_toString_0da8f0b89b1e9a22,
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
