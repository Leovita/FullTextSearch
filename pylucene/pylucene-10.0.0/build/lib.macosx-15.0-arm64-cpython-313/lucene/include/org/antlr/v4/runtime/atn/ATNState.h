#ifndef org_antlr_v4_runtime_atn_ATNState_H
#define org_antlr_v4_runtime_atn_ATNState_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATN;
          class Transition;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATNState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_addTransition_c51e71640d4aacd3,
              mid_addTransition_f33347ff42daac33,
              mid_equals_570b5248a6da3ef6,
              mid_getNumberOfTransitions_20fbf7565993c3d7,
              mid_getStateType_20fbf7565993c3d7,
              mid_getTransitions_1c39c967c8348547,
              mid_hashCode_20fbf7565993c3d7,
              mid_isNonGreedyExitState_947277eca0748c4e,
              mid_onlyHasEpsilonTransitions_947277eca0748c4e,
              mid_removeTransition_a48f9f0ab24566f5,
              mid_setRuleIndex_540b2b23d51b1efd,
              mid_setTransition_f33347ff42daac33,
              mid_toString_09a7afff1868fc5e,
              mid_transition_a48f9f0ab24566f5,
              max_mid
            };

            enum {
              fid_atn,
              fid_epsilonOnlyTransitions,
              fid_ruleIndex,
              fid_stateNumber,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNState(const ATNState& obj) : ::java::lang::Object(obj) {}

            static jint BASIC;
            static jint BLOCK_END;
            static jint BLOCK_START;
            static jint INITIAL_NUM_TRANSITIONS;
            static jint INVALID_STATE_NUMBER;
            static jint INVALID_TYPE;
            static jint LOOP_END;
            static jint PLUS_BLOCK_START;
            static jint PLUS_LOOP_BACK;
            static jint RULE_START;
            static jint RULE_STOP;
            static jint STAR_BLOCK_START;
            static jint STAR_LOOP_BACK;
            static jint STAR_LOOP_ENTRY;
            static jint TOKEN_START;
            static ::java::util::List *serializationNames;

            ::org::antlr::v4::runtime::atn::ATN _get_atn() const;
            void _set_atn(const ::org::antlr::v4::runtime::atn::ATN &) const;
            jboolean _get_epsilonOnlyTransitions() const;
            void _set_epsilonOnlyTransitions(jboolean) const;
            jint _get_ruleIndex() const;
            void _set_ruleIndex(jint) const;
            jint _get_stateNumber() const;
            void _set_stateNumber(jint) const;

            ATNState();

            void addTransition(const ::org::antlr::v4::runtime::atn::Transition &) const;
            void addTransition(jint, const ::org::antlr::v4::runtime::atn::Transition &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getNumberOfTransitions() const;
            jint getStateType() const;
            JArray< ::org::antlr::v4::runtime::atn::Transition > getTransitions() const;
            jint hashCode() const;
            jboolean isNonGreedyExitState() const;
            jboolean onlyHasEpsilonTransitions() const;
            ::org::antlr::v4::runtime::atn::Transition removeTransition(jint) const;
            void setRuleIndex(jint) const;
            void setTransition(jint, const ::org::antlr::v4::runtime::atn::Transition &) const;
            ::java::lang::String toString() const;
            ::org::antlr::v4::runtime::atn::Transition transition(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(ATNState);
          extern PyTypeObject *PY_TYPE(ATNState);

          class t_ATNState {
          public:
            PyObject_HEAD
            ATNState object;
            static PyObject *wrap_Object(const ATNState&);
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
