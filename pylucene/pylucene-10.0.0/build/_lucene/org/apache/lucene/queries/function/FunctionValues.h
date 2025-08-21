#ifndef org_apache_lucene_queries_function_FunctionValues_H
#define org_apache_lucene_queries_function_FunctionValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
        }
      }
      namespace search {
        class Explanation;
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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_init$_3720c61b0679eb3e,
              mid_boolVal_ae22d3a856ad56f1,
              mid_byteVal_3b30672d0bff9ebb,
              mid_byteVal_255018cd4981ed89,
              mid_byteVectorVal_81e4ab9dd381561f,
              mid_bytesVal_5ee67d79d93d193b,
              mid_cost_9b6c3480dac00edf,
              mid_doubleVal_788f636887bfcb79,
              mid_doubleVal_edfa05fa7c29df1a,
              mid_exists_ae22d3a856ad56f1,
              mid_explain_d381e85477a576c6,
              mid_floatVal_29cfa01aaad92564,
              mid_floatVal_f82dd0be1ce311f7,
              mid_floatVectorVal_837967dda86e7ad8,
              mid_getRangeScorer_aecbec4e094d375b,
              mid_getScorer_fd0cbb70daf58e9e,
              mid_getValueFiller_fad7fc73a89d9be3,
              mid_intVal_3c9bba330f083871,
              mid_intVal_53431387eb1e9148,
              mid_longVal_7b22650fccb5d574,
              mid_longVal_12f9eb393fed87f6,
              mid_numOrd_20fbf7565993c3d7,
              mid_objectVal_eb7eace67c4a21fd,
              mid_ordVal_3c9bba330f083871,
              mid_shortVal_5e7313b7c028d5e0,
              mid_shortVal_15d0d52d49b4ad2d,
              mid_strVal_cd8436557ab831f9,
              mid_strVal_27b7540d23547157,
              mid_toString_cd8436557ab831f9,
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
