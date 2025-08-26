#ifndef org_antlr_v4_runtime_NoViableAltException_H
#define org_antlr_v4_runtime_NoViableAltException_H

#include "org/antlr/v4/runtime/RecognitionException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenStream;
        class Parser;
        namespace atn {
          class ATNConfigSet;
        }
        class ParserRuleContext;
        class Token;
      }
    }
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
            mid_init$_e8c82ba13b1236ed,
            mid_init$_06bbccc5b23a2613,
            mid_getDeadEndConfigs_f2b7c06f51fadfea,
            mid_getStartToken_91a9980574ecdd91,
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
