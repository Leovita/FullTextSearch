#ifndef org_antlr_v4_runtime_atn_TokensStartState_H
#define org_antlr_v4_runtime_atn_TokensStartState_H

#include "org/antlr/v4/runtime/atn/DecisionState.h"

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

          class TokensStartState : public ::org::antlr::v4::runtime::atn::DecisionState {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_getStateType_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokensStartState(jobject obj) : ::org::antlr::v4::runtime::atn::DecisionState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokensStartState(const TokensStartState& obj) : ::org::antlr::v4::runtime::atn::DecisionState(obj) {}

            TokensStartState();

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
          extern PyType_Def PY_TYPE_DEF(TokensStartState);
          extern PyTypeObject *PY_TYPE(TokensStartState);

          class t_TokensStartState {
          public:
            PyObject_HEAD
            TokensStartState object;
            static PyObject *wrap_Object(const TokensStartState&);
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
