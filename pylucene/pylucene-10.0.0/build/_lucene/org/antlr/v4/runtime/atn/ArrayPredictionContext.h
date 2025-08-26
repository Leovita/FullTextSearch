#ifndef org_antlr_v4_runtime_atn_ArrayPredictionContext_H
#define org_antlr_v4_runtime_atn_ArrayPredictionContext_H

#include "org/antlr/v4/runtime/atn/PredictionContext.h"

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
namespace java {
  namespace lang {
    class Object;
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

          class ArrayPredictionContext : public ::org::antlr::v4::runtime::atn::PredictionContext {
           public:
            enum {
              mid_init$_03d8b63f496a8314,
              mid_init$_e59ae2de09f361af,
              mid_equals_00d17418847797d4,
              mid_getParent_57bbbf9ce8f90af2,
              mid_getReturnState_a3904e10f5bb9437,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
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
