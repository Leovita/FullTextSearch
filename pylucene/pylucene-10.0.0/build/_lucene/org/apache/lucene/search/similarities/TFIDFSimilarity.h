#ifndef org_apache_lucene_search_similarities_TFIDFSimilarity_H
#define org_apache_lucene_search_similarities_TFIDFSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace java {
  namespace lang {
    class Class;
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
        class Explanation;
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

          class TFIDFSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_b110fc3a58c081ab,
              mid_idf_080f674c1bc73c17,
              mid_idfExplain_ab8a1aa08a5185a2,
              mid_idfExplain_fd480d4fa493711e,
              mid_lengthNorm_29cfa01aaad92564,
              mid_scorer_67d67592415704df,
              mid_tf_8fa359a2bc20a127,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TFIDFSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TFIDFSimilarity(const TFIDFSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            TFIDFSimilarity();
            TFIDFSimilarity(jboolean);

            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat lengthNorm(jint) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat tf(jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(TFIDFSimilarity);
          extern PyTypeObject *PY_TYPE(TFIDFSimilarity);

          class t_TFIDFSimilarity {
          public:
            PyObject_HEAD
            TFIDFSimilarity object;
            static PyObject *wrap_Object(const TFIDFSimilarity&);
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
