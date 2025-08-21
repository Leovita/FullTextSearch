#ifndef org_antlr_v4_runtime_atn_ATNConfig_H
#define org_antlr_v4_runtime_atn_ATNConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
          class PredictionContext;
          class SemanticContext;
          class ATNConfig;
        }
        class Recognizer;
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
              mid_init$_50678efd7e3803cd,
              mid_init$_686ae8b83905c858,
              mid_init$_586f509098d2d7fe,
              mid_init$_3774101deb35c039,
              mid_init$_536323d430b07cdd,
              mid_init$_231e02e246366492,
              mid_init$_d23064292c4bc36c,
              mid_equals_1274b529738a1c30,
              mid_equals_570b5248a6da3ef6,
              mid_getOuterContextDepth_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_isPrecedenceFilterSuppressed_947277eca0748c4e,
              mid_setPrecedenceFilterSuppressed_b110fc3a58c081ab,
              mid_toString_09a7afff1868fc5e,
              mid_toString_d7f7f3fa5f7c5519,
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
