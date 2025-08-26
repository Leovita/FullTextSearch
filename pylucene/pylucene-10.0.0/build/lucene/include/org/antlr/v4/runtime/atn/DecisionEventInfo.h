#ifndef org_antlr_v4_runtime_atn_DecisionEventInfo_H
#define org_antlr_v4_runtime_atn_DecisionEventInfo_H

#include "java/lang/Object.h"

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

          class DecisionEventInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_452125a6d1de7705,
              max_mid
            };

            enum {
              fid_configs,
              fid_decision,
              fid_fullCtx,
              fid_input,
              fid_startIndex,
              fid_stopIndex,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DecisionEventInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DecisionEventInfo(const DecisionEventInfo& obj) : ::java::lang::Object(obj) {}

            ::org::antlr::v4::runtime::atn::ATNConfigSet _get_configs() const;
            jint _get_decision() const;
            jboolean _get_fullCtx() const;
            ::org::antlr::v4::runtime::TokenStream _get_input() const;
            jint _get_startIndex() const;
            jint _get_stopIndex() const;

            DecisionEventInfo(jint, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, const ::org::antlr::v4::runtime::TokenStream &, jint, jint, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(DecisionEventInfo);
          extern PyTypeObject *PY_TYPE(DecisionEventInfo);

          class t_DecisionEventInfo {
          public:
            PyObject_HEAD
            DecisionEventInfo object;
            static PyObject *wrap_Object(const DecisionEventInfo&);
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
