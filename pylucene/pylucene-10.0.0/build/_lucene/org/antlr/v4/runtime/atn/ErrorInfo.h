#ifndef org_antlr_v4_runtime_atn_ErrorInfo_H
#define org_antlr_v4_runtime_atn_ErrorInfo_H

#include "org/antlr/v4/runtime/atn/DecisionEventInfo.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet;
        }
        class TokenStream;
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
        namespace atn {

          class ErrorInfo : public ::org::antlr::v4::runtime::atn::DecisionEventInfo {
           public:
            enum {
              mid_init$_2249b4bb23ad8343,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ErrorInfo(jobject obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ErrorInfo(const ErrorInfo& obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {}

            ErrorInfo(jint, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, const ::org::antlr::v4::runtime::TokenStream &, jint, jint, jboolean);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(ErrorInfo);
          extern PyTypeObject *PY_TYPE(ErrorInfo);

          class t_ErrorInfo {
          public:
            PyObject_HEAD
            ErrorInfo object;
            static PyObject *wrap_Object(const ErrorInfo&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
