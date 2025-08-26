#ifndef org_antlr_v4_runtime_atn_ParserATNSimulator_H
#define org_antlr_v4_runtime_atn_ParserATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class NoViableAltException;
        namespace atn {
          class PrecedencePredicateTransition;
          class ATN;
          class PredictionMode;
          class ATNConfig;
        }
        class TokenStream;
        class Parser;
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
              mid_adaptivePredict_c6f3f1fdf2f63d84,
              mid_clearDFA_e7bdbe105ce1bafb,
              mid_dumpDeadEndConfigs_d1be5e97c7cc6d6a,
              mid_getLookaheadName_74566d267496c40a,
              mid_getParser_a0d3f07ef51c2d66,
              mid_getPredictionMode_5f21cbafcf88f926,
              mid_getRuleName_0da8f0b89b1e9a22,
              mid_getSafeEnv_fef9c036acf290a9,
              mid_getTokenName_0da8f0b89b1e9a22,
              mid_precedenceTransition_01b49815abb7b23d,
              mid_reset_e7bdbe105ce1bafb,
              mid_setPredictionMode_41cc4bff8c18ef05,
              mid_reportAmbiguity_9b55096ccb937882,
              mid_reportAttemptingFullContext_1821499077769b79,
              mid_reportContextSensitivity_f291e7480fb12df2,
              mid_execATN_a5cdb6183dcd2871,
              mid_getExistingTargetState_52ede4f51e49b0e1,
              mid_computeTargetState_8cb4d3154af204b2,
              mid_getReachableTarget_190f35e22543d107,
              mid_computeStartState_49b4a3821d3149e1,
              mid_getEpsilonTarget_15956505c68de2b2,
              mid_ruleTransition_08e0438374b0db6a,
              mid_addDFAEdge_4fed88c502d20f0a,
              mid_addDFAState_8890f61d34819b46,
              mid_getSynValidOrSemInvalidAltThatFinishedDecisionEntryRule_fd1b7bfada02635a,
              mid_computeReachSet_6b81acbb84d64672,
              mid_evalSemanticContext_0ae7714e2f98191b,
              mid_evalSemanticContext_049dac9b23775d5c,
              mid_predicateDFAState_7eedc5dbcd64c6d2,
              mid_execATNWithFullContext_1248182c990b8227,
              mid_removeAllConfigsNotInRuleStopState_3872731feb5f6ef2,
              mid_applyPrecedenceFilter_1e4418f5c87ed111,
              mid_getPredsForAmbigAlts_4cb73250d48fb5b3,
              mid_getPredicatePredictions_74e73140aae02dbb,
              mid_getAltThatFinishedDecisionEntryRule_b11a0c684560a7e5,
              mid_splitAccordingToSemanticValidity_0a1302cad376013d,
              mid_closureCheckingStopState_5196b0fc6c8c6cb3,
              mid_closure__5196b0fc6c8c6cb3,
              mid_canDropLoopEntryEdgeInLeftRecursiveRule_4291e6f193a35bdb,
              mid_actionTransition_f9492b5cd77e9961,
              mid_predTransition_6c3702c581e47356,
              mid_getConflictingAlts_0feccd20bb2f64ec,
              mid_getConflictingAltsOrUniqueAlt_0feccd20bb2f64ec,
              mid_noViableAlt_4869f955391225df,
              mid_getUniqueAlt_b11a0c684560a7e5,
              mid_closure_98f5201545d5fc52,
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
