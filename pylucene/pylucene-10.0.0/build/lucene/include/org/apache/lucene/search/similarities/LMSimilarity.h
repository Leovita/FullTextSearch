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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_9b2dcc6d140f3718,
              mid_init$_0f80458321b28ae0,
              mid_getName_e7df854526d67fa3,
              mid_toString_e7df854526d67fa3,
              mid_newStats_358043c9fa641a0b,
              mid_fillBasicStats_ec1d687160c8fb27,
              mid_explain_d24b72d1a2a90408,
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
