#ifndef org_antlr_v4_runtime_atn_LexerATNSimulator_H
#define org_antlr_v4_runtime_atn_LexerATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class CharStream;
        namespace atn {
          class ATN;
          class LexerATNSimulator;
        }
        class Lexer;
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
              mid_clearDFA_3720c61b0679eb3e,
              mid_consume_4d3fc62038ae73ec,
              mid_copyState_e454e5aba5dc644f,
              mid_getCharPositionInLine_20fbf7565993c3d7,
              mid_getLine_20fbf7565993c3d7,
              mid_getText_39e8c9c1fd82927b,
              mid_getTokenName_cd8436557ab831f9,
              mid_match_ffc671cfc0f0bc94,
              mid_reset_3720c61b0679eb3e,
              mid_setCharPositionInLine_540b2b23d51b1efd,
              mid_setLine_540b2b23d51b1efd,
              mid_getExistingTargetState_921945ff8f30a545,
              mid_computeTargetState_43da49cba1060e13,
              mid_execATN_502887b793079899,
              mid_computeStartState_ced8467f8ec33fd3,
              mid_getReachableTarget_23bdb8817045ffec,
              mid_getEpsilonTarget_dc1fe48242bb7cda,
              mid_addDFAEdge_e1dc52fd322d25a5,
              mid_addDFAEdge_5f46a33733047e4b,
              mid_addDFAState_283e23c341a39258,
              mid_matchATN_f2e5621661cba8da,
              mid_failOrAccept_981810e10bc022c8,
              mid_getReachableConfigSet_7de50beed3c56417,
              mid_evaluatePredicate_91ec85596161cb9d,
              mid_captureSimState_389dab788e20d405,
              mid_accept_1688fcfec2cfe118,
              mid_closure_a6bec957908fb1fc,
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
