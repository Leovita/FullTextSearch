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
              mid_init$_3720c61b0679eb3e,
              mid_init$_c771a95b0227fb6a,
              mid_init$_43e3c7356b0f7a3f,
              mid_init$_a0331dd30c42d9f7,
              mid_init$_fa404e473c6bd9cf,
              mid_getMu_9b6c3480dac00edf,
              mid_getName_09a7afff1868fc5e,
              mid_score_4520853cec1acecd,
              mid_explain_6fdabb12cf56abb7,
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
