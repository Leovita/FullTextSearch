#ifndef org_apache_pylucene_search_similarities_PythonSimilarity_H
#define org_apache_pylucene_search_similarities_PythonSimilarity_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_computeNorm_a143744c49fd06c4,
              mid_pythonExtension_0f176418e3e16541,
              mid_pythonExtension_1d3149fac12f2af3,
              mid_scorer_556ce9e7c1c4eb6a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSimilarity(const PythonSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            PythonSimilarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
    namespace pylucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(PythonSimilarity);
          extern PyTypeObject *PY_TYPE(PythonSimilarity);

          class t_PythonSimilarity {
          public:
            PyObject_HEAD
            PythonSimilarity object;
            static PyObject *wrap_Object(const PythonSimilarity&);
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
