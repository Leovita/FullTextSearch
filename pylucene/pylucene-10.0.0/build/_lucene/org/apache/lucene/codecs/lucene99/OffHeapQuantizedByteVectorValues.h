#ifndef org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues_H
#define org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues_H

#include "org/apache/lucene/util/quantization/QuantizedByteVectorValues.h"

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
        }
      }
      namespace index {
        class VectorSimilarityFunction;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
        namespace lucene99 {
          class OffHeapQuantizedByteVectorValues;
        }
        namespace lucene95 {
          class OrdToDocDISIReaderConfiguration;
        }
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene99 {

          class OffHeapQuantizedByteVectorValues : public ::org::apache::lucene::util::quantization::QuantizedByteVectorValues {
           public:
            enum {
              mid_dimension_bd89ce15dad49192,
              mid_getScalarQuantizer_ee5409c2abaa79cb,
              mid_getScoreCorrectionConstant_5873a23b935a9d49,
              mid_getSlice_1107977def75ee66,
              mid_getVectorByteLength_bd89ce15dad49192,
              mid_load_4e267b2ab94991a6,
              mid_size_bd89ce15dad49192,
              mid_vectorValue_d94c1f1d0c66928c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapQuantizedByteVectorValues(jobject obj) : ::org::apache::lucene::util::quantization::QuantizedByteVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapQuantizedByteVectorValues(const OffHeapQuantizedByteVectorValues& obj) : ::org::apache::lucene::util::quantization::QuantizedByteVectorValues(obj) {}

            jint dimension() const;
            ::org::apache::lucene::util::quantization::ScalarQuantizer getScalarQuantizer() const;
            jfloat getScoreCorrectionConstant(jint) const;
            ::org::apache::lucene::store::IndexInput getSlice() const;
            jint getVectorByteLength() const;
            static OffHeapQuantizedByteVectorValues load(const ::org::apache::lucene::codecs::lucene95::OrdToDocDISIReaderConfiguration &, jint, jint, const ::org::apache::lucene::util::quantization::ScalarQuantizer &, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &, jboolean, jlong, jlong, const ::org::apache::lucene::store::IndexInput &);
            jint size() const;
            JArray< jbyte > vectorValue(jint) const;
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
      namespace codecs {
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(OffHeapQuantizedByteVectorValues);
          extern PyTypeObject *PY_TYPE(OffHeapQuantizedByteVectorValues);

          class t_OffHeapQuantizedByteVectorValues {
          public:
            PyObject_HEAD
            OffHeapQuantizedByteVectorValues object;
            static PyObject *wrap_Object(const OffHeapQuantizedByteVectorValues&);
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
