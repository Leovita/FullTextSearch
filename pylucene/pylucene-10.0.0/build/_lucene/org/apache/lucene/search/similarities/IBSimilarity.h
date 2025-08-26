#ifndef org_apache_lucene_search_similarities_IBSimilarity_H
#define org_apache_lucene_search_similarities_IBSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Distribution;
          class Lambda;
          class Normalization;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class IBSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_b3bdb8565f5b3eb0,
              mid_init$_f89315c2be978839,
              mid_getDistribution_d31aee6381202fb0,
              mid_getLambda_49d81afe9bf36149,
              mid_getNormalization_ca18619fc3dbc413,
              mid_toString_e7df854526d67fa3,
              mid_explain_3a0f0db458486fc7,
              mid_explain_d24b72d1a2a90408,
              mid_score_45900529809cd3f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IBSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IBSimilarity(const IBSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            IBSimilarity(const ::org::apache::lucene::search::similarities::Distribution &, const ::org::apache::lucene::search::similarities::Lambda &, const ::org::apache::lucene::search::similarities::Normalization &);
            IBSimilarity(const ::org::apache::lucene::search::similarities::Distribution &, const ::org::apache::lucene::search::similarities::Lambda &, const ::org::apache::lucene::search::similarities::Normalization &, jboolean);

            ::org::apache::lucene::search::similarities::Distribution getDistribution() const;
            ::org::apache::lucene::search::similarities::Lambda getLambda() const;
            ::org::apache::lucene::search::similarities::Normalization getNormalization() const;
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
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(IBSimilarity);
          extern PyTypeObject *PY_TYPE(IBSimilarity);

          class t_IBSimilarity {
          public:
            PyObject_HEAD
            IBSimilarity object;
            static PyObject *wrap_Object(const IBSimilarity&);
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
