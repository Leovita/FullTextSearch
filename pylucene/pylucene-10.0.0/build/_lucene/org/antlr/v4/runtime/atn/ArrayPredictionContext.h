#ifndef org_antlr_v4_runtime_atn_ArrayPredictionContext_H
#define org_antlr_v4_runtime_atn_ArrayPredictionContext_H

#include "org/antlr/v4/runtime/atn/PredictionContext.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class SingletonPredictionContext;
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

          class ArrayPredictionContext : public ::org::antlr::v4::runtime::atn::PredictionContext {
           public:
            enum {
              mid_init$_13b936985587ee11,
              mid_init$_b1606c0b50bd41f2,
              mid_equals_570b5248a6da3ef6,
              mid_getParent_1cc09022daab7d23,
              mid_getReturnState_3c9bba330f083871,
              mid_isEmpty_947277eca0748c4e,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_parents,
              fid_returnStates,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArrayPredictionContext(jobject obj) : ::org::antlr::v4::runtime::atn::PredictionContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArrayPredictionContext(const ArrayPredictionContext& obj) : ::org::antlr::v4::runtime::atn::PredictionContext(obj) {}

            JArray< ::org::antlr::v4::runtime::atn::PredictionContext > _get_parents() const;
            JArray< jint > _get_returnStates() const;

            ArrayPredictionContext(const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &);
            ArrayPredictionContext(const JArray< ::org::antlr::v4::runtime::atn::PredictionContext > &, const JArray< jint > &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
            jboolean isEmpty() const;
            jint size() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(ArrayPredictionContext);
          extern PyTypeObject *PY_TYPE(ArrayPredictionContext);

          class t_ArrayPredictionContext {
          public:
            PyObject_HEAD
            ArrayPredictionContext object;
            static PyObject *wrap_Object(const ArrayPredictionContext&);
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
