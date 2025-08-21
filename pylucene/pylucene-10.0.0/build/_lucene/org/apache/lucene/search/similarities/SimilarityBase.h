#ifndef org_apache_lucene_search_similarities_SimilarityBase_H
#define org_apache_lucene_search_similarities_SimilarityBase_H

#include "org/apache/lucene/search/similarities/Similarity.h"

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
        class CollectionStatistics;
        namespace similarities {
          class Similarity$SimScorer;
        }
        class TermStatistics;
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

          class SimilarityBase : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_b110fc3a58c081ab,
              mid_log2_8fff3d7dcb9fddc5,
              mid_scorer_67d67592415704df,
              mid_toString_09a7afff1868fc5e,
              mid_score_4520853cec1acecd,
              mid_fillBasicStats_1a0c84f82cdc2914,
              mid_newStats_5a081c6c899495a8,
              mid_explain_6430f3113e3b0626,
              mid_explain_6fdabb12cf56abb7,
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
