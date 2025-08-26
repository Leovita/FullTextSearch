#ifndef org_antlr_v4_runtime_atn_ATNSimulator_H
#define org_antlr_v4_runtime_atn_ATNSimulator_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATN;
          class PredictionContextCache;
          class PredictionContext;
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

          class ATNSimulator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_df12678de465847e,
              mid_clearDFA_e7bdbe105ce1bafb,
              mid_getCachedContext_092c560f41ffd287,
              mid_getSharedContextCache_776ea21abfad5dfb,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            enum {
              fid_atn,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNSimulator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNSimulator(const ATNSimulator& obj) : ::java::lang::Object(obj) {}

            ::org::antlr::v4::runtime::atn::ATN _get_atn() const;

            ATNSimulator(const ::org::antlr::v4::runtime::atn::ATN &, const ::org::antlr::v4::runtime::atn::PredictionContextCache &);

            void clearDFA() const;
            ::org::antlr::v4::runtime::atn::PredictionContext getCachedContext(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            ::org::antlr::v4::runtime::atn::PredictionContextCache getSharedContextCache() const;
            void reset() const;
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
          extern PyType_Def PY_TYPE_DEF(ATNSimulator);
          extern PyTypeObject *PY_TYPE(ATNSimulator);

          class t_ATNSimulator {
          public:
            PyObject_HEAD
            ATNSimulator object;
            static PyObject *wrap_Object(const ATNSimulator&);
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
