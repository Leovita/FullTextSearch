#ifndef org_apache_lucene_codecs_hnsw_ScalarQuantizedVectorScorer_H
#define org_apache_lucene_codecs_hnsw_ScalarQuantizedVectorScorer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
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
        namespace hnsw {
          class RandomVectorScorerSupplier;
          class RandomVectorScorer;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {

          class ScalarQuantizedVectorScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1528c98833b309dc,
              mid_getRandomVectorScorer_1ebe787c53ff62b6,
              mid_getRandomVectorScorer_c110b05f7f5c1d6c,
              mid_getRandomVectorScorerSupplier_effa0cc5d9ffc106,
              mid_quantizeQuery_6167ef4363a985e0,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorScorer(const ScalarQuantizedVectorScorer& obj) : ::java::lang::Object(obj) {}

            ScalarQuantizedVectorScorer(const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);

            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &, const JArray< jbyte > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &, const JArray< jfloat > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier getRandomVectorScorerSupplier(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &) const;
            static jfloat quantizeQuery(const JArray< jfloat > &, const JArray< jbyte > &, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::util::quantization::ScalarQuantizer &);
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
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorScorer);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorScorer);

          class t_ScalarQuantizedVectorScorer {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorScorer object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorScorer&);
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
