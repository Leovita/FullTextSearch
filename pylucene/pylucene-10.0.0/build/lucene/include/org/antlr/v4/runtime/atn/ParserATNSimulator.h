#ifndef org_antlr_v4_runtime_atn_ParserATNSimulator_H
#define org_antlr_v4_runtime_atn_ParserATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenStream;
        class Parser;
        namespace atn {
          class PredictionMode;
          class ATN;
          class PrecedencePredicateTransition;
          class ATNConfig;
        }
        class NoViableAltException;
        class ParserRuleContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ParserATNSimulator : public ::org::antlr::v4::runtime::atn::ATNSimulator {
           public:
            enum {
              mid_adaptivePredict_12b1c8e21827aa0e,
              mid_clearDFA_3720c61b0679eb3e,
              mid_dumpDeadEndConfigs_168b6067edbe7eb1,
              mid_getLookaheadName_b9e15a4a8d7d1d55,
              mid_getParser_c5430960287b2368,
              mid_getPredictionMode_d426f2eb066dc617,
              mid_getRuleName_cd8436557ab831f9,
              mid_getSafeEnv_cb0eb1432185fc94,
              mid_getTokenName_cd8436557ab831f9,
              mid_precedenceTransition_2a7f350e45f1da7d,
              mid_reset_3720c61b0679eb3e,
              mid_setPredictionMode_9f4644c314c9a186,
              mid_reportAmbiguity_3a3363f43d42bafe,
              mid_reportAttemptingFullContext_8de98c3c46deafdf,
              mid_reportContextSensitivity_6d548c6057643b60,
              mid_getExistingTargetState_921945ff8f30a545,
              mid_computeTargetState_0c7e50815af077b9,
              mid_computeReachSet_01b4ad33b0bec0ca,
              mid_evalSemanticContext_ff62547a28a12d21,
              mid_evalSemanticContext_4c1865a63509fd50,
              mid_execATN_59974ddc639035b4,
              mid_predicateDFAState_44b12a57ba39d6e0,
              mid_execATNWithFullContext_1783472220d8add0,
              mid_removeAllConfigsNotInRuleStopState_a7d263ada8d62003,
              mid_computeStartState_6fe7fb8d165e2994,
              mid_applyPrecedenceFilter_8566bbc66e5e0e3c,
              mid_getReachableTarget_23bdb8817045ffec,
              mid_getPredsForAmbigAlts_90ed73e27d4eb113,
              mid_getPredicatePredictions_7496d93f980f90e2,
              mid_getSynValidOrSemInvalidAltThatFinishedDecisionEntryRule_61ac1f38b8ef3e1f,
              mid_getAltThatFinishedDecisionEntryRule_a3f926727737eb34,
              mid_splitAccordingToSemanticValidity_e7244d4f8389914f,
              mid_closureCheckingStopState_0c08d69d37ef5ddc,
              mid_closure__0c08d69d37ef5ddc,
              mid_canDropLoopEntryEdgeInLeftRecursiveRule_1274b529738a1c30,
              mid_getEpsilonTarget_ca3db82ad6b962af,
              mid_actionTransition_6ec6ddad0a724730,
              mid_predTransition_9bbb639ebb10a795,
              mid_ruleTransition_24216cb0e09a0386,
              mid_getConflictingAlts_69ac9839d1e36164,
              mid_getConflictingAltsOrUniqueAlt_69ac9839d1e36164,
              mid_noViableAlt_d9e1f768c347a349,
              mid_getUniqueAlt_a3f926727737eb34,
              mid_addDFAEdge_5ebf25eb7eec3172,
              mid_addDFAState_b83e6eeb191998ab,
              mid_closure_9a80b5ba43cd7ff4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParserATNSimulator(const ParserATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {}

            static jboolean TURN_OFF_LR_LOOP_ENTRY_BRANCH_OPT;
            static jboolean debug;
            static jboolean debug_list_atn_decisions;
            static jboolean dfa_debug;
            static jboolean retry_debug;

            jint adaptivePredict(const ::org::antlr::v4::runtime::TokenStream &, jint, const ::org::antlr::v4::runtime::ParserRuleContext &) const;
            void clearDFA() const;
            void dumpDeadEndConfigs(const ::org::antlr::v4::runtime::NoViableAltException &) const;
            ::java::lang::String getLookaheadName(const ::org::antlr::v4::runtime::TokenStream &) const;
            ::org::antlr::v4::runtime::Parser getParser() const;
            ::org::antlr::v4::runtime::atn::PredictionMode getPredictionMode() const;
            ::java::lang::String getRuleName(jint) const;
            static ::java::lang::String getSafeEnv(const ::java::lang::String &);
            ::java::lang::String getTokenName(jint) const;
            ::org::antlr::v4::runtime::atn::ATNConfig precedenceTransition(const ::org::antlr::v4::runtime::atn::ATNConfig &, const ::org::antlr::v4::runtime::atn::PrecedencePredicateTransition &, jboolean, jboolean, jboolean) const;
            void reset() const;
            void setPredictionMode(const ::org::antlr::v4::runtime::atn::PredictionMode &) const;
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
          extern PyType_Def PY_TYPE_DEF(ParserATNSimulator);
          extern PyTypeObject *PY_TYPE(ParserATNSimulator);

          class t_ParserATNSimulator {
          public:
            PyObject_HEAD
            ParserATNSimulator object;
            static PyObject *wrap_Object(const ParserATNSimulator&);
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
