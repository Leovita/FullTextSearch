#ifndef org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H
#define org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H

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
      namespace util {
        class BytesRefBuilder;
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

            class DocTermsIndexDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_9c5d80cf95aacc16,
                mid_boolVal_a8281eb3b9d9672d,
                mid_bytesVal_0a9b0f6d8ac17652,
                mid_exists_a8281eb3b9d9672d,
                mid_getRangeScorer_5d5d3a04371eed22,
                mid_getValueFiller_32f41a37c2710e92,
                mid_numOrd_bd89ce15dad49192,
                mid_objectVal_2a2d7d7b9153274c,
                mid_ordVal_a3904e10f5bb9437,
                mid_strVal_0da8f0b89b1e9a22,
                mid_toString_0da8f0b89b1e9a22,
                mid_getOrdForDoc_a3904e10f5bb9437,
                mid_toTerm_fef9c036acf290a9,
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
