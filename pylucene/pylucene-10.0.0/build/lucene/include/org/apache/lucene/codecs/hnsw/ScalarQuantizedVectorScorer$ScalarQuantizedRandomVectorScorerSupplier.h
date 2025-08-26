#ifndef org_apache_lucene_codecs_hnsw_ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier_H
#define org_apache_lucene_codecs_hnsw_ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
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
          class QuantizedByteVectorValues;
        }
        namespace hnsw {
          class RandomVectorScorerSupplier;
          class RandomVectorScorer;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
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

          class ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e3c6741af431cb02,
              mid_copy_493381e923a32bb9,
              mid_scorer_9d51031d4ab961d5,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier(const ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier& obj) : ::java::lang::Object(obj) {}

            ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::util::quantization::ScalarQuantizer &, const ::org::apache::lucene::util::quantization::QuantizedByteVectorValues &);

            ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier copy() const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer scorer(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier);

          class t_ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier&);
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
