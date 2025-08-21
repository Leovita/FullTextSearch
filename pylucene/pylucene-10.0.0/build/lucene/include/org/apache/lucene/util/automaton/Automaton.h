#ifndef org_apache_lucene_util_automaton_Automaton_H
#define org_apache_lucene_util_automaton_Automaton_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
              mid_addEpsilon_e13cff512ebda969,
              mid_addTransition_20022b6d5e83c732,
              mid_addTransition_94688dd632556392,
              mid_copy_71373fad5757dc3c,
              mid_createState_20fbf7565993c3d7,
              mid_finishState_3720c61b0679eb3e,
              mid_getNextTransition_4f84c15bb57a2203,
              mid_getNumStates_20fbf7565993c3d7,
              mid_getNumTransitions_20fbf7565993c3d7,
              mid_getNumTransitions_3c9bba330f083871,
              mid_getSortedTransitions_6d7bb2a22c1e859d,
              mid_getStartPoints_623cd4a044ba647a,
              mid_getTransition_f6e319e1e7df0a84,
              mid_initTransition_699bf4b5b73db6d6,
              mid_isAccept_ae22d3a856ad56f1,
              mid_isDeterministic_947277eca0748c4e,
              mid_next_21f280e28db6d299,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_setAccept_2936d2706a18a684,
              mid_step_7f733b5d08bb5ec4,
              mid_toDot_09a7afff1868fc5e,
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
