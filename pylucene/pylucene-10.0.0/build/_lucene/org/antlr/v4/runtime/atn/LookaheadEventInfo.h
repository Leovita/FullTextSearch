#ifndef org_antlr_v4_runtime_atn_LookaheadEventInfo_H
#define org_antlr_v4_runtime_atn_LookaheadEventInfo_H

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

          class LookaheadEventInfo : public ::org::antlr::v4::runtime::atn::DecisionEventInfo {
           public:
            enum {
              mid_init$_6b0a410991f28f07,
              max_mid
            };

            enum {
              fid_predictedAlt,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LookaheadEventInfo(jobject obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LookaheadEventInfo(const LookaheadEventInfo& obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {}

            jint _get_predictedAlt() const;
            void _set_predictedAlt(jint) const;

            LookaheadEventInfo(jint, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, jint, const ::org::antlr::v4::runtime::TokenStream &, jint, jint, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(LookaheadEventInfo);
          extern PyTypeObject *PY_TYPE(LookaheadEventInfo);

          class t_LookaheadEventInfo {
          public:
            PyObject_HEAD
            LookaheadEventInfo object;
            static PyObject *wrap_Object(const LookaheadEventInfo&);
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
