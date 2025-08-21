#ifndef org_apache_lucene_search_similarities_DFRSimilarity_H
#define org_apache_lucene_search_similarities_DFRSimilarity_H

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
          class AfterEffect;
          class BasicModel;
          class Normalization;
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

          class DFRSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_bdf55b76f7d61053,
              mid_init$_c18421d3abef070b,
              mid_getAfterEffect_8abddab41823f5bb,
              mid_getBasicModel_57076d6fa86a08f6,
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

            explicit DFRSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DFRSimilarity(const DFRSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            DFRSimilarity(const ::org::apache::lucene::search::similarities::BasicModel &, const ::org::apache::lucene::search::similarities::AfterEffect &, const ::org::apache::lucene::search::similarities::Normalization &);
            DFRSimilarity(const ::org::apache::lucene::search::similarities::BasicModel &, const ::org::apache::lucene::search::similarities::AfterEffect &, const ::org::apache::lucene::search::similarities::Normalization &, jboolean);

            ::org::apache::lucene::search::similarities::AfterEffect getAfterEffect() const;
            ::org::apache::lucene::search::similarities::BasicModel getBasicModel() const;
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
          extern PyType_Def PY_TYPE_DEF(DFRSimilarity);
          extern PyTypeObject *PY_TYPE(DFRSimilarity);

          class t_DFRSimilarity {
          public:
            PyObject_HEAD
            DFRSimilarity object;
            static PyObject *wrap_Object(const DFRSimilarity&);
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
