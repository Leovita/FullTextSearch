#ifndef org_apache_lucene_search_similarities_Axiomatic_H
#define org_apache_lucene_search_similarities_Axiomatic_H

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
          class BasicStats;
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

          class Axiomatic : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_675f4cb9a2529ee0,
              mid_init$_984811d1f83e2eef,
              mid_init$_89d272b5c79bf1ad,
              mid_init$_be02732b55bfeb0b,
              mid_score_45900529809cd3f1,
              mid_toString_e7df854526d67fa3,
              mid_explain_3a0f0db458486fc7,
              mid_explain_d24b72d1a2a90408,
              mid_tf_45900529809cd3f1,
              mid_tfln_45900529809cd3f1,
              mid_idf_45900529809cd3f1,
              mid_gamma_45900529809cd3f1,
              mid_tfExplain_e4c25e99aedac7d3,
              mid_lnExplain_e4c25e99aedac7d3,
              mid_tflnExplain_e4c25e99aedac7d3,
              mid_idfExplain_e4c25e99aedac7d3,
              mid_ln_45900529809cd3f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Axiomatic(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Axiomatic(const Axiomatic& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            Axiomatic();
            Axiomatic(jfloat);
            Axiomatic(jfloat, jint);
            Axiomatic(jfloat, jint, jfloat);
            Axiomatic(jboolean, jfloat, jint, jfloat);

            jdouble score(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(Axiomatic);
          extern PyTypeObject *PY_TYPE(Axiomatic);

          class t_Axiomatic {
          public:
            PyObject_HEAD
            Axiomatic object;
            static PyObject *wrap_Object(const Axiomatic&);
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
