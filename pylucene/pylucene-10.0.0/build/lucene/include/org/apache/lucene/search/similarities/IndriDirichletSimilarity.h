#ifndef org_apache_lucene_search_similarities_IndriDirichletSimilarity_H
#define org_apache_lucene_search_similarities_IndriDirichletSimilarity_H

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

          class IndriDirichletSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_675f4cb9a2529ee0,
              mid_init$_9b2dcc6d140f3718,
              mid_init$_d8751200c464e662,
              mid_init$_00be38e55d5e9c2f,
              mid_getMu_8b62236f0e4d0dbc,
              mid_getName_e7df854526d67fa3,
              mid_explain_d24b72d1a2a90408,
              mid_score_45900529809cd3f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndriDirichletSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndriDirichletSimilarity(const IndriDirichletSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            IndriDirichletSimilarity();
            IndriDirichletSimilarity(jfloat);
            IndriDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);
            IndriDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);
            IndriDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jboolean, jfloat);

            jfloat getMu() const;
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
          extern PyType_Def PY_TYPE_DEF(IndriDirichletSimilarity);
          extern PyTypeObject *PY_TYPE(IndriDirichletSimilarity);

          class t_IndriDirichletSimilarity {
          public:
            PyObject_HEAD
            IndriDirichletSimilarity object;
            static PyObject *wrap_Object(const IndriDirichletSimilarity&);
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
