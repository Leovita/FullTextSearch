#ifndef org_antlr_v4_runtime_atn_PredictionContext_H
#define org_antlr_v4_runtime_atn_PredictionContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class SingletonPredictionContext;
          class ArrayPredictionContext;
          class PredictionContextCache;
          class ATN;
          class PredictionContext;
        }
        class Recognizer;
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
    class Map;
    class IdentityHashMap;
    class List;
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
              mid_equals_00d17418847797d4,
              mid_fromRuleContext_4e71daeca0c5c617,
              mid_getAllContextNodes_be307d94c2bc09b5,
              mid_getAllContextNodes__08e538c46629b318,
              mid_getCachedContext_8f6df99717411ee5,
              mid_getParent_57bbbf9ce8f90af2,
              mid_getReturnState_a3904e10f5bb9437,
              mid_hasEmptyPath_9aa4f33e82ea333f,
              mid_hashCode_bd89ce15dad49192,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_mergeRoot_f379f6a6f74496a1,
              mid_size_bd89ce15dad49192,
              mid_toDOTString_f64c7f87a1afd1c0,
              mid_toString_cfa77efb606b3992,
              mid_toStrings_bf69e77679b3cf2a,
              mid_toStrings_5724519c44b4e2d3,
              mid_calculateEmptyHashCode_bd89ce15dad49192,
              mid_combineCommonParents_b0341ef05af56405,
              mid_calculateHashCode_7238fb63267fc0c7,
              mid_calculateHashCode_36daf49234e72f52,
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
