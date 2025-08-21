#ifndef org_apache_lucene_search_similarities_BooleanSimilarity_H
#define org_apache_lucene_search_similarities_BooleanSimilarity_H

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

          class BooleanSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_scorer_67d67592415704df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BooleanSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BooleanSimilarity(const BooleanSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            BooleanSimilarity();

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
          extern PyType_Def PY_TYPE_DEF(BooleanSimilarity);
          extern PyTypeObject *PY_TYPE(BooleanSimilarity);

          class t_BooleanSimilarity {
          public:
            PyObject_HEAD
            BooleanSimilarity object;
            static PyObject *wrap_Object(const BooleanSimilarity&);
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
