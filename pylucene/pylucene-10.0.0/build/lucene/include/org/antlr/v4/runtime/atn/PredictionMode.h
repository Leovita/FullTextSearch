#ifndef org_antlr_v4_runtime_atn_PredictionMode_H
#define org_antlr_v4_runtime_atn_PredictionMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
          class PredictionMode;
          class ATNConfigSet;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class BitSet;
    class Collection;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class PredictionMode : public ::java::lang::Enum {
           public:
            enum {
              mid_allConfigsInRuleStopStates_ff4e6f03cd95f221,
              mid_allSubsetsConflict_f2a1f31c5865e20d,
              mid_allSubsetsEqual_f2a1f31c5865e20d,
              mid_getAlts_69ac9839d1e36164,
              mid_getAlts_3b33d71c26498d67,
              mid_getConflictingAltSubsets_bf1bfc00553f2f15,
              mid_getSingleViableAlt_c3a4145badf2e920,
              mid_getStateToAltMap_9b49d3029b33e3d8,
              mid_getUniqueAlt_c3a4145badf2e920,
              mid_hasConfigInRuleStopState_ff4e6f03cd95f221,
              mid_hasConflictingAltSet_f2a1f31c5865e20d,
              mid_hasNonConflictingAltSet_f2a1f31c5865e20d,
              mid_hasSLLConflictTerminatingPrediction_40d4218eb3caa877,
              mid_hasStateAssociatedWithOneAlt_ff4e6f03cd95f221,
              mid_resolvesToJustOneViableAlt_c3a4145badf2e920,
              mid_valueOf_06dd8374478fcd15,
              mid_values_81b7ce5b9b958ed4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionMode(const PredictionMode& obj) : ::java::lang::Enum(obj) {}

            static PredictionMode *LL;
            static PredictionMode *LL_EXACT_AMBIG_DETECTION;
            static PredictionMode *SLL;

            static jboolean allConfigsInRuleStopStates(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean allSubsetsConflict(const ::java::util::Collection &);
            static jboolean allSubsetsEqual(const ::java::util::Collection &);
            static ::java::util::BitSet getAlts(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static ::java::util::BitSet getAlts(const ::java::util::Collection &);
            static ::java::util::Collection getConflictingAltSubsets(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint getSingleViableAlt(const ::java::util::Collection &);
            static ::java::util::Map getStateToAltMap(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint getUniqueAlt(const ::java::util::Collection &);
            static jboolean hasConfigInRuleStopState(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean hasConflictingAltSet(const ::java::util::Collection &);
            static jboolean hasNonConflictingAltSet(const ::java::util::Collection &);
            static jboolean hasSLLConflictTerminatingPrediction(const PredictionMode &, const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean hasStateAssociatedWithOneAlt(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint resolvesToJustOneViableAlt(const ::java::util::Collection &);
            static PredictionMode valueOf(const ::java::lang::String &);
            static JArray< PredictionMode > values();
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
          extern PyType_Def PY_TYPE_DEF(PredictionMode);
          extern PyTypeObject *PY_TYPE(PredictionMode);

          class t_PredictionMode {
          public:
            PyObject_HEAD
            PredictionMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PredictionMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PredictionMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PredictionMode&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
