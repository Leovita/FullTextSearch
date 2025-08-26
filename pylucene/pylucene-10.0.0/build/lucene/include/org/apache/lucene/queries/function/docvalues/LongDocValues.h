#ifndef org_apache_lucene_queries_function_docvalues_LongDocValues_H
#define org_apache_lucene_queries_function_docvalues_LongDocValues_H

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
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
          class ValueSource;
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
          namespace docvalues {

            class LongDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_59499d05e6417711,
                mid_boolVal_a8281eb3b9d9672d,
                mid_byteVal_9e902c8fd52d5208,
                mid_doubleVal_3bb466f769ef1c7f,
                mid_floatVal_5873a23b935a9d49,
                mid_getRangeScorer_5d5d3a04371eed22,
                mid_getValueFiller_32f41a37c2710e92,
                mid_intVal_a3904e10f5bb9437,
                mid_longVal_49af390f180d8ee7,
                mid_objectVal_2a2d7d7b9153274c,
                mid_shortVal_03c4a11d0633d4d1,
                mid_strVal_0da8f0b89b1e9a22,
                mid_toString_0da8f0b89b1e9a22,
                mid_externalToLong_490f1686ea1cfda6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LongDocValues(const LongDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              LongDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              jbyte byteVal(jint) const;
              jdouble doubleVal(jint) const;
              jfloat floatVal(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(LongDocValues);
            extern PyTypeObject *PY_TYPE(LongDocValues);

            class t_LongDocValues {
            public:
              PyObject_HEAD
              LongDocValues object;
              static PyObject *wrap_Object(const LongDocValues&);
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
