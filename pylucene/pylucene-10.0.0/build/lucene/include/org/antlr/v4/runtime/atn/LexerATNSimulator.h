#ifndef org_antlr_v4_runtime_atn_LexerATNSimulator_H
#define org_antlr_v4_runtime_atn_LexerATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class LexerATNSimulator;
          class ATN;
        }
        class Lexer;
        class CharStream;
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

          class LexerATNSimulator : public ::org::antlr::v4::runtime::atn::ATNSimulator {
           public:
            enum {
              mid_clearDFA_e7bdbe105ce1bafb,
              mid_consume_dd3882a10cadcfaa,
              mid_copyState_b3716a37d11cbcdf,
              mid_getCharPositionInLine_bd89ce15dad49192,
              mid_getLine_bd89ce15dad49192,
              mid_getText_c8ab61c4011c909c,
              mid_getTokenName_0da8f0b89b1e9a22,
              mid_match_2c9010534cc51578,
              mid_reset_e7bdbe105ce1bafb,
              mid_setCharPositionInLine_8226bd0b0fc13dba,
              mid_setLine_8226bd0b0fc13dba,
              mid_matchATN_e4c6f9ea7abf5d36,
              mid_execATN_0f8ad031a7506dd6,
              mid_getExistingTargetState_52ede4f51e49b0e1,
              mid_computeTargetState_9a7b401c5af8f08d,
              mid_failOrAccept_b8c26832dfe4cdb2,
              mid_getReachableConfigSet_f2d3710432262f86,
              mid_getReachableTarget_190f35e22543d107,
              mid_computeStartState_d02406fd31b18529,
              mid_getEpsilonTarget_fc4dc32af4435fcb,
              mid_evaluatePredicate_39b1325315d46b46,
              mid_captureSimState_ee4924090bc5f8b3,
              mid_addDFAEdge_376623fef84fb544,
              mid_addDFAEdge_975a120f8235cbfc,
              mid_addDFAState_56a586a9685d7899,
              mid_accept_971f35de3b3646a5,
              mid_closure_e83c26c1d695aa5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LexerATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LexerATNSimulator(const LexerATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {}

            static jint MAX_DFA_EDGE;
            static jint MIN_DFA_EDGE;
            static jboolean debug;
            static jboolean dfa_debug;

            void clearDFA() const;
            void consume(const ::org::antlr::v4::runtime::CharStream &) const;
            void copyState(const LexerATNSimulator &) const;
            jint getCharPositionInLine() const;
            jint getLine() const;
            ::java::lang::String getText(const ::org::antlr::v4::runtime::CharStream &) const;
            ::java::lang::String getTokenName(jint) const;
            jint match(const ::org::antlr::v4::runtime::CharStream &, jint) const;
            void reset() const;
            void setCharPositionInLine(jint) const;
            void setLine(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(LexerATNSimulator);
          extern PyTypeObject *PY_TYPE(LexerATNSimulator);

          class t_LexerATNSimulator {
          public:
            PyObject_HEAD
            LexerATNSimulator object;
            static PyObject *wrap_Object(const LexerATNSimulator&);
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
