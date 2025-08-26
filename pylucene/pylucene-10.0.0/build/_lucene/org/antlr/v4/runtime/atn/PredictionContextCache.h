#ifndef org_antlr_v4_runtime_atn_PredictionContextCache_H
#define org_antlr_v4_runtime_atn_PredictionContextCache_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
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

          class PredictionContextCache : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_add_092c560f41ffd287,
              mid_get_092c560f41ffd287,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionContextCache(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionContextCache(const PredictionContextCache& obj) : ::java::lang::Object(obj) {}

            PredictionContextCache();

            ::org::antlr::v4::runtime::atn::PredictionContext add(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            ::org::antlr::v4::runtime::atn::PredictionContext get(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(PredictionContextCache);
          extern PyTypeObject *PY_TYPE(PredictionContextCache);

          class t_PredictionContextCache {
          public:
            PyObject_HEAD
            PredictionContextCache object;
            static PyObject *wrap_Object(const PredictionContextCache&);
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
