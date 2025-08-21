#ifndef org_apache_lucene_search_similarities_BM25Similarity_H
#define org_apache_lucene_search_similarities_BM25Similarity_H

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

          class BM25Similarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_b110fc3a58c081ab,
              mid_init$_13cb7e72f513d797,
              mid_init$_7fd9de174e6f9e9b,
              mid_getB_9b6c3480dac00edf,
              mid_getK1_9b6c3480dac00edf,
              mid_idfExplain_ab8a1aa08a5185a2,
              mid_idfExplain_fd480d4fa493711e,
              mid_scorer_67d67592415704df,
              mid_toString_09a7afff1868fc5e,
              mid_avgFieldLength_6458350086f47b00,
              mid_idf_080f674c1bc73c17,
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
