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
              mid_getLatticeRootBase_20fbf7565993c3d7,
              mid_probeDelta_7f733b5d08bb5ec4,
              mid_registerNode_1fa292cafad34d61,
              mid_setNBestCost_540b2b23d51b1efd,
              mid_getNBestCost_20fbf7565993c3d7,
              mid_backtraceNBest_5408f3a21e1fd37c,
              mid_fixupPendingList_3720c61b0679eb3e,
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
