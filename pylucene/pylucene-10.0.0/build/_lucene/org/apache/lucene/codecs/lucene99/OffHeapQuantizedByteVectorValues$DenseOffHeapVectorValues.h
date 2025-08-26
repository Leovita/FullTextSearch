#ifndef org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues_H
#define org_apache_lucene_codecs_lucene99_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues_H

#include "org/apache/lucene/codecs/lucene99/OffHeapQuantizedByteVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        namespace quantization {
          class ScalarQuantizer;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
        class KnnVectorValues$DocIndexIterator;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
        namespace lucene99 {
          class OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues;
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
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
              mid_init$_9a4603e3e30e3b37,
              mid_copy_008a41b8f56569ec,
              mid_getAcceptOrds_952ad757d5b0c3b2,
              mid_iterator_95916eac162e9a1d,
              mid_scorer_08ba7b0e97b17679,
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
