#ifndef org_antlr_v4_runtime_atn_SingletonPredictionContext_H
#define org_antlr_v4_runtime_atn_SingletonPredictionContext_H

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

          class SingletonPredictionContext : public ::org::antlr::v4::runtime::atn::PredictionContext {
           public:
            enum {
              mid_create_6f5c365553ddfa60,
              mid_equals_570b5248a6da3ef6,
              mid_getParent_1cc09022daab7d23,
              mid_getReturnState_3c9bba330f083871,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_parent,
              fid_returnState,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SingletonPredictionContext(jobject obj) : ::org::antlr::v4::runtime::atn::PredictionContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SingletonPredictionContext(const SingletonPredictionContext& obj) : ::org::antlr::v4::runtime::atn::PredictionContext(obj) {}

            ::org::antlr::v4::runtime::atn::PredictionContext _get_parent() const;
            jint _get_returnState() const;

            static SingletonPredictionContext create(const ::org::antlr::v4::runtime::atn::PredictionContext &, jint);
            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SingletonPredictionContext);
          extern PyTypeObject *PY_TYPE(SingletonPredictionContext);

          class t_SingletonPredictionContext {
          public:
            PyObject_HEAD
            SingletonPredictionContext object;
            static PyObject *wrap_Object(const SingletonPredictionContext&);
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
