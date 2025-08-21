#ifndef org_apache_lucene_util_automaton_NFARunAutomaton_H
#define org_apache_lucene_util_automaton_NFARunAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace automaton {
          class TransitionAccessor;
          class Automaton;
          class ByteRunnable;
          class Transition;
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
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class NFARunAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_71373fad5757dc3c,
              mid_init$_c0be4f60ca27e723,
              mid_getNextTransition_4f84c15bb57a2203,
              mid_getNumTransitions_3c9bba330f083871,
              mid_getSize_20fbf7565993c3d7,
              mid_getTransition_f6e319e1e7df0a84,
              mid_initTransition_699bf4b5b73db6d6,
              mid_isAccept_ae22d3a856ad56f1,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_step_7f733b5d08bb5ec4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NFARunAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NFARunAutomaton(const NFARunAutomaton& obj) : ::java::lang::Object(obj) {}

            NFARunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            NFARunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, jint);

            void getNextTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint getNumTransitions(jint) const;
            jint getSize() const;
            void getTransition(jint, jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jint initTransition(jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jboolean isAccept(jint) const;
            jlong ramBytesUsed() const;
            jint step(jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(NFARunAutomaton);
          extern PyTypeObject *PY_TYPE(NFARunAutomaton);

          class t_NFARunAutomaton {
          public:
            PyObject_HEAD
            NFARunAutomaton object;
            static PyObject *wrap_Object(const NFARunAutomaton&);
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
