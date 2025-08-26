#ifndef org_apache_lucene_codecs_lucene95_OffHeapByteVectorValues$DenseOffHeapVectorValues_H
#define org_apache_lucene_codecs_lucene95_OffHeapByteVectorValues$DenseOffHeapVectorValues_H

#include "org/apache/lucene/codecs/lucene95/OffHeapByteVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class VectorSimilarityFunction;
        class KnnVectorValues$DocIndexIterator;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
        namespace lucene95 {
          class OffHeapByteVectorValues$DenseOffHeapVectorValues;
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
        namespace lucene95 {

          class OffHeapByteVectorValues$DenseOffHeapVectorValues : public ::org::apache::lucene::codecs::lucene95::OffHeapByteVectorValues {
           public:
            enum {
              mid_init$_71c440f325fa186d,
              mid_copy_4dc57036b767becd,
              mid_getAcceptOrds_952ad757d5b0c3b2,
              mid_iterator_95916eac162e9a1d,
              mid_scorer_7b262f85b25549ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapByteVectorValues$DenseOffHeapVectorValues(jobject obj) : ::org::apache::lucene::codecs::lucene95::OffHeapByteVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapByteVectorValues$DenseOffHeapVectorValues(const OffHeapByteVectorValues$DenseOffHeapVectorValues& obj) : ::org::apache::lucene::codecs::lucene95::OffHeapByteVectorValues(obj) {}

            OffHeapByteVectorValues$DenseOffHeapVectorValues(jint, jint, const ::org::apache::lucene::store::IndexInput &, jint, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &, const ::org::apache::lucene::index::VectorSimilarityFunction &);

            OffHeapByteVectorValues$DenseOffHeapVectorValues copy() const;
            ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
            ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator iterator() const;
            ::org::apache::lucene::search::VectorScorer scorer(const JArray< jbyte > &) const;
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
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(OffHeapByteVectorValues$DenseOffHeapVectorValues);
          extern PyTypeObject *PY_TYPE(OffHeapByteVectorValues$DenseOffHeapVectorValues);

          class t_OffHeapByteVectorValues$DenseOffHeapVectorValues {
          public:
            PyObject_HEAD
            OffHeapByteVectorValues$DenseOffHeapVectorValues object;
            static PyObject *wrap_Object(const OffHeapByteVectorValues$DenseOffHeapVectorValues&);
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
