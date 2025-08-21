#ifndef org_antlr_v4_runtime_atn_SemanticContext$PrecedencePredicate_H
#define org_antlr_v4_runtime_atn_SemanticContext$PrecedencePredicate_H

#include "org/antlr/v4/runtime/atn/SemanticContext.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        namespace atn {
          class SemanticContext$PrecedencePredicate;
        }
        class RuleContext;
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

          class SemanticContext$PrecedencePredicate : public ::org::antlr::v4::runtime::atn::SemanticContext {
           public:
            enum {
              mid_init$_540b2b23d51b1efd,
              mid_compareTo_26e5bb05692a12d5,
              mid_equals_570b5248a6da3ef6,
              mid_eval_2f6604bbbd626ce3,
              mid_evalPrecedence_626336ee8a08c066,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_precedence,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SemanticContext$PrecedencePredicate(jobject obj) : ::org::antlr::v4::runtime::atn::SemanticContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemanticContext$PrecedencePredicate(const SemanticContext$PrecedencePredicate& obj) : ::org::antlr::v4::runtime::atn::SemanticContext(obj) {}

            jint _get_precedence() const;

            SemanticContext$PrecedencePredicate(jint);

            jint compareTo(const SemanticContext$PrecedencePredicate &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean eval(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            ::org::antlr::v4::runtime::atn::SemanticContext evalPrecedence(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(SemanticContext$PrecedencePredicate);
          extern PyTypeObject *PY_TYPE(SemanticContext$PrecedencePredicate);

          class t_SemanticContext$PrecedencePredicate {
          public:
            PyObject_HEAD
            SemanticContext$PrecedencePredicate object;
            static PyObject *wrap_Object(const SemanticContext$PrecedencePredicate&);
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
