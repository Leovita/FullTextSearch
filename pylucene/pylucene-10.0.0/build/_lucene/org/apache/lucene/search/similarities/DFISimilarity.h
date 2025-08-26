#ifndef org_apache_lucene_search_similarities_DFISimilarity_H
#define org_apache_lucene_search_similarities_DFISimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_init$_916549feb8ac6e85,
              mid_init$_f759c2b5430607d9,
              mid_getIndependence_716232eae1cfd919,
              mid_toString_e7df854526d67fa3,
              mid_explain_3a0f0db458486fc7,
              mid_score_45900529809cd3f1,
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
