#ifndef org_antlr_v4_runtime_atn_ParseInfo_H
#define org_antlr_v4_runtime_atn_ParseInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class DecisionInfo;
          class ProfilingATNSimulator;
        }
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

          class ParseInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b57c6b88b86869f3,
              mid_getDFASize_20fbf7565993c3d7,
              mid_getDFASize_3c9bba330f083871,
              mid_getDecisionInfo_8363648230130448,
              mid_getLLDecisions_36830460e10839eb,
              mid_getTotalATNLookaheadOps_16939d9d0a9a9721,
              mid_getTotalLLATNLookaheadOps_16939d9d0a9a9721,
              mid_getTotalLLLookaheadOps_16939d9d0a9a9721,
              mid_getTotalSLLATNLookaheadOps_16939d9d0a9a9721,
              mid_getTotalSLLLookaheadOps_16939d9d0a9a9721,
              mid_getTotalTimeInPrediction_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParseInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParseInfo(const ParseInfo& obj) : ::java::lang::Object(obj) {}

            ParseInfo(const ::org::antlr::v4::runtime::atn::ProfilingATNSimulator &);

            jint getDFASize() const;
            jint getDFASize(jint) const;
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > getDecisionInfo() const;
            ::java::util::List getLLDecisions() const;
            jlong getTotalATNLookaheadOps() const;
            jlong getTotalLLATNLookaheadOps() const;
            jlong getTotalLLLookaheadOps() const;
            jlong getTotalSLLATNLookaheadOps() const;
            jlong getTotalSLLLookaheadOps() const;
            jlong getTotalTimeInPrediction() const;
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
          extern PyType_Def PY_TYPE_DEF(ParseInfo);
          extern PyTypeObject *PY_TYPE(ParseInfo);

          class t_ParseInfo {
          public:
            PyObject_HEAD
            ParseInfo object;
            static PyObject *wrap_Object(const ParseInfo&);
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
