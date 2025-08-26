#ifndef org_apache_lucene_search_similarities_PerFieldSimilarityWrapper_H
#define org_apache_lucene_search_similarities_PerFieldSimilarityWrapper_H

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
      namespace index {
        class FieldInvertState;
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

          class PerFieldSimilarityWrapper : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_computeNorm_a143744c49fd06c4,
              mid_get_98a9e8cb8b47131c,
              mid_scorer_556ce9e7c1c4eb6a,
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
