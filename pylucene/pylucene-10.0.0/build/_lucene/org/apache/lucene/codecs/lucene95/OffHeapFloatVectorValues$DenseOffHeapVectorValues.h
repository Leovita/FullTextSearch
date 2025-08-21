#ifndef org_apache_lucene_codecs_lucene95_OffHeapFloatVectorValues$DenseOffHeapVectorValues_H
#define org_apache_lucene_codecs_lucene95_OffHeapFloatVectorValues$DenseOffHeapVectorValues_H

#include "org/apache/lucene/codecs/lucene95/OffHeapFloatVectorValues.h"

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
      namespace index {
        class VectorSimilarityFunction;
        class KnnVectorValues$DocIndexIterator;
      }
      namespace util {
        class Bits;
      }
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
        namespace lucene95 {
          class OffHeapFloatVectorValues$DenseOffHeapVectorValues;
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
        namespace lucene95 {

          class OffHeapFloatVectorValues$DenseOffHeapVectorValues : public ::org::apache::lucene::codecs::lucene95::OffHeapFloatVectorValues {
           public:
            enum {
              mid_init$_9737133e65ab8c1a,
              mid_copy_d121401f5d0999ae,
              mid_getAcceptOrds_372c76d90ab3ad4a,
              mid_iterator_cd2e842b8d8e9e2b,
              mid_ordToDoc_3c9bba330f083871,
              mid_scorer_a8fe418e8b9bfd3a,
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
