#ifndef org_antlr_v4_runtime_atn_DecisionInfo_H
#define org_antlr_v4_runtime_atn_DecisionInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ContextSensitivityInfo;
          class AmbiguityInfo;
          class LookaheadEventInfo;
          class PredicateEvalInfo;
          class ErrorInfo;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class DecisionInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_LL_ATNTransitions,
              fid_LL_DFATransitions,
              fid_LL_Fallback,
              fid_LL_MaxLook,
              fid_LL_MaxLookEvent,
              fid_LL_MinLook,
              fid_LL_TotalLook,
              fid_SLL_ATNTransitions,
              fid_SLL_DFATransitions,
              fid_SLL_MaxLook,
              fid_SLL_MaxLookEvent,
              fid_SLL_MinLook,
              fid_SLL_TotalLook,
              fid_ambiguities,
              fid_contextSensitivities,
              fid_decision,
              fid_errors,
              fid_invocations,
              fid_predicateEvals,
              fid_timeInPrediction,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DecisionInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DecisionInfo(const DecisionInfo& obj) : ::java::lang::Object(obj) {}

            jlong _get_LL_ATNTransitions() const;
            void _set_LL_ATNTransitions(jlong) const;
            jlong _get_LL_DFATransitions() const;
            void _set_LL_DFATransitions(jlong) const;
            jlong _get_LL_Fallback() const;
            void _set_LL_Fallback(jlong) const;
            jlong _get_LL_MaxLook() const;
            void _set_LL_MaxLook(jlong) const;
            ::org::antlr::v4::runtime::atn::LookaheadEventInfo _get_LL_MaxLookEvent() const;
            void _set_LL_MaxLookEvent(const ::org::antlr::v4::runtime::atn::LookaheadEventInfo &) const;
            jlong _get_LL_MinLook() const;
            void _set_LL_MinLook(jlong) const;
            jlong _get_LL_TotalLook() const;
            void _set_LL_TotalLook(jlong) const;
            jlong _get_SLL_ATNTransitions() const;
            void _set_SLL_ATNTransitions(jlong) const;
            jlong _get_SLL_DFATransitions() const;
            void _set_SLL_DFATransitions(jlong) const;
            jlong _get_SLL_MaxLook() const;
            void _set_SLL_MaxLook(jlong) const;
            ::org::antlr::v4::runtime::atn::LookaheadEventInfo _get_SLL_MaxLookEvent() const;
            void _set_SLL_MaxLookEvent(const ::org::antlr::v4::runtime::atn::LookaheadEventInfo &) const;
            jlong _get_SLL_MinLook() const;
            void _set_SLL_MinLook(jlong) const;
            jlong _get_SLL_TotalLook() const;
            void _set_SLL_TotalLook(jlong) const;
            ::java::util::List _get_ambiguities() const;
            ::java::util::List _get_contextSensitivities() const;
            jint _get_decision() const;
            ::java::util::List _get_errors() const;
            jlong _get_invocations() const;
            void _set_invocations(jlong) const;
            ::java::util::List _get_predicateEvals() const;
            jlong _get_timeInPrediction() const;
            void _set_timeInPrediction(jlong) const;

            DecisionInfo(jint);

            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(DecisionInfo);
          extern PyTypeObject *PY_TYPE(DecisionInfo);

          class t_DecisionInfo {
          public:
            PyObject_HEAD
            DecisionInfo object;
            static PyObject *wrap_Object(const DecisionInfo&);
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
