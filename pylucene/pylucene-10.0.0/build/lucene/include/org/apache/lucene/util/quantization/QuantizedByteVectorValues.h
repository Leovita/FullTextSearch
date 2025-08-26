#ifndef org_apache_lucene_util_quantization_QuantizedByteVectorValues_H
#define org_apache_lucene_util_quantization_QuantizedByteVectorValues_H

#include "org/apache/lucene/index/ByteVectorValues.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
      }
      namespace codecs {
        namespace lucene95 {
          class HasIndexSlice;
        }
      }
      namespace store {
        class IndexInput;
      }
      namespace search {
        class VectorScorer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {

          class QuantizedByteVectorValues : public ::org::apache::lucene::index::ByteVectorValues {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_copy_e6d0558e65112591,
              mid_getScalarQuantizer_ee5409c2abaa79cb,
              mid_getScoreCorrectionConstant_5873a23b935a9d49,
              mid_getSlice_1107977def75ee66,
              mid_scorer_08ba7b0e97b17679,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QuantizedByteVectorValues(jobject obj) : ::org::apache::lucene::index::ByteVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QuantizedByteVectorValues(const QuantizedByteVectorValues& obj) : ::org::apache::lucene::index::ByteVectorValues(obj) {}

            QuantizedByteVectorValues();

            QuantizedByteVectorValues copy() const;
            ::org::apache::lucene::util::quantization::ScalarQuantizer getScalarQuantizer() const;
            jfloat getScoreCorrectionConstant(jint) const;
            ::org::apache::lucene::store::IndexInput getSlice() const;
            ::org::apache::lucene::search::VectorScorer scorer(const JArray< jfloat > &) const;
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
      namespace util {
        namespace quantization {
          extern PyType_Def PY_TYPE_DEF(QuantizedByteVectorValues);
          extern PyTypeObject *PY_TYPE(QuantizedByteVectorValues);

          class t_QuantizedByteVectorValues {
          public:
            PyObject_HEAD
            QuantizedByteVectorValues object;
            static PyObject *wrap_Object(const QuantizedByteVectorValues&);
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
