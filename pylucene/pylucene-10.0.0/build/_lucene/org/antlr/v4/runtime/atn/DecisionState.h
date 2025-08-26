#ifndef org_antlr_v4_runtime_atn_DecisionState_H
#define org_antlr_v4_runtime_atn_DecisionState_H

#include "org/antlr/v4/runtime/atn/ATNState.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class DecisionState : public ::org::antlr::v4::runtime::atn::ATNState {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              max_mid
            };

            enum {
              fid_decision,
              fid_nonGreedy,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DecisionState(jobject obj) : ::org::antlr::v4::runtime::atn::ATNState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DecisionState(const DecisionState& obj) : ::org::antlr::v4::runtime::atn::ATNState(obj) {}

            jint _get_decision() const;
            void _set_decision(jint) const;
            jboolean _get_nonGreedy() const;
            void _set_nonGreedy(jboolean) const;

            DecisionState();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(DecisionState);
          extern PyTypeObject *PY_TYPE(DecisionState);

          class t_DecisionState {
          public:
            PyObject_HEAD
            DecisionState object;
            static PyObject *wrap_Object(const DecisionState&);
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
