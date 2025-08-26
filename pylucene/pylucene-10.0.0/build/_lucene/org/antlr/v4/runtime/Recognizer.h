#ifndef org_antlr_v4_runtime_Recognizer_H
#define org_antlr_v4_runtime_Recognizer_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ParseInfo;
          class ATN;
          class ATNSimulator;
        }
        class Vocabulary;
        class RecognitionException;
        class TokenFactory;
        class ANTLRErrorListener;
        class IntStream;
        class RuleContext;
        class Token;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Recognizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_action_0237c683077ee56a,
            mid_addErrorListener_72d99ae550fd94fe,
            mid_getATN_ed49cd1984bb7c8a,
            mid_getErrorHeader_34ae67c95de28640,
            mid_getErrorListenerDispatch_d25ffb18b594de2d,
            mid_getErrorListeners_1387e1e2702ac173,
            mid_getGrammarFileName_e7df854526d67fa3,
            mid_getInputStream_829b6fe8e52d501b,
            mid_getInterpreter_a1a3c95c44cc01d8,
            mid_getParseInfo_b824dd895c6732e5,
            mid_getRuleIndexMap_5004bdf19ed33453,
            mid_getRuleNames_970db9a2a49d840f,
            mid_getSerializedATN_e7df854526d67fa3,
            mid_getState_bd89ce15dad49192,
            mid_getTokenErrorDisplay_f5e661dbe12de179,
            mid_getTokenFactory_8ed3c222ea2cde3f,
            mid_getTokenNames_970db9a2a49d840f,
            mid_getTokenType_fa2a6f298bd618ab,
            mid_getTokenTypeMap_5004bdf19ed33453,
            mid_getVocabulary_47ac00fca39585d7,
            mid_precpred_89c6843d7509da22,
            mid_removeErrorListener_72d99ae550fd94fe,
            mid_removeErrorListeners_e7bdbe105ce1bafb,
            mid_sempred_7cdf9511593c498e,
            mid_setInputStream_065453d2c889d4cb,
            mid_setInterpreter_7292166fd6e58e13,
            mid_setState_8226bd0b0fc13dba,
            mid_setTokenFactory_6c179beec6a94365,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Recognizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Recognizer(const Recognizer& obj) : ::java::lang::Object(obj) {}

          static jint EOF;

          Recognizer();

          void action(const ::org::antlr::v4::runtime::RuleContext &, jint, jint) const;
          void addErrorListener(const ::org::antlr::v4::runtime::ANTLRErrorListener &) const;
          ::org::antlr::v4::runtime::atn::ATN getATN() const;
          ::java::lang::String getErrorHeader(const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::ANTLRErrorListener getErrorListenerDispatch() const;
          ::java::util::List getErrorListeners() const;
          ::java::lang::String getGrammarFileName() const;
          ::org::antlr::v4::runtime::IntStream getInputStream() const;
          ::org::antlr::v4::runtime::atn::ATNSimulator getInterpreter() const;
          ::org::antlr::v4::runtime::atn::ParseInfo getParseInfo() const;
          ::java::util::Map getRuleIndexMap() const;
          JArray< ::java::lang::String > getRuleNames() const;
          ::java::lang::String getSerializedATN() const;
          jint getState() const;
          ::java::lang::String getTokenErrorDisplay(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          JArray< ::java::lang::String > getTokenNames() const;
          jint getTokenType(const ::java::lang::String &) const;
          ::java::util::Map getTokenTypeMap() const;
          ::org::antlr::v4::runtime::Vocabulary getVocabulary() const;
          jboolean precpred(const ::org::antlr::v4::runtime::RuleContext &, jint) const;
          void removeErrorListener(const ::org::antlr::v4::runtime::ANTLRErrorListener &) const;
          void removeErrorListeners() const;
          jboolean sempred(const ::org::antlr::v4::runtime::RuleContext &, jint, jint) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setInterpreter(const ::org::antlr::v4::runtime::atn::ATNSimulator &) const;
          void setState(jint) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
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
        extern PyType_Def PY_TYPE_DEF(Recognizer);
        extern PyTypeObject *PY_TYPE(Recognizer);

        class t_Recognizer {
        public:
          PyObject_HEAD
          Recognizer object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Recognizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Recognizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Recognizer&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
