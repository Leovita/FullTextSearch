#ifndef org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H
#define org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {

            class DocTermsIndexDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_c7f4ac916b9a5b31,
                mid_boolVal_ae22d3a856ad56f1,
                mid_bytesVal_5ee67d79d93d193b,
                mid_exists_ae22d3a856ad56f1,
                mid_getRangeScorer_aecbec4e094d375b,
                mid_getValueFiller_fad7fc73a89d9be3,
                mid_numOrd_20fbf7565993c3d7,
                mid_objectVal_eb7eace67c4a21fd,
                mid_ordVal_3c9bba330f083871,
                mid_strVal_cd8436557ab831f9,
                mid_toString_cd8436557ab831f9,
                mid_getOrdForDoc_3c9bba330f083871,
                mid_toTerm_cb0eb1432185fc94,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DocTermsIndexDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DocTermsIndexDocValues(const DocTermsIndexDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              DocTermsIndexDocValues(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &);

              jboolean boolVal(jint) const;
              jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRefBuilder &) const;
              jboolean exists(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint numOrd() const;
              ::java::lang::Object objectVal(jint) const;
              jint ordVal(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(DocTermsIndexDocValues);
            extern PyTypeObject *PY_TYPE(DocTermsIndexDocValues);

            class t_DocTermsIndexDocValues {
            public:
              PyObject_HEAD
              DocTermsIndexDocValues object;
              static PyObject *wrap_Object(const DocTermsIndexDocValues&);
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
