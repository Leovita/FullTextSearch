#ifndef org_apache_lucene_codecs_lucene95_OffHeapFloatVectorValues$DenseOffHeapVectorValues_H
#define org_apache_lucene_codecs_lucene95_OffHeapFloatVectorValues$DenseOffHeapVectorValues_H

#include "org/apache/lucene/codecs/lucene95/OffHeapFloatVectorValues.h"

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
        namespace lucene95 {
          class OffHeapFloatVectorValues$DenseOffHeapVectorValues;
        }
        namespace hnsw {
          class FlatVectorsScorer;
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

          class OffHeapFloatVectorValues$DenseOffHeapVectorValues : public ::org::apache::lucene::codecs::lucene95::OffHeapFloatVectorValues {
           public:
            enum {
              mid_init$_71c440f325fa186d,
              mid_copy_36ae912514b65e49,
              mid_getAcceptOrds_952ad757d5b0c3b2,
              mid_iterator_95916eac162e9a1d,
              mid_ordToDoc_a3904e10f5bb9437,
              mid_scorer_08ba7b0e97b17679,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapFloatVectorValues$DenseOffHeapVectorValues(jobject obj) : ::org::apache::lucene::codecs::lucene95::OffHeapFloatVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapFloatVectorValues$DenseOffHeapVectorValues(const OffHeapFloatVectorValues$DenseOffHeapVectorValues& obj) : ::org::apache::lucene::codecs::lucene95::OffHeapFloatVectorValues(obj) {}

            OffHeapFloatVectorValues$DenseOffHeapVectorValues(jint, jint, const ::org::apache::lucene::store::IndexInput &, jint, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &, const ::org::apache::lucene::index::VectorSimilarityFunction &);

            OffHeapFloatVectorValues$DenseOffHeapVectorValues copy() const;
            ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
            ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator iterator() const;
            jint ordToDoc(jint) const;
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
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(OffHeapFloatVectorValues$DenseOffHeapVectorValues);
          extern PyTypeObject *PY_TYPE(OffHeapFloatVectorValues$DenseOffHeapVectorValues);

          class t_OffHeapFloatVectorValues$DenseOffHeapVectorValues {
          public:
            PyObject_HEAD
            OffHeapFloatVectorValues$DenseOffHeapVectorValues object;
            static PyObject *wrap_Object(const OffHeapFloatVectorValues$DenseOffHeapVectorValues&);
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
