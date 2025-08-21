#ifndef org_apache_lucene_search_similarities_DFISimilarity_H
#define org_apache_lucene_search_similarities_DFISimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Independence;
        }
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

          class DFISimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_06924ac279e1b342,
              mid_init$_11bcb53c7fb547f0,
              mid_getIndependence_325e14ec4b14e85b,
              mid_toString_09a7afff1868fc5e,
              mid_score_4520853cec1acecd,
              mid_explain_6430f3113e3b0626,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DFISimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DFISimilarity(const DFISimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            DFISimilarity(const ::org::apache::lucene::search::similarities::Independence &);
            DFISimilarity(const ::org::apache::lucene::search::similarities::Independence &, jboolean);

            ::org::apache::lucene::search::similarities::Independence getIndependence() const;
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
          extern PyType_Def PY_TYPE_DEF(DFISimilarity);
          extern PyTypeObject *PY_TYPE(DFISimilarity);

          class t_DFISimilarity {
          public:
            PyObject_HEAD
            DFISimilarity object;
            static PyObject *wrap_Object(const DFISimilarity&);
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
