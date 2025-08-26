#ifndef org_apache_lucene_search_similarities_RawTFSimilarity_H
#define org_apache_lucene_search_similarities_RawTFSimilarity_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class RawTFSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_scorer_556ce9e7c1c4eb6a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RawTFSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RawTFSimilarity(const RawTFSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            RawTFSimilarity();
            RawTFSimilarity(jboolean);

            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyType_Def PY_TYPE_DEF(RawTFSimilarity);
          extern PyTypeObject *PY_TYPE(RawTFSimilarity);

          class t_RawTFSimilarity {
          public:
            PyObject_HEAD
            RawTFSimilarity object;
            static PyObject *wrap_Object(const RawTFSimilarity&);
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
