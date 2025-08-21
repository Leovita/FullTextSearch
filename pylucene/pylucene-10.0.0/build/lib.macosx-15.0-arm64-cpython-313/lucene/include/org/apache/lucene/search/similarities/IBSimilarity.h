#ifndef org_apache_lucene_search_similarities_IBSimilarity_H
#define org_apache_lucene_search_similarities_IBSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Distribution;
          class Normalization;
          class Lambda;
        }
      }
    }
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
              mid_init$_24d0301cd8467330,
              mid_init$_10509b079786eaeb,
              mid_getDistribution_1c5a287c2628eff0,
              mid_getLambda_ed5c1cdd08c5df2e,
              mid_getNormalization_07b38a3f3e70ebe0,
              mid_toString_09a7afff1868fc5e,
              mid_score_4520853cec1acecd,
              mid_explain_6430f3113e3b0626,
              mid_explain_6fdabb12cf56abb7,
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
