#ifndef org_apache_lucene_search_similarities_PerFieldSimilarityWrapper_H
#define org_apache_lucene_search_similarities_PerFieldSimilarityWrapper_H

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
      namespace index {
        class FieldInvertState;
      }
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

          class PerFieldSimilarityWrapper : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_computeNorm_db45ef174ecfac03,
              mid_get_03561bffe6d54ad3,
              mid_scorer_67d67592415704df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldSimilarityWrapper(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldSimilarityWrapper(const PerFieldSimilarityWrapper& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            PerFieldSimilarityWrapper();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity get(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(PerFieldSimilarityWrapper);
          extern PyTypeObject *PY_TYPE(PerFieldSimilarityWrapper);

          class t_PerFieldSimilarityWrapper {
          public:
            PyObject_HEAD
            PerFieldSimilarityWrapper object;
            static PyObject *wrap_Object(const PerFieldSimilarityWrapper&);
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
