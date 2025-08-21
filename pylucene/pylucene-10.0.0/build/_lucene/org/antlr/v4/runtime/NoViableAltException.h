#ifndef org_antlr_v4_runtime_NoViableAltException_H
#define org_antlr_v4_runtime_NoViableAltException_H

#include "org/antlr/v4/runtime/RecognitionException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Parser;
        class TokenStream;
        namespace atn {
          class ATNConfigSet;
        }
        class Token;
        class ParserRuleContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class NoViableAltException : public ::org::antlr::v4::runtime::RecognitionException {
         public:
          enum {
            mid_init$_c54371d1025687ef,
            mid_init$_8b0158a5ba7de247,
            mid_getDeadEndConfigs_c7ac6b3f4d432cfe,
            mid_getStartToken_9ddaacaf798f5cf6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoViableAltException(jobject obj) : ::org::antlr::v4::runtime::RecognitionException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoViableAltException(const NoViableAltException& obj) : ::org::antlr::v4::runtime::RecognitionException(obj) {}

          NoViableAltException(const ::org::antlr::v4::runtime::Parser &);
          NoViableAltException(const ::org::antlr::v4::runtime::Parser &, const ::org::antlr::v4::runtime::TokenStream &, const ::org::antlr::v4::runtime::Token &, const ::org::antlr::v4::runtime::Token &, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, const ::org::antlr::v4::runtime::ParserRuleContext &);

          ::org::antlr::v4::runtime::atn::ATNConfigSet getDeadEndConfigs() const;
          ::org::antlr::v4::runtime::Token getStartToken() const;
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
        extern PyType_Def PY_TYPE_DEF(NoViableAltException);
        extern PyTypeObject *PY_TYPE(NoViableAltException);

        class t_NoViableAltException {
        public:
          PyObject_HEAD
          NoViableAltException object;
          static PyObject *wrap_Object(const NoViableAltException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
