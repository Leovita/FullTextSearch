#ifndef org_apache_lucene_search_similarities_BM25Similarity_H
#define org_apache_lucene_search_similarities_BM25Similarity_H

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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class BM25Similarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_init$_cb7687d0612879b8,
              mid_init$_bd3193681f5d747e,
              mid_getB_8b62236f0e4d0dbc,
              mid_getK1_8b62236f0e4d0dbc,
              mid_idfExplain_684e0a1764dc292f,
              mid_idfExplain_9cf8582f72982b4d,
              mid_scorer_556ce9e7c1c4eb6a,
              mid_toString_e7df854526d67fa3,
              mid_avgFieldLength_76c0f2cd78d86449,
              mid_idf_49931e962a3f57e4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BM25Similarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BM25Similarity(const BM25Similarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            BM25Similarity();
            BM25Similarity(jboolean);
            BM25Similarity(jfloat, jfloat);
            BM25Similarity(jfloat, jfloat, jboolean);

            jfloat getB() const;
            jfloat getK1() const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyType_Def PY_TYPE_DEF(BM25Similarity);
          extern PyTypeObject *PY_TYPE(BM25Similarity);

          class t_BM25Similarity {
          public:
            PyObject_HEAD
            BM25Similarity object;
            static PyObject *wrap_Object(const BM25Similarity&);
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
