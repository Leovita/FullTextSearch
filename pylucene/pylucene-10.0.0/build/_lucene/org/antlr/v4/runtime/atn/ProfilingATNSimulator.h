#ifndef org_antlr_v4_runtime_atn_ProfilingATNSimulator_H
#define org_antlr_v4_runtime_atn_ProfilingATNSimulator_H

#include "org/antlr/v4/runtime/atn/ParserATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Parser;
        class TokenStream;
        namespace atn {
          class DecisionInfo;
        }
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
        namespace atn {

          class ProfilingATNSimulator : public ::org::antlr::v4::runtime::atn::ParserATNSimulator {
           public:
            enum {
              mid_init$_c54371d1025687ef,
              mid_adaptivePredict_12b1c8e21827aa0e,
              mid_getDecisionInfo_8363648230130448,
              mid_reportAmbiguity_3a3363f43d42bafe,
              mid_reportAttemptingFullContext_8de98c3c46deafdf,
              mid_reportContextSensitivity_6d548c6057643b60,
              mid_getExistingTargetState_921945ff8f30a545,
              mid_computeTargetState_0c7e50815af077b9,
              mid_computeReachSet_01b4ad33b0bec0ca,
              mid_evalSemanticContext_ff62547a28a12d21,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilingATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilingATNSimulator(const ProfilingATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(obj) {}

            ProfilingATNSimulator(const ::org::antlr::v4::runtime::Parser &);

            jint adaptivePredict(const ::org::antlr::v4::runtime::TokenStream &, jint, const ::org::antlr::v4::runtime::ParserRuleContext &) const;
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > getDecisionInfo() const;
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
          extern PyType_Def PY_TYPE_DEF(ProfilingATNSimulator);
          extern PyTypeObject *PY_TYPE(ProfilingATNSimulator);

          class t_ProfilingATNSimulator {
          public:
            PyObject_HEAD
            ProfilingATNSimulator object;
            static PyObject *wrap_Object(const ProfilingATNSimulator&);
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
