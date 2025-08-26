#ifndef org_apache_lucene_util_automaton_Automaton$Builder_H
#define org_apache_lucene_util_automaton_Automaton$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
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

          class Automaton$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_645c25455f5b9b1c,
              mid_addEpsilon_645c25455f5b9b1c,
              mid_addTransition_eee637a6cebc299b,
              mid_addTransition_126b4efb1bebbe4a,
              mid_copy_7350cbdcd883df0a,
              mid_copyStates_7350cbdcd883df0a,
              mid_createState_bd89ce15dad49192,
              mid_finish_d4cfa49a0a7bdead,
              mid_getNumStates_bd89ce15dad49192,
              mid_isAccept_a8281eb3b9d9672d,
              mid_setAccept_a0fed0a2cd38e7b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automaton$Builder(const Automaton$Builder& obj) : ::java::lang::Object(obj) {}

            Automaton$Builder();
            Automaton$Builder(jint, jint);

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const ::org::apache::lucene::util::automaton::Automaton &) const;
            void copyStates(const ::org::apache::lucene::util::automaton::Automaton &) const;
            jint createState() const;
            ::org::apache::lucene::util::automaton::Automaton finish() const;
            jint getNumStates() const;
            jboolean isAccept(jint) const;
            void setAccept(jint, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(Automaton$Builder);
          extern PyTypeObject *PY_TYPE(Automaton$Builder);

          class t_Automaton$Builder {
          public:
            PyObject_HEAD
            Automaton$Builder object;
            static PyObject *wrap_Object(const Automaton$Builder&);
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
