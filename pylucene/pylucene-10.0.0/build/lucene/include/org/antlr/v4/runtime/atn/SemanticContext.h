#ifndef org_antlr_v4_runtime_atn_SemanticContext_H
#define org_antlr_v4_runtime_atn_SemanticContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        namespace atn {
          class SemanticContext;
        }
        class RuleContext;
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

          class SemanticContext : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_and_69faa054a378ea0f,
              mid_eval_2f6604bbbd626ce3,
              mid_evalPrecedence_626336ee8a08c066,
              mid_or_69faa054a378ea0f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SemanticContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemanticContext(const SemanticContext& obj) : ::java::lang::Object(obj) {}

            SemanticContext();

            static SemanticContext and$(const SemanticContext &, const SemanticContext &);
            jboolean eval(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            SemanticContext evalPrecedence(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            static SemanticContext or$(const SemanticContext &, const SemanticContext &);
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
          extern PyType_Def PY_TYPE_DEF(SemanticContext);
          extern PyTypeObject *PY_TYPE(SemanticContext);

          class t_SemanticContext {
          public:
            PyObject_HEAD
            SemanticContext object;
            static PyObject *wrap_Object(const SemanticContext&);
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
