#ifndef org_apache_lucene_util_automaton_NFARunAutomaton_H
#define org_apache_lucene_util_automaton_NFARunAutomaton_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class NFARunAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7350cbdcd883df0a,
              mid_init$_4144d90d35e82925,
              mid_getNextTransition_6c54ca7f042c9484,
              mid_getNumTransitions_a3904e10f5bb9437,
              mid_getSize_bd89ce15dad49192,
              mid_getTransition_092e1865fab21c72,
              mid_initTransition_4be620059fef20d2,
              mid_isAccept_a8281eb3b9d9672d,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_step_7f27cf81a85a97e9,
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
