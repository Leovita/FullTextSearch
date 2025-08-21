#ifndef org_antlr_v4_runtime_atn_RuleStopState_H
#define org_antlr_v4_runtime_atn_RuleStopState_H

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

          class RuleStopState : public ::org::antlr::v4::runtime::atn::ATNState {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_getStateType_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RuleStopState(jobject obj) : ::org::antlr::v4::runtime::atn::ATNState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RuleStopState(const RuleStopState& obj) : ::org::antlr::v4::runtime::atn::ATNState(obj) {}

            RuleStopState();

            jint getStateType() const;
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
          extern PyType_Def PY_TYPE_DEF(RuleStopState);
          extern PyTypeObject *PY_TYPE(RuleStopState);

          class t_RuleStopState {
          public:
            PyObject_HEAD
            RuleStopState object;
            static PyObject *wrap_Object(const RuleStopState&);
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
