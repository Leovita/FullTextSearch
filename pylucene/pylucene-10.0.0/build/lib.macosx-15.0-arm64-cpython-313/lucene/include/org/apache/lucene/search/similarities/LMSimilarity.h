#ifndef org_apache_lucene_search_similarities_LMSimilarity_H
#define org_apache_lucene_search_similarities_LMSimilarity_H

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

          class LMSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_43e3c7356b0f7a3f,
              mid_init$_8d24c154f302c7d8,
              mid_getName_09a7afff1868fc5e,
              mid_toString_09a7afff1868fc5e,
              mid_fillBasicStats_1a0c84f82cdc2914,
              mid_newStats_5a081c6c899495a8,
              mid_explain_6fdabb12cf56abb7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity(const LMSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            LMSimilarity();
            LMSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);
            LMSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jboolean);

            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(LMSimilarity);
          extern PyTypeObject *PY_TYPE(LMSimilarity);

          class t_LMSimilarity {
          public:
            PyObject_HEAD
            LMSimilarity object;
            static PyObject *wrap_Object(const LMSimilarity&);
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
