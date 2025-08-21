#ifndef org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues_H
#define org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues_H

#include "org/apache/lucene/util/quantization/QuantizedByteVectorValues.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace lucene99 {
          class OffHeapQuantizedByteVectorValues;
        }
        namespace lucene95 {
          class OrdToDocDISIReaderConfiguration;
        }
        namespace hnsw {
          class FlatVectorsScorer;
        }
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
              mid_dimension_20fbf7565993c3d7,
              mid_getScalarQuantizer_c7ba334748265ffc,
              mid_getScoreCorrectionConstant_29cfa01aaad92564,
              mid_getSlice_69ff96f993716366,
              mid_getVectorByteLength_20fbf7565993c3d7,
              mid_load_f0b73e5396981578,
              mid_size_20fbf7565993c3d7,
              mid_vectorValue_81e4ab9dd381561f,
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
