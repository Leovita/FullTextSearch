#ifndef org_apache_lucene_analysis_morph_Viterbi_H
#define org_apache_lucene_analysis_morph_Viterbi_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace util {
    class List;
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
              mid_forward_3720c61b0679eb3e,
              mid_getPending_36830460e10839eb,
              mid_getPos_20fbf7565993c3d7,
              mid_isEnd_947277eca0748c4e,
              mid_isOutputNBest_947277eca0748c4e,
              mid_resetBuffer_fa55492f0f5d7f31,
              mid_resetState_3720c61b0679eb3e,
              mid_processUnknownWord_a80e9d10d06979c3,
              mid_computeSpacePenalty_ecf5b7d8b78229e2,
              mid_backtraceNBest_5408f3a21e1fd37c,
              mid_fixupPendingList_3720c61b0679eb3e,
              mid_shouldSkipProcessUnknownWord_0c82fb5f8b68a6e8,
              mid_computePenalty_7f733b5d08bb5ec4,
              mid_add_47d0a1eb36b1b925,
              mid_backtrace_8ab20864cf298f85,
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
