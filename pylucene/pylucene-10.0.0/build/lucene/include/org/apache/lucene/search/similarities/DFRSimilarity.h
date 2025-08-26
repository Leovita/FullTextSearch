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
          class BasicModel;
          class AfterEffect;
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
              mid_init$_6f354abe05ffdeda,
              mid_init$_c6c71650e73537c1,
              mid_getAfterEffect_ccd73641c413bf76,
              mid_getBasicModel_8639b25a3453f1b8,
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
