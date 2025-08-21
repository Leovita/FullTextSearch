#ifndef org_antlr_v4_runtime_Lexer_H
#define org_antlr_v4_runtime_Lexer_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenFactory;
        class CharStream;
        class TokenSource;
        namespace atn {
          class LexerATNSimulator;
        }
        class IntStream;
        class LexerNoViableAltException;
        class RecognitionException;
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
    class Object;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_4d3fc62038ae73ec,
            mid_emit_9ddaacaf798f5cf6,
            mid_emit_c666cf9aed935f19,
            mid_emitEOF_9ddaacaf798f5cf6,
            mid_getAllTokens_36830460e10839eb,
            mid_getChannel_20fbf7565993c3d7,
            mid_getChannelNames_6da8f3ea65e22733,
            mid_getCharErrorDisplay_cd8436557ab831f9,
            mid_getCharIndex_20fbf7565993c3d7,
            mid_getCharPositionInLine_20fbf7565993c3d7,
            mid_getErrorDisplay_cb0eb1432185fc94,
            mid_getErrorDisplay_cd8436557ab831f9,
            mid_getInputStream_b461eccf8f9c2fcc,
            mid_getLine_20fbf7565993c3d7,
            mid_getModeNames_6da8f3ea65e22733,
            mid_getSourceName_09a7afff1868fc5e,
            mid_getText_09a7afff1868fc5e,
            mid_getToken_9ddaacaf798f5cf6,
            mid_getTokenFactory_c8e0d1a54d80678c,
            mid_getTokenNames_6da8f3ea65e22733,
            mid_getType_20fbf7565993c3d7,
            mid_mode_540b2b23d51b1efd,
            mid_more_3720c61b0679eb3e,
            mid_nextToken_9ddaacaf798f5cf6,
            mid_notifyListeners_5cd4dbb1f11ee7f4,
            mid_popMode_20fbf7565993c3d7,
            mid_pushMode_540b2b23d51b1efd,
            mid_recover_5cd4dbb1f11ee7f4,
            mid_recover_3cb1ebd09e36450e,
            mid_reset_3720c61b0679eb3e,
            mid_setChannel_540b2b23d51b1efd,
            mid_setCharPositionInLine_540b2b23d51b1efd,
            mid_setInputStream_e95b24b8d6abbd06,
            mid_setLine_540b2b23d51b1efd,
            mid_setText_0d82408c6e55bc30,
            mid_setToken_c666cf9aed935f19,
            mid_setTokenFactory_70a7fa7b38564c5e,
            mid_setType_540b2b23d51b1efd,
            mid_skip_3720c61b0679eb3e,
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
