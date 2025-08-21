#ifndef org_antlr_v4_runtime_Recognizer_H
#define org_antlr_v4_runtime_Recognizer_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenFactory;
        namespace atn {
          class ATN;
          class ParseInfo;
          class ATNSimulator;
        }
        class Token;
        class IntStream;
        class RecognitionException;
        class ANTLRErrorListener;
        class Vocabulary;
        class RuleContext;
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
    class Map;
    class List;
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
            mid_init$_3720c61b0679eb3e,
            mid_action_96b24f0df79f17ec,
            mid_addErrorListener_99887d081589e93a,
            mid_getATN_335001da772895f5,
            mid_getErrorHeader_f047fdf8a012ef1e,
            mid_getErrorListenerDispatch_e93d645b0563fd38,
            mid_getErrorListeners_36830460e10839eb,
            mid_getGrammarFileName_09a7afff1868fc5e,
            mid_getInputStream_40b9ffd028ddfe4b,
            mid_getInterpreter_aa6341945e2687ec,
            mid_getParseInfo_93e605c5dd7930d6,
            mid_getRuleIndexMap_f125f26c07a7bec8,
            mid_getRuleNames_6da8f3ea65e22733,
            mid_getSerializedATN_09a7afff1868fc5e,
            mid_getState_20fbf7565993c3d7,
            mid_getTokenErrorDisplay_2a05da314cfc39b2,
            mid_getTokenFactory_c8e0d1a54d80678c,
            mid_getTokenNames_6da8f3ea65e22733,
            mid_getTokenType_3f230d713d7fd2b0,
            mid_getTokenTypeMap_f125f26c07a7bec8,
            mid_getVocabulary_5929726a339c9f67,
            mid_precpred_a27b480fc32558f3,
            mid_removeErrorListener_99887d081589e93a,
            mid_removeErrorListeners_3720c61b0679eb3e,
            mid_sempred_f605b1ab4390f314,
            mid_setInputStream_e95b24b8d6abbd06,
            mid_setInterpreter_5cfb6c9fd627ce9e,
            mid_setState_540b2b23d51b1efd,
            mid_setTokenFactory_70a7fa7b38564c5e,
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
