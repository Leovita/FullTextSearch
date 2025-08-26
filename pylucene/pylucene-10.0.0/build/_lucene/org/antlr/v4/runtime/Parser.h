#ifndef org_antlr_v4_runtime_Parser_H
#define org_antlr_v4_runtime_Parser_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ParseInfo;
          class ATN;
          class ParserATNSimulator;
        }
        class TokenFactory;
        class TokenStream;
        class RecognitionException;
        class ParserRuleContext;
        class ANTLRErrorStrategy;
        class IntStream;
        class RuleContext;
        class Token;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
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
            mid_init$_599bc810ed564709,
            mid_consume_91a9980574ecdd91,
            mid_dumpDFA_e7bdbe105ce1bafb,
            mid_dumpDFA_922e82480ddcbcc4,
            mid_enterOuterAlt_f840f8abb19811a0,
            mid_enterRecursionRule_f840f8abb19811a0,
            mid_enterRecursionRule_4ffc10a8f5b2c6c8,
            mid_enterRule_c0134a8c546c501c,
            mid_exitRule_e7bdbe105ce1bafb,
            mid_getATNWithBypassAlts_ed49cd1984bb7c8a,
            mid_getBuildParseTree_9aa4f33e82ea333f,
            mid_getContext_66f2a0a97f4f532a,
            mid_getCurrentToken_91a9980574ecdd91,
            mid_getDFAStrings_1387e1e2702ac173,
            mid_getErrorHandler_030c9e0ee149b944,
            mid_getInputStream_f3f959cfe58f9147,
            mid_getInvokingContext_e1ecb76591f5d52e,
            mid_getNumberOfSyntaxErrors_bd89ce15dad49192,
            mid_getParseInfo_b824dd895c6732e5,
            mid_getPrecedence_bd89ce15dad49192,
            mid_getRuleContext_66f2a0a97f4f532a,
            mid_getRuleIndex_fa2a6f298bd618ab,
            mid_getRuleInvocationStack_1387e1e2702ac173,
            mid_getRuleInvocationStack_93df57d078275d1b,
            mid_getSourceName_e7df854526d67fa3,
            mid_getTokenFactory_8ed3c222ea2cde3f,
            mid_getTokenStream_f3f959cfe58f9147,
            mid_getTrimParseTree_9aa4f33e82ea333f,
            mid_inContext_94f7e759d94961b0,
            mid_isExpectedToken_a8281eb3b9d9672d,
            mid_isMatchedEOF_9aa4f33e82ea333f,
            mid_isTrace_9aa4f33e82ea333f,
            mid_match_125d20322cd73b79,
            mid_matchWildcard_91a9980574ecdd91,
            mid_notifyErrorListeners_ee46a189998009d6,
            mid_notifyErrorListeners_ebba6911f5d579ca,
            mid_precpred_89c6843d7509da22,
            mid_pushNewRecursionContext_c0134a8c546c501c,
            mid_removeParseListeners_e7bdbe105ce1bafb,
            mid_reset_e7bdbe105ce1bafb,
            mid_setBuildParseTree_f5dd97eebf6a215a,
            mid_setContext_d06f00f6bac2ff6a,
            mid_setErrorHandler_d8814f173f5dcdcd,
            mid_setInputStream_065453d2c889d4cb,
            mid_setProfile_f5dd97eebf6a215a,
            mid_setTokenFactory_6c179beec6a94365,
            mid_setTokenStream_599bc810ed564709,
            mid_setTrace_f5dd97eebf6a215a,
            mid_setTrimParseTree_f5dd97eebf6a215a,
            mid_unrollRecursionContexts_d06f00f6bac2ff6a,
            mid_triggerExitRuleEvent_e7bdbe105ce1bafb,
            mid_triggerEnterRuleEvent_e7bdbe105ce1bafb,
            mid_addContextToParseTree_e7bdbe105ce1bafb,
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
