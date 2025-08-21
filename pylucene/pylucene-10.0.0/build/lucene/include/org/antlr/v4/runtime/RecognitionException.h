#ifndef org_antlr_v4_runtime_RecognitionException_H
#define org_antlr_v4_runtime_RecognitionException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        class RuleContext;
        class IntStream;
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
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RecognitionException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_8673cc63600fc310,
            mid_init$_44f2701c6f01465a,
            mid_getCtx_f6417995d6af4905,
            mid_getInputStream_40b9ffd028ddfe4b,
            mid_getOffendingState_20fbf7565993c3d7,
            mid_getOffendingToken_9ddaacaf798f5cf6,
            mid_getRecognizer_fb2e3092fca749a2,
            mid_setOffendingState_540b2b23d51b1efd,
            mid_setOffendingToken_c666cf9aed935f19,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecognitionException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecognitionException(const RecognitionException& obj) : ::java::lang::RuntimeException(obj) {}

          RecognitionException(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::IntStream &, const ::org::antlr::v4::runtime::ParserRuleContext &);
          RecognitionException(const ::java::lang::String &, const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::IntStream &, const ::org::antlr::v4::runtime::ParserRuleContext &);

          ::org::antlr::v4::runtime::RuleContext getCtx() const;
          ::org::antlr::v4::runtime::IntStream getInputStream() const;
          jint getOffendingState() const;
          ::org::antlr::v4::runtime::Token getOffendingToken() const;
          ::org::antlr::v4::runtime::Recognizer getRecognizer() const;
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
        extern PyType_Def PY_TYPE_DEF(RecognitionException);
        extern PyTypeObject *PY_TYPE(RecognitionException);

        class t_RecognitionException {
        public:
          PyObject_HEAD
          RecognitionException object;
          static PyObject *wrap_Object(const RecognitionException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
