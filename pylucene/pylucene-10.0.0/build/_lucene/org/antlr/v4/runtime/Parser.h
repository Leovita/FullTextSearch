#ifndef org_antlr_v4_runtime_Parser_H
#define org_antlr_v4_runtime_Parser_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ParserATNSimulator;
          class ATN;
          class ParseInfo;
        }
        class TokenStream;
        class TokenFactory;
        class ANTLRErrorStrategy;
        class RuleContext;
        class IntStream;
        class RecognitionException;
        class Token;
        class ParserRuleContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class List;
  }
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Parser : public ::org::antlr::v4::runtime::Recognizer {
         public:
          enum {
            mid_init$_38b72cba138df684,
            mid_consume_9ddaacaf798f5cf6,
            mid_dumpDFA_3720c61b0679eb3e,
            mid_dumpDFA_f19a9aaf837ad692,
            mid_enterOuterAlt_edeb232e399334f6,
            mid_enterRecursionRule_edeb232e399334f6,
            mid_enterRecursionRule_2e39994eefd3828e,
            mid_enterRule_9d40db72466d3af5,
            mid_exitRule_3720c61b0679eb3e,
            mid_getATNWithBypassAlts_335001da772895f5,
            mid_getBuildParseTree_947277eca0748c4e,
            mid_getContext_34f9e24cfd279b36,
            mid_getCurrentToken_9ddaacaf798f5cf6,
            mid_getDFAStrings_36830460e10839eb,
            mid_getErrorHandler_0047376150d05b88,
            mid_getInputStream_eea081bd4f7b1b1d,
            mid_getInvokingContext_d9a596d61b43338a,
            mid_getNumberOfSyntaxErrors_20fbf7565993c3d7,
            mid_getParseInfo_93e605c5dd7930d6,
            mid_getPrecedence_20fbf7565993c3d7,
            mid_getRuleContext_34f9e24cfd279b36,
            mid_getRuleIndex_3f230d713d7fd2b0,
            mid_getRuleInvocationStack_36830460e10839eb,
            mid_getRuleInvocationStack_4f88b15a5eae22ac,
            mid_getSourceName_09a7afff1868fc5e,
            mid_getTokenFactory_c8e0d1a54d80678c,
            mid_getTokenStream_eea081bd4f7b1b1d,
            mid_getTrimParseTree_947277eca0748c4e,
            mid_inContext_4a13a663b5c11133,
            mid_isExpectedToken_ae22d3a856ad56f1,
            mid_isMatchedEOF_947277eca0748c4e,
            mid_isTrace_947277eca0748c4e,
            mid_match_8e1bc8e51e721825,
            mid_matchWildcard_9ddaacaf798f5cf6,
            mid_notifyErrorListeners_0d82408c6e55bc30,
            mid_notifyErrorListeners_afa1abc94f490dfa,
            mid_precpred_a27b480fc32558f3,
            mid_pushNewRecursionContext_9d40db72466d3af5,
            mid_removeParseListeners_3720c61b0679eb3e,
            mid_reset_3720c61b0679eb3e,
            mid_setBuildParseTree_b110fc3a58c081ab,
            mid_setContext_b66b11bc03bfbb06,
            mid_setErrorHandler_10f02460970aba46,
            mid_setInputStream_e95b24b8d6abbd06,
            mid_setProfile_b110fc3a58c081ab,
            mid_setTokenFactory_70a7fa7b38564c5e,
            mid_setTokenStream_38b72cba138df684,
            mid_setTrace_b110fc3a58c081ab,
            mid_setTrimParseTree_b110fc3a58c081ab,
            mid_unrollRecursionContexts_b66b11bc03bfbb06,
            mid_triggerExitRuleEvent_3720c61b0679eb3e,
            mid_triggerEnterRuleEvent_3720c61b0679eb3e,
            mid_addContextToParseTree_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Parser(jobject obj) : ::org::antlr::v4::runtime::Recognizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Parser(const Parser& obj) : ::org::antlr::v4::runtime::Recognizer(obj) {}

          Parser(const ::org::antlr::v4::runtime::TokenStream &);

          ::org::antlr::v4::runtime::Token consume() const;
          void dumpDFA() const;
          void dumpDFA(const ::java::io::PrintStream &) const;
          void enterOuterAlt(const ::org::antlr::v4::runtime::ParserRuleContext &, jint) const;
          void enterRecursionRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint) const;
          void enterRecursionRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint, jint) const;
          void enterRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint) const;
          void exitRule() const;
          ::org::antlr::v4::runtime::atn::ATN getATNWithBypassAlts() const;
          jboolean getBuildParseTree() const;
          ::org::antlr::v4::runtime::ParserRuleContext getContext() const;
          ::org::antlr::v4::runtime::Token getCurrentToken() const;
          ::java::util::List getDFAStrings() const;
          ::org::antlr::v4::runtime::ANTLRErrorStrategy getErrorHandler() const;
          ::org::antlr::v4::runtime::TokenStream getInputStream() const;
          ::org::antlr::v4::runtime::ParserRuleContext getInvokingContext(jint) const;
          jint getNumberOfSyntaxErrors() const;
          ::org::antlr::v4::runtime::atn::ParseInfo getParseInfo() const;
          jint getPrecedence() const;
          ::org::antlr::v4::runtime::ParserRuleContext getRuleContext() const;
          jint getRuleIndex(const ::java::lang::String &) const;
          ::java::util::List getRuleInvocationStack() const;
          ::java::util::List getRuleInvocationStack(const ::org::antlr::v4::runtime::RuleContext &) const;
          ::java::lang::String getSourceName() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          ::org::antlr::v4::runtime::TokenStream getTokenStream() const;
          jboolean getTrimParseTree() const;
          jboolean inContext(const ::java::lang::String &) const;
          jboolean isExpectedToken(jint) const;
          jboolean isMatchedEOF() const;
          jboolean isTrace() const;
          ::org::antlr::v4::runtime::Token match(jint) const;
          ::org::antlr::v4::runtime::Token matchWildcard() const;
          void notifyErrorListeners(const ::java::lang::String &) const;
          void notifyErrorListeners(const ::org::antlr::v4::runtime::Token &, const ::java::lang::String &, const ::org::antlr::v4::runtime::RecognitionException &) const;
          jboolean precpred(const ::org::antlr::v4::runtime::RuleContext &, jint) const;
          void pushNewRecursionContext(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint) const;
          void removeParseListeners() const;
          void reset() const;
          void setBuildParseTree(jboolean) const;
          void setContext(const ::org::antlr::v4::runtime::ParserRuleContext &) const;
          void setErrorHandler(const ::org::antlr::v4::runtime::ANTLRErrorStrategy &) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setProfile(jboolean) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
          void setTokenStream(const ::org::antlr::v4::runtime::TokenStream &) const;
          void setTrace(jboolean) const;
          void setTrimParseTree(jboolean) const;
          void unrollRecursionContexts(const ::org::antlr::v4::runtime::ParserRuleContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(Parser);
        extern PyTypeObject *PY_TYPE(Parser);

        class t_Parser {
        public:
          PyObject_HEAD
          Parser object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Parser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Parser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Parser&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
