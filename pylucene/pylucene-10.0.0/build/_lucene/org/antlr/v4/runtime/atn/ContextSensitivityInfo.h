#ifndef org_antlr_v4_runtime_atn_ContextSensitivityInfo_H
#define org_antlr_v4_runtime_atn_ContextSensitivityInfo_H

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

          class ContextSensitivityInfo : public ::org::antlr::v4::runtime::atn::DecisionEventInfo {
           public:
            enum {
              mid_init$_0da1da202d88f59b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ContextSensitivityInfo(jobject obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ContextSensitivityInfo(const ContextSensitivityInfo& obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {}

            ContextSensitivityInfo(jint, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, const ::org::antlr::v4::runtime::TokenStream &, jint, jint);
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
          extern PyType_Def PY_TYPE_DEF(ContextSensitivityInfo);
          extern PyTypeObject *PY_TYPE(ContextSensitivityInfo);

          class t_ContextSensitivityInfo {
          public:
            PyObject_HEAD
            ContextSensitivityInfo object;
            static PyObject *wrap_Object(const ContextSensitivityInfo&);
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
