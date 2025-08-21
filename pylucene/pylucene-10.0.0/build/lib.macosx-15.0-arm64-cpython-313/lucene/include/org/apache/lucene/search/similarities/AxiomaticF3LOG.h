#ifndef org_apache_lucene_search_similarities_AxiomaticF3LOG_H
#define org_apache_lucene_search_similarities_AxiomaticF3LOG_H

#include "org/apache/lucene/search/similarities/Axiomatic.h"

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

          class AxiomaticF3LOG : public ::org::apache::lucene::search::similarities::Axiomatic {
           public:
            enum {
              mid_init$_7f788b790e3ecc38,
              mid_toString_09a7afff1868fc5e,
              mid_idfExplain_9818494c02db3b22,
              mid_idf_4520853cec1acecd,
              mid_gamma_4520853cec1acecd,
              mid_tf_4520853cec1acecd,
              mid_tfln_4520853cec1acecd,
              mid_tfExplain_9818494c02db3b22,
              mid_lnExplain_9818494c02db3b22,
              mid_tflnExplain_9818494c02db3b22,
              mid_ln_4520853cec1acecd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AxiomaticF3LOG(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF3LOG(const AxiomaticF3LOG& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF3LOG(jfloat, jint);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF3LOG);
          extern PyTypeObject *PY_TYPE(AxiomaticF3LOG);

          class t_AxiomaticF3LOG {
          public:
            PyObject_HEAD
            AxiomaticF3LOG object;
            static PyObject *wrap_Object(const AxiomaticF3LOG&);
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
