#ifndef org_apache_lucene_search_similarities_SimilarityBase_H
#define org_apache_lucene_search_similarities_SimilarityBase_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TermStatistics;
        class CollectionStatistics;
        namespace similarities {
          class Similarity$SimScorer;
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

          class SimilarityBase : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_log2_8493a5edcb36d651,
              mid_scorer_556ce9e7c1c4eb6a,
              mid_toString_e7df854526d67fa3,
              mid_newStats_358043c9fa641a0b,
              mid_fillBasicStats_ec1d687160c8fb27,
              mid_explain_3a0f0db458486fc7,
              mid_explain_d24b72d1a2a90408,
              mid_score_45900529809cd3f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimilarityBase(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimilarityBase(const SimilarityBase& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            SimilarityBase();
            SimilarityBase(jboolean);

            static jdouble log2(jdouble);
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimilarityBase);
          extern PyTypeObject *PY_TYPE(SimilarityBase);

          class t_SimilarityBase {
          public:
            PyObject_HEAD
            SimilarityBase object;
            static PyObject *wrap_Object(const SimilarityBase&);
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
