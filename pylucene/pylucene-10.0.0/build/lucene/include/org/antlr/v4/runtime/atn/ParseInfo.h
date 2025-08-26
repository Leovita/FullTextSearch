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
          class ProfilingATNSimulator;
          class DecisionInfo;
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
              mid_init$_f0b144a5bd4ac8dc,
              mid_getDFASize_bd89ce15dad49192,
              mid_getDFASize_a3904e10f5bb9437,
              mid_getDecisionInfo_e88b3ee158b9d4f5,
              mid_getLLDecisions_1387e1e2702ac173,
              mid_getTotalATNLookaheadOps_0f176418e3e16541,
              mid_getTotalLLATNLookaheadOps_0f176418e3e16541,
              mid_getTotalLLLookaheadOps_0f176418e3e16541,
              mid_getTotalSLLATNLookaheadOps_0f176418e3e16541,
              mid_getTotalSLLLookaheadOps_0f176418e3e16541,
              mid_getTotalTimeInPrediction_0f176418e3e16541,
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
