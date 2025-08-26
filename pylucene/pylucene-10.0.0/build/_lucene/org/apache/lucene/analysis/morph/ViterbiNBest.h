#ifndef org_apache_lucene_analysis_morph_ViterbiNBest_H
#define org_apache_lucene_analysis_morph_ViterbiNBest_H

#include "org/apache/lucene/analysis/morph/Viterbi.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class ViterbiNBest : public ::org::apache::lucene::analysis::morph::Viterbi {
           public:
            enum {
              mid_getLatticeRootBase_bd89ce15dad49192,
              mid_probeDelta_7f27cf81a85a97e9,
              mid_getNBestCost_bd89ce15dad49192,
              mid_setNBestCost_8226bd0b0fc13dba,
              mid_backtraceNBest_b3c2dd675eb0765f,
              mid_fixupPendingList_e7bdbe105ce1bafb,
              mid_registerNode_2e9665167dfbf95f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ViterbiNBest(jobject obj) : ::org::apache::lucene::analysis::morph::Viterbi(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ViterbiNBest(const ViterbiNBest& obj) : ::org::apache::lucene::analysis::morph::Viterbi(obj) {}

            jint getLatticeRootBase() const;
            jint probeDelta(jint, jint) const;
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
      namespace analysis {
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(ViterbiNBest);
          extern PyTypeObject *PY_TYPE(ViterbiNBest);

          class t_ViterbiNBest {
          public:
            PyObject_HEAD
            ViterbiNBest object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_ViterbiNBest *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ViterbiNBest&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ViterbiNBest&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
