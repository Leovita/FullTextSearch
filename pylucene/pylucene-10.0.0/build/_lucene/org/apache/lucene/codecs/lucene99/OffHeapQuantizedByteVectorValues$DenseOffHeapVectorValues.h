#ifndef org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues_H
#define org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues_H

#include "org/apache/lucene/codecs/lucene99/OffHeapQuantizedByteVectorValues.h"

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
      namespace search {
        class VectorScorer;
      }
      namespace util {
        namespace quantization {
          class ScalarQuantizer;
        }
        class Bits;
      }
      namespace index {
        class VectorSimilarityFunction;
        class KnnVectorValues$DocIndexIterator;
      }
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
        namespace lucene99 {
          class OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues;
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

          class OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues : public ::org::apache::lucene::codecs::lucene99::OffHeapQuantizedByteVectorValues {
           public:
            enum {
              mid_init$_a1a7dd077fd29b12,
              mid_copy_822e469fabe908e3,
              mid_getAcceptOrds_372c76d90ab3ad4a,
              mid_iterator_cd2e842b8d8e9e2b,
              mid_scorer_a8fe418e8b9bfd3a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues(jobject obj) : ::org::apache::lucene::codecs::lucene99::OffHeapQuantizedByteVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues(const OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues& obj) : ::org::apache::lucene::codecs::lucene99::OffHeapQuantizedByteVectorValues(obj) {}

            OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues(jint, jint, const ::org::apache::lucene::util::quantization::ScalarQuantizer &, jboolean, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &, const ::org::apache::lucene::store::IndexInput &);

            OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues copy() const;
            ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
            ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator iterator() const;
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
      namespace codecs {
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues);
          extern PyTypeObject *PY_TYPE(OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues);

          class t_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues {
          public:
            PyObject_HEAD
            OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues object;
            static PyObject *wrap_Object(const OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues&);
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
