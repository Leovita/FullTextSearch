#ifndef org_apache_lucene_search_similarities_AxiomaticF2EXP_H
#define org_apache_lucene_search_similarities_AxiomaticF2EXP_H

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

          class AxiomaticF2EXP : public ::org::apache::lucene::search::similarities::Axiomatic {
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

            explicit AxiomaticF2EXP(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF2EXP(const AxiomaticF2EXP& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF2EXP();
            AxiomaticF2EXP(jfloat);
            AxiomaticF2EXP(jfloat, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF2EXP);
          extern PyTypeObject *PY_TYPE(AxiomaticF2EXP);

          class t_AxiomaticF2EXP {
          public:
            PyObject_HEAD
            AxiomaticF2EXP object;
            static PyObject *wrap_Object(const AxiomaticF2EXP&);
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
