#ifndef org_antlr_v4_runtime_atn_ATNConfig_H
#define org_antlr_v4_runtime_atn_ATNConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        namespace atn {
          class SemanticContext;
          class ATNConfig;
          class PredictionContext;
          class ATNState;
        }
      }
    }
  }
}
namespace java {
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

          class ATNConfig : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a050e2a059da6004,
              mid_init$_61f699da64111239,
              mid_init$_9bcc7b611f363dda,
              mid_init$_e33f00e1f60ccd83,
              mid_init$_a10dd91c1219b512,
              mid_init$_c04f01fc1c742db3,
              mid_init$_d69deeb9f7c486d1,
              mid_equals_4291e6f193a35bdb,
              mid_equals_00d17418847797d4,
              mid_getOuterContextDepth_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_isPrecedenceFilterSuppressed_9aa4f33e82ea333f,
              mid_setPrecedenceFilterSuppressed_f5dd97eebf6a215a,
              mid_toString_e7df854526d67fa3,
              mid_toString_0583c0ff243e88f5,
              max_mid
            };

            enum {
              fid_alt,
              fid_context,
              fid_reachesIntoOuterContext,
              fid_semanticContext,
              fid_state,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfig(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfig(const ATNConfig& obj) : ::java::lang::Object(obj) {}

            jint _get_alt() const;
            ::org::antlr::v4::runtime::atn::PredictionContext _get_context() const;
            void _set_context(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            jint _get_reachesIntoOuterContext() const;
            void _set_reachesIntoOuterContext(jint) const;
            ::org::antlr::v4::runtime::atn::SemanticContext _get_semanticContext() const;
            ::org::antlr::v4::runtime::atn::ATNState _get_state() const;

            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::PredictionContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState &, jint, const ::org::antlr::v4::runtime::atn::PredictionContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::PredictionContext &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState &, jint, const ::org::antlr::v4::runtime::atn::PredictionContext &, const ::org::antlr::v4::runtime::atn::SemanticContext &);

            jboolean equals(const ATNConfig &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getOuterContextDepth() const;
            jint hashCode() const;
            jboolean isPrecedenceFilterSuppressed() const;
            void setPrecedenceFilterSuppressed(jboolean) const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ATNConfig);
          extern PyTypeObject *PY_TYPE(ATNConfig);

          class t_ATNConfig {
          public:
            PyObject_HEAD
            ATNConfig object;
            static PyObject *wrap_Object(const ATNConfig&);
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
