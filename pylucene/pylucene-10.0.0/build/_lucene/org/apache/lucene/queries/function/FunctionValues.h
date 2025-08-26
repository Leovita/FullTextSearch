#ifndef org_apache_lucene_queries_function_FunctionValues_H
#define org_apache_lucene_queries_function_FunctionValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
      namespace queries {
        namespace function {
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
        }
      }
      namespace util {
        class BytesRefBuilder;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class FunctionValues : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_boolVal_a8281eb3b9d9672d,
              mid_byteVal_9e902c8fd52d5208,
              mid_byteVal_027bd37cec7676d5,
              mid_byteVectorVal_d94c1f1d0c66928c,
              mid_bytesVal_0a9b0f6d8ac17652,
              mid_cost_8b62236f0e4d0dbc,
              mid_doubleVal_3bb466f769ef1c7f,
              mid_doubleVal_b16d3f4aaa08de03,
              mid_exists_a8281eb3b9d9672d,
              mid_explain_cc4f64c6e8e6aa85,
              mid_floatVal_5873a23b935a9d49,
              mid_floatVal_8f716e39d3fdfcfe,
              mid_floatVectorVal_4392f4b0f19a3288,
              mid_getRangeScorer_5d5d3a04371eed22,
              mid_getScorer_2d81432867479478,
              mid_getValueFiller_32f41a37c2710e92,
              mid_intVal_a3904e10f5bb9437,
              mid_intVal_ffaa99c90d5de360,
              mid_longVal_49af390f180d8ee7,
              mid_longVal_80fd146058a1e556,
              mid_numOrd_bd89ce15dad49192,
              mid_objectVal_2a2d7d7b9153274c,
              mid_ordVal_a3904e10f5bb9437,
              mid_shortVal_03c4a11d0633d4d1,
              mid_shortVal_8b26a0c60ffbd71a,
              mid_strVal_0da8f0b89b1e9a22,
              mid_strVal_54396758fce4b45a,
              mid_toString_0da8f0b89b1e9a22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionValues(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionValues(const FunctionValues& obj) : ::java::lang::Object(obj) {}

            FunctionValues();

            jboolean boolVal(jint) const;
            jbyte byteVal(jint) const;
            void byteVal(jint, const JArray< jbyte > &) const;
            JArray< jbyte > byteVectorVal(jint) const;
            jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRefBuilder &) const;
            jfloat cost() const;
            jdouble doubleVal(jint) const;
            void doubleVal(jint, const JArray< jdouble > &) const;
            jboolean exists(jint) const;
            ::org::apache::lucene::search::Explanation explain(jint) const;
            jfloat floatVal(jint) const;
            void floatVal(jint, const JArray< jfloat > &) const;
            JArray< jfloat > floatVectorVal(jint) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
            jint intVal(jint) const;
            void intVal(jint, const JArray< jint > &) const;
            jlong longVal(jint) const;
            void longVal(jint, const JArray< jlong > &) const;
            jint numOrd() const;
            ::java::lang::Object objectVal(jint) const;
            jint ordVal(jint) const;
            jshort shortVal(jint) const;
            void shortVal(jint, const JArray< jshort > &) const;
            ::java::lang::String strVal(jint) const;
            void strVal(jint, const JArray< ::java::lang::String > &) const;
            ::java::lang::String toString(jint) const;
          };
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
          extern PyType_Def PY_TYPE_DEF(FunctionValues);
          extern PyTypeObject *PY_TYPE(FunctionValues);

          class t_FunctionValues {
          public:
            PyObject_HEAD
            FunctionValues object;
            static PyObject *wrap_Object(const FunctionValues&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
