#ifndef org_antlr_v4_runtime_atn_PredicateEvalInfo_H
#define org_antlr_v4_runtime_atn_PredicateEvalInfo_H

#include "org/antlr/v4/runtime/atn/DecisionEventInfo.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenStream;
        namespace atn {
          class SemanticContext;
        }
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

          class PredicateEvalInfo : public ::org::antlr::v4::runtime::atn::DecisionEventInfo {
           public:
            enum {
              mid_init$_6fdb0d0fca3a2cca,
              max_mid
            };

            enum {
              fid_evalResult,
              fid_predictedAlt,
              fid_semctx,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredicateEvalInfo(jobject obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredicateEvalInfo(const PredicateEvalInfo& obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {}

            jboolean _get_evalResult() const;
            jint _get_predictedAlt() const;
            ::org::antlr::v4::runtime::atn::SemanticContext _get_semctx() const;

            PredicateEvalInfo(jint, const ::org::antlr::v4::runtime::TokenStream &, jint, jint, const ::org::antlr::v4::runtime::atn::SemanticContext &, jboolean, jint, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(PredicateEvalInfo);
          extern PyTypeObject *PY_TYPE(PredicateEvalInfo);

          class t_PredicateEvalInfo {
          public:
            PyObject_HEAD
            PredicateEvalInfo object;
            static PyObject *wrap_Object(const PredicateEvalInfo&);
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
