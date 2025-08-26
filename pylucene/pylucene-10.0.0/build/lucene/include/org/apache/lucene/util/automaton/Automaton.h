#ifndef org_apache_lucene_util_automaton_Automaton_H
#define org_apache_lucene_util_automaton_Automaton_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
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

          class Automaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_645c25455f5b9b1c,
              mid_addEpsilon_645c25455f5b9b1c,
              mid_addTransition_eee637a6cebc299b,
              mid_addTransition_126b4efb1bebbe4a,
              mid_copy_7350cbdcd883df0a,
              mid_createState_bd89ce15dad49192,
              mid_finishState_e7bdbe105ce1bafb,
              mid_getNextTransition_6c54ca7f042c9484,
              mid_getNumStates_bd89ce15dad49192,
              mid_getNumTransitions_bd89ce15dad49192,
              mid_getNumTransitions_a3904e10f5bb9437,
              mid_getSortedTransitions_6578d66d8b7fb65e,
              mid_getStartPoints_4b72a28a860ae838,
              mid_getTransition_092e1865fab21c72,
              mid_initTransition_4be620059fef20d2,
              mid_isAccept_a8281eb3b9d9672d,
              mid_isDeterministic_9aa4f33e82ea333f,
              mid_next_a7345cd29c87023e,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_setAccept_a0fed0a2cd38e7b1,
              mid_step_7f27cf81a85a97e9,
              mid_toDot_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automaton(const Automaton& obj) : ::java::lang::Object(obj) {}

            Automaton();
            Automaton(jint, jint);

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const Automaton &) const;
            jint createState() const;
            void finishState() const;
            void getNextTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint getNumStates() const;
            jint getNumTransitions() const;
            jint getNumTransitions(jint) const;
            JArray< JArray< ::org::apache::lucene::util::automaton::Transition > > getSortedTransitions() const;
            JArray< jint > getStartPoints() const;
            void getTransition(jint, jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jint initTransition(jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jboolean isAccept(jint) const;
            jboolean isDeterministic() const;
            jint next(const ::org::apache::lucene::util::automaton::Transition &, jint) const;
            jlong ramBytesUsed() const;
            void setAccept(jint, jboolean) const;
            jint step(jint, jint) const;
            ::java::lang::String toDot() const;
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
          extern PyType_Def PY_TYPE_DEF(Automaton);
          extern PyTypeObject *PY_TYPE(Automaton);

          class t_Automaton {
          public:
            PyObject_HEAD
            Automaton object;
            static PyObject *wrap_Object(const Automaton&);
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
