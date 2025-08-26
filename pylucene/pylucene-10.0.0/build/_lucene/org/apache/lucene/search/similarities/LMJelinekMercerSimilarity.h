#ifndef org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H
#define org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H

#include "org/apache/lucene/search/similarities/LMSimilarity.h"

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
          class LMSimilarity$CollectionModel;
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

          class LMJelinekMercerSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
           public:
            enum {
              mid_init$_675f4cb9a2529ee0,
              mid_init$_d8751200c464e662,
              mid_init$_00be38e55d5e9c2f,
              mid_getLambda_8b62236f0e4d0dbc,
              mid_getName_e7df854526d67fa3,
              mid_explain_3a0f0db458486fc7,
              mid_explain_d24b72d1a2a90408,
              mid_score_45900529809cd3f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMJelinekMercerSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMJelinekMercerSimilarity(const LMJelinekMercerSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            LMJelinekMercerSimilarity(jfloat);
            LMJelinekMercerSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);
            LMJelinekMercerSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jboolean, jfloat);

            jfloat getLambda() const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(LMJelinekMercerSimilarity);
          extern PyTypeObject *PY_TYPE(LMJelinekMercerSimilarity);

          class t_LMJelinekMercerSimilarity {
          public:
            PyObject_HEAD
            LMJelinekMercerSimilarity object;
            static PyObject *wrap_Object(const LMJelinekMercerSimilarity&);
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
