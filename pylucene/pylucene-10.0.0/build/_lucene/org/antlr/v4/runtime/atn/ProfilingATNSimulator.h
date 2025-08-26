#ifndef org_antlr_v4_runtime_atn_ProfilingATNSimulator_H
#define org_antlr_v4_runtime_atn_ProfilingATNSimulator_H

#include "org/antlr/v4/runtime/atn/ParserATNSimulator.h"

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
          class DecisionInfo;
        }
        class ParserRuleContext;
      }
    }
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
              mid_init$_e8c82ba13b1236ed,
              mid_adaptivePredict_c6f3f1fdf2f63d84,
              mid_getDecisionInfo_e88b3ee158b9d4f5,
              mid_reportAmbiguity_9b55096ccb937882,
              mid_reportAttemptingFullContext_1821499077769b79,
              mid_reportContextSensitivity_f291e7480fb12df2,
              mid_getExistingTargetState_52ede4f51e49b0e1,
              mid_computeTargetState_8cb4d3154af204b2,
              mid_computeReachSet_6b81acbb84d64672,
              mid_evalSemanticContext_049dac9b23775d5c,
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
