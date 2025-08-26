#ifndef org_apache_lucene_search_similarities_AxiomaticF1LOG_H
#define org_apache_lucene_search_similarities_AxiomaticF1LOG_H

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

          class AxiomaticF1LOG : public ::org::apache::lucene::search::similarities::Axiomatic {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_675f4cb9a2529ee0,
              mid_toString_e7df854526d67fa3,
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

            explicit AxiomaticF1LOG(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF1LOG(const AxiomaticF1LOG& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF1LOG();
            AxiomaticF1LOG(jfloat);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF1LOG);
          extern PyTypeObject *PY_TYPE(AxiomaticF1LOG);

          class t_AxiomaticF1LOG {
          public:
            PyObject_HEAD
            AxiomaticF1LOG object;
            static PyObject *wrap_Object(const AxiomaticF1LOG&);
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
