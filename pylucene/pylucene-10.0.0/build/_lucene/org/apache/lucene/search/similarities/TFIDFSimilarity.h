#ifndef org_apache_lucene_search_similarities_TFIDFSimilarity_H
#define org_apache_lucene_search_similarities_TFIDFSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_idf_49931e962a3f57e4,
              mid_idfExplain_684e0a1764dc292f,
              mid_idfExplain_9cf8582f72982b4d,
              mid_lengthNorm_5873a23b935a9d49,
              mid_scorer_556ce9e7c1c4eb6a,
              mid_tf_760c23641efab431,
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
