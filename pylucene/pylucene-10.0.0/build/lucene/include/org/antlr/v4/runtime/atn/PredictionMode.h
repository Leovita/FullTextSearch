#ifndef org_antlr_v4_runtime_atn_PredictionMode_H
#define org_antlr_v4_runtime_atn_PredictionMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class BitSet;
    class Map;
    class Collection;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class PredictionMode;
          class ATNConfigSet;
          class ATNState;
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

          class PredictionMode : public ::java::lang::Enum {
           public:
            enum {
              mid_allConfigsInRuleStopStates_d9c08347b413e1d2,
              mid_allSubsetsConflict_155d0ed876869448,
              mid_allSubsetsEqual_155d0ed876869448,
              mid_getAlts_0feccd20bb2f64ec,
              mid_getAlts_7ecf3fe8e5239a99,
              mid_getConflictingAltSubsets_268ba26267455e7d,
              mid_getSingleViableAlt_4cd7ffd482b3c390,
              mid_getStateToAltMap_749b21655accd835,
              mid_getUniqueAlt_4cd7ffd482b3c390,
              mid_hasConfigInRuleStopState_d9c08347b413e1d2,
              mid_hasConflictingAltSet_155d0ed876869448,
              mid_hasNonConflictingAltSet_155d0ed876869448,
              mid_hasSLLConflictTerminatingPrediction_d92ef617c602ccd6,
              mid_hasStateAssociatedWithOneAlt_d9c08347b413e1d2,
              mid_resolvesToJustOneViableAlt_4cd7ffd482b3c390,
              mid_valueOf_ed1a027e991a8933,
              mid_values_b280c7c33d1fb3ef,
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
