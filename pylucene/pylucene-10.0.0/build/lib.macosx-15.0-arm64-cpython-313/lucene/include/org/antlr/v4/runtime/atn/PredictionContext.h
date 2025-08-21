#ifndef org_antlr_v4_runtime_atn_PredictionContext_H
#define org_antlr_v4_runtime_atn_PredictionContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        namespace atn {
          class PredictionContext;
          class PredictionContextCache;
          class ATN;
          class ArrayPredictionContext;
          class SingletonPredictionContext;
        }
        class RuleContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class IdentityHashMap;
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class PredictionContext : public ::java::lang::Object {
           public:
            enum {
              mid_equals_570b5248a6da3ef6,
              mid_fromRuleContext_23fc68ce7b0f688b,
              mid_getAllContextNodes_d54010240c685b8d,
              mid_getAllContextNodes__ce32ec58879a1003,
              mid_getCachedContext_790f870216071496,
              mid_getParent_1cc09022daab7d23,
              mid_getReturnState_3c9bba330f083871,
              mid_hasEmptyPath_947277eca0748c4e,
              mid_hashCode_20fbf7565993c3d7,
              mid_isEmpty_947277eca0748c4e,
              mid_mergeRoot_334375ee27e10d21,
              mid_size_20fbf7565993c3d7,
              mid_toDOTString_9455c2c60fd026bb,
              mid_toString_27d32a9d9f7020a0,
              mid_toStrings_c2e699cff43aeb9c,
              mid_toStrings_0f586bbf8a708962,
              mid_calculateEmptyHashCode_20fbf7565993c3d7,
              mid_combineCommonParents_cdb00eea20d179f7,
              mid_calculateHashCode_19367083bd9ad039,
              mid_calculateHashCode_c177746a50deba1a,
              max_mid
            };

            enum {
              fid_cachedHashCode,
              fid_id,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionContext(const PredictionContext& obj) : ::java::lang::Object(obj) {}

            static jint EMPTY_RETURN_STATE;

            jint _get_cachedHashCode() const;
            jint _get_id() const;

            jboolean equals(const ::java::lang::Object &) const;
            static PredictionContext fromRuleContext(const ::org::antlr::v4::runtime::atn::ATN &, const ::org::antlr::v4::runtime::RuleContext &);
            static ::java::util::List getAllContextNodes(const PredictionContext &);
            static void getAllContextNodes_(const PredictionContext &, const ::java::util::List &, const ::java::util::Map &);
            static PredictionContext getCachedContext(const PredictionContext &, const ::org::antlr::v4::runtime::atn::PredictionContextCache &, const ::java::util::IdentityHashMap &);
            PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
            jboolean hasEmptyPath() const;
            jint hashCode() const;
            jboolean isEmpty() const;
            static PredictionContext mergeRoot(const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &, const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &, jboolean);
            jint size() const;
            static ::java::lang::String toDOTString(const PredictionContext &);
            ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &) const;
            JArray< ::java::lang::String > toStrings(const ::org::antlr::v4::runtime::Recognizer &, jint) const;
            JArray< ::java::lang::String > toStrings(const ::org::antlr::v4::runtime::Recognizer &, const PredictionContext &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PredictionContext);
          extern PyTypeObject *PY_TYPE(PredictionContext);

          class t_PredictionContext {
          public:
            PyObject_HEAD
            PredictionContext object;
            static PyObject *wrap_Object(const PredictionContext&);
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
