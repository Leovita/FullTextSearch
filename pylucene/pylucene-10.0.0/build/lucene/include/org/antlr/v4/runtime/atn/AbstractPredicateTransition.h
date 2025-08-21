#ifndef org_antlr_v4_runtime_atn_AbstractPredicateTransition_H
#define org_antlr_v4_runtime_atn_AbstractPredicateTransition_H

#include "org/antlr/v4/runtime/atn/Transition.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
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

          class AbstractPredicateTransition : public ::org::antlr::v4::runtime::atn::Transition {
           public:
            enum {
              mid_init$_dbe437c90ceb25ad,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractPredicateTransition(jobject obj) : ::org::antlr::v4::runtime::atn::Transition(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractPredicateTransition(const AbstractPredicateTransition& obj) : ::org::antlr::v4::runtime::atn::Transition(obj) {}

            AbstractPredicateTransition(const ::org::antlr::v4::runtime::atn::ATNState &);
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
          extern PyType_Def PY_TYPE_DEF(AbstractPredicateTransition);
          extern PyTypeObject *PY_TYPE(AbstractPredicateTransition);

          class t_AbstractPredicateTransition {
          public:
            PyObject_HEAD
            AbstractPredicateTransition object;
            static PyObject *wrap_Object(const AbstractPredicateTransition&);
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
