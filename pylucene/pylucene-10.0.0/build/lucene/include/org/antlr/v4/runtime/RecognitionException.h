#ifndef org_antlr_v4_runtime_RecognitionException_H
#define org_antlr_v4_runtime_RecognitionException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        class ParserRuleContext;
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
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RecognitionException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_a800a49743f12f29,
            mid_init$_cca523d7f8a4e3d1,
            mid_getCtx_5527f90c6ec01d1c,
            mid_getInputStream_829b6fe8e52d501b,
            mid_getOffendingState_bd89ce15dad49192,
            mid_getOffendingToken_91a9980574ecdd91,
            mid_getRecognizer_8c57926132c34c36,
            mid_setOffendingState_8226bd0b0fc13dba,
            mid_setOffendingToken_70070be696151485,
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
