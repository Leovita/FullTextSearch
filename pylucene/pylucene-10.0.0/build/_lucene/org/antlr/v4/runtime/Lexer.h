#ifndef org_antlr_v4_runtime_Lexer_H
#define org_antlr_v4_runtime_Lexer_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class LexerATNSimulator;
        }
        class TokenSource;
        class LexerNoViableAltException;
        class CharStream;
        class RecognitionException;
        class TokenFactory;
        class IntStream;
        class Token;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
    class Object;
    class String;
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

        class Lexer : public ::org::antlr::v4::runtime::Recognizer {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_dd3882a10cadcfaa,
            mid_emit_91a9980574ecdd91,
            mid_emit_70070be696151485,
            mid_emitEOF_91a9980574ecdd91,
            mid_getAllTokens_1387e1e2702ac173,
            mid_getChannel_bd89ce15dad49192,
            mid_getChannelNames_970db9a2a49d840f,
            mid_getCharErrorDisplay_0da8f0b89b1e9a22,
            mid_getCharIndex_bd89ce15dad49192,
            mid_getCharPositionInLine_bd89ce15dad49192,
            mid_getErrorDisplay_fef9c036acf290a9,
            mid_getErrorDisplay_0da8f0b89b1e9a22,
            mid_getInputStream_ecdf4d21c837fa97,
            mid_getLine_bd89ce15dad49192,
            mid_getModeNames_970db9a2a49d840f,
            mid_getSourceName_e7df854526d67fa3,
            mid_getText_e7df854526d67fa3,
            mid_getToken_91a9980574ecdd91,
            mid_getTokenFactory_8ed3c222ea2cde3f,
            mid_getTokenNames_970db9a2a49d840f,
            mid_getType_bd89ce15dad49192,
            mid_mode_8226bd0b0fc13dba,
            mid_more_e7bdbe105ce1bafb,
            mid_nextToken_91a9980574ecdd91,
            mid_notifyListeners_dacd98d236da3ef2,
            mid_popMode_bd89ce15dad49192,
            mid_pushMode_8226bd0b0fc13dba,
            mid_recover_dacd98d236da3ef2,
            mid_recover_35b3d64af8385861,
            mid_reset_e7bdbe105ce1bafb,
            mid_setChannel_8226bd0b0fc13dba,
            mid_setCharPositionInLine_8226bd0b0fc13dba,
            mid_setInputStream_065453d2c889d4cb,
            mid_setLine_8226bd0b0fc13dba,
            mid_setText_ee46a189998009d6,
            mid_setToken_70070be696151485,
            mid_setTokenFactory_6c179beec6a94365,
            mid_setType_8226bd0b0fc13dba,
            mid_skip_e7bdbe105ce1bafb,
            max_mid
          };

          enum {
            fid__channel,
            fid__hitEOF,
            fid__input,
            fid__mode,
            fid__text,
            fid__token,
            fid__tokenStartCharIndex,
            fid__tokenStartCharPositionInLine,
            fid__tokenStartLine,
            fid__type,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Lexer(jobject obj) : ::org::antlr::v4::runtime::Recognizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Lexer(const Lexer& obj) : ::org::antlr::v4::runtime::Recognizer(obj) {}

          static jint DEFAULT_MODE;
          static jint DEFAULT_TOKEN_CHANNEL;
          static jint HIDDEN;
          static jint MAX_CHAR_VALUE;
          static jint MIN_CHAR_VALUE;
          static jint MORE;
          static jint SKIP;

          jint _get__channel() const;
          void _set__channel(jint) const;
          jboolean _get__hitEOF() const;
          void _set__hitEOF(jboolean) const;
          ::org::antlr::v4::runtime::CharStream _get__input() const;
          void _set__input(const ::org::antlr::v4::runtime::CharStream &) const;
          jint _get__mode() const;
          void _set__mode(jint) const;
          ::java::lang::String _get__text() const;
          void _set__text(const ::java::lang::String &) const;
          ::org::antlr::v4::runtime::Token _get__token() const;
          void _set__token(const ::org::antlr::v4::runtime::Token &) const;
          jint _get__tokenStartCharIndex() const;
          void _set__tokenStartCharIndex(jint) const;
          jint _get__tokenStartCharPositionInLine() const;
          void _set__tokenStartCharPositionInLine(jint) const;
          jint _get__tokenStartLine() const;
          void _set__tokenStartLine(jint) const;
          jint _get__type() const;
          void _set__type(jint) const;

          Lexer();
          Lexer(const ::org::antlr::v4::runtime::CharStream &);

          ::org::antlr::v4::runtime::Token emit() const;
          void emit(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::Token emitEOF() const;
          ::java::util::List getAllTokens() const;
          jint getChannel() const;
          JArray< ::java::lang::String > getChannelNames() const;
          ::java::lang::String getCharErrorDisplay(jint) const;
          jint getCharIndex() const;
          jint getCharPositionInLine() const;
          ::java::lang::String getErrorDisplay(const ::java::lang::String &) const;
          ::java::lang::String getErrorDisplay(jint) const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getLine() const;
          JArray< ::java::lang::String > getModeNames() const;
          ::java::lang::String getSourceName() const;
          ::java::lang::String getText() const;
          ::org::antlr::v4::runtime::Token getToken() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          JArray< ::java::lang::String > getTokenNames() const;
          jint getType() const;
          void mode(jint) const;
          void more() const;
          ::org::antlr::v4::runtime::Token nextToken() const;
          void notifyListeners(const ::org::antlr::v4::runtime::LexerNoViableAltException &) const;
          jint popMode() const;
          void pushMode(jint) const;
          void recover(const ::org::antlr::v4::runtime::LexerNoViableAltException &) const;
          void recover(const ::org::antlr::v4::runtime::RecognitionException &) const;
          void reset() const;
          void setChannel(jint) const;
          void setCharPositionInLine(jint) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setLine(jint) const;
          void setText(const ::java::lang::String &) const;
          void setToken(const ::org::antlr::v4::runtime::Token &) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
          void setType(jint) const;
          void skip() const;
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
        extern PyType_Def PY_TYPE_DEF(Lexer);
        extern PyTypeObject *PY_TYPE(Lexer);

        class t_Lexer {
        public:
          PyObject_HEAD
          Lexer object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Lexer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Lexer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Lexer&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
