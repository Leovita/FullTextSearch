#ifndef org_apache_lucene_analysis_morph_Viterbi_H
#define org_apache_lucene_analysis_morph_Viterbi_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Reader;
    class IOException;
  }
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

          class Viterbi : public ::java::lang::Object {
           public:
            enum {
              mid_forward_e7bdbe105ce1bafb,
              mid_getPending_1387e1e2702ac173,
              mid_getPos_bd89ce15dad49192,
              mid_isEnd_9aa4f33e82ea333f,
              mid_isOutputNBest_9aa4f33e82ea333f,
              mid_resetBuffer_89ab2bee9aa84b00,
              mid_resetState_e7bdbe105ce1bafb,
              mid_processUnknownWord_60de4d958af1794d,
              mid_computeSpacePenalty_78e7c922012a9d2e,
              mid_shouldSkipProcessUnknownWord_e82e14c81431c16a,
              mid_computePenalty_7f27cf81a85a97e9,
              mid_backtraceNBest_b3c2dd675eb0765f,
              mid_fixupPendingList_e7bdbe105ce1bafb,
              mid_add_55c1d46de150e377,
              mid_backtrace_7b847b385fdfc98c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Viterbi(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Viterbi(const Viterbi& obj) : ::java::lang::Object(obj) {}

            void forward() const;
            ::java::util::List getPending() const;
            jint getPos() const;
            jboolean isEnd() const;
            jboolean isOutputNBest() const;
            void resetBuffer(const ::java::io::Reader &) const;
            void resetState() const;
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
          extern PyType_Def PY_TYPE_DEF(Viterbi);
          extern PyTypeObject *PY_TYPE(Viterbi);

          class t_Viterbi {
          public:
            PyObject_HEAD
            Viterbi object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Viterbi *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Viterbi&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Viterbi&, PyTypeObject *, PyTypeObject *);
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
