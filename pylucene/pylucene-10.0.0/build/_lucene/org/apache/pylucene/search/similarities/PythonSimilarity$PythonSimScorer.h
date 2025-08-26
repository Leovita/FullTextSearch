#ifndef org_apache_pylucene_search_similarities_PythonSimilarity$PythonSimScorer_H
#define org_apache_pylucene_search_similarities_PythonSimilarity$PythonSimScorer_H

#include "org/apache/lucene/search/similarities/Similarity$SimScorer.h"

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

          class PythonSimilarity$PythonSimScorer : public ::org::apache::lucene::search::similarities::Similarity$SimScorer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_pythonExtension_0f176418e3e16541,
              mid_pythonExtension_1d3149fac12f2af3,
              mid_score_dd526856e70b339f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSimilarity$PythonSimScorer(jobject obj) : ::org::apache::lucene::search::similarities::Similarity$SimScorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSimilarity$PythonSimScorer(const PythonSimilarity$PythonSimScorer& obj) : ::org::apache::lucene::search::similarities::Similarity$SimScorer(obj) {}

            PythonSimilarity$PythonSimScorer();

            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            jfloat score(jfloat, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonSimilarity$PythonSimScorer);
          extern PyTypeObject *PY_TYPE(PythonSimilarity$PythonSimScorer);

          class t_PythonSimilarity$PythonSimScorer {
          public:
            PyObject_HEAD
            PythonSimilarity$PythonSimScorer object;
            static PyObject *wrap_Object(const PythonSimilarity$PythonSimScorer&);
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
