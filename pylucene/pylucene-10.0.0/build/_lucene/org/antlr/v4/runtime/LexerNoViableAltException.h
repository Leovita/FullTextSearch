#ifndef org_antlr_v4_runtime_LexerNoViableAltException_H
#define org_antlr_v4_runtime_LexerNoViableAltException_H

#include "org/antlr/v4/runtime/RecognitionException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class CharStream;
        namespace atn {
          class ATNConfigSet;
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

        class LexerNoViableAltException : public ::org::antlr::v4::runtime::RecognitionException {
         public:
          enum {
            mid_init$_12ff470fd131a0d9,
            mid_getDeadEndConfigs_c7ac6b3f4d432cfe,
            mid_getInputStream_b461eccf8f9c2fcc,
            mid_getStartIndex_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LexerNoViableAltException(jobject obj) : ::org::antlr::v4::runtime::RecognitionException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LexerNoViableAltException(const LexerNoViableAltException& obj) : ::org::antlr::v4::runtime::RecognitionException(obj) {}

          LexerNoViableAltException(const ::org::antlr::v4::runtime::Lexer &, const ::org::antlr::v4::runtime::CharStream &, jint, const ::org::antlr::v4::runtime::atn::ATNConfigSet &);

          ::org::antlr::v4::runtime::atn::ATNConfigSet getDeadEndConfigs() const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getStartIndex() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(LexerNoViableAltException);
        extern PyTypeObject *PY_TYPE(LexerNoViableAltException);

        class t_LexerNoViableAltException {
        public:
          PyObject_HEAD
          LexerNoViableAltException object;
          static PyObject *wrap_Object(const LexerNoViableAltException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
