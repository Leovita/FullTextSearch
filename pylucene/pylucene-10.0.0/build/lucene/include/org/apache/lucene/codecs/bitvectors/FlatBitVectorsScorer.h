#ifndef org_apache_lucene_codecs_bitvectors_FlatBitVectorsScorer_H
#define org_apache_lucene_codecs_bitvectors_FlatBitVectorsScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomVectorScorer;
          class RandomVectorScorerSupplier;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
        class KnnVectorValues;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bitvectors {

          class FlatBitVectorsScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_getRandomVectorScorer_fc28bd70a9118057,
              mid_getRandomVectorScorer_1701594e562f69f6,
              mid_getRandomVectorScorerSupplier_2c8c5cbb3a1d58d0,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatBitVectorsScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatBitVectorsScorer(const FlatBitVectorsScorer& obj) : ::java::lang::Object(obj) {}

            FlatBitVectorsScorer();

            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &, const JArray< jbyte > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &, const JArray< jfloat > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier getRandomVectorScorerSupplier(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &) const;
            ::java::lang::String toString() const;
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
        namespace bitvectors {
          extern PyType_Def PY_TYPE_DEF(FlatBitVectorsScorer);
          extern PyTypeObject *PY_TYPE(FlatBitVectorsScorer);

          class t_FlatBitVectorsScorer {
          public:
            PyObject_HEAD
            FlatBitVectorsScorer object;
            static PyObject *wrap_Object(const FlatBitVectorsScorer&);
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
