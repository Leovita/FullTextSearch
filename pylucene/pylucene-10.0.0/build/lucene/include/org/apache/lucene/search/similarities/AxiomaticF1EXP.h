#ifndef org_apache_lucene_search_similarities_AxiomaticF1EXP_H
#define org_apache_lucene_search_similarities_AxiomaticF1EXP_H

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

          class AxiomaticF1EXP : public ::org::apache::lucene::search::similarities::Axiomatic {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_c771a95b0227fb6a,
              mid_init$_13cb7e72f513d797,
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

            explicit AxiomaticF1EXP(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF1EXP(const AxiomaticF1EXP& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF1EXP();
            AxiomaticF1EXP(jfloat);
            AxiomaticF1EXP(jfloat, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF1EXP);
          extern PyTypeObject *PY_TYPE(AxiomaticF1EXP);

          class t_AxiomaticF1EXP {
          public:
            PyObject_HEAD
            AxiomaticF1EXP object;
            static PyObject *wrap_Object(const AxiomaticF1EXP&);
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
