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
              mid_init$_3720c61b0679eb3e,
              mid_init$_c771a95b0227fb6a,
              mid_init$_7f788b790e3ecc38,
              mid_init$_c634c2d756205dd5,
              mid_init$_5c1ef618db3729d1,
              mid_score_4520853cec1acecd,
              mid_toString_09a7afff1868fc5e,
              mid_idfExplain_9818494c02db3b22,
              mid_idf_4520853cec1acecd,
              mid_gamma_4520853cec1acecd,
              mid_tf_4520853cec1acecd,
              mid_tfln_4520853cec1acecd,
              mid_tfExplain_9818494c02db3b22,
              mid_lnExplain_9818494c02db3b22,
              mid_tflnExplain_9818494c02db3b22,
              mid_explain_6430f3113e3b0626,
              mid_explain_6fdabb12cf56abb7,
              mid_ln_4520853cec1acecd,
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
