#ifndef org_apache_lucene_codecs_hnsw_FlatVectorsScorer_H
#define org_apache_lucene_codecs_hnsw_FlatVectorsScorer_H

#include "java/lang/Object.h"

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
      namespace index {
        class VectorSimilarityFunction;
        class KnnVectorValues;
      }
      namespace util {
        namespace hnsw {
          class RandomVectorScorerSupplier;
          class RandomVectorScorer;
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

          class FlatVectorsScorer : public ::java::lang::Object {
           public:
            enum {
              mid_getRandomVectorScorer_1ebe787c53ff62b6,
              mid_getRandomVectorScorer_c110b05f7f5c1d6c,
              mid_getRandomVectorScorerSupplier_effa0cc5d9ffc106,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatVectorsScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatVectorsScorer(const FlatVectorsScorer& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &, const JArray< jbyte > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &, const JArray< jfloat > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier getRandomVectorScorerSupplier(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::index::KnnVectorValues &) const;
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
          extern PyType_Def PY_TYPE_DEF(FlatVectorsScorer);
          extern PyTypeObject *PY_TYPE(FlatVectorsScorer);

          class t_FlatVectorsScorer {
          public:
            PyObject_HEAD
            FlatVectorsScorer object;
            static PyObject *wrap_Object(const FlatVectorsScorer&);
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
