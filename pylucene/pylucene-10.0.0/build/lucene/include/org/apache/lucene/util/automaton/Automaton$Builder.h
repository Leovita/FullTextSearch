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
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
              mid_addEpsilon_e13cff512ebda969,
              mid_addTransition_20022b6d5e83c732,
              mid_addTransition_94688dd632556392,
              mid_copy_71373fad5757dc3c,
              mid_copyStates_71373fad5757dc3c,
              mid_createState_20fbf7565993c3d7,
              mid_finish_275570da72a90658,
              mid_getNumStates_20fbf7565993c3d7,
              mid_isAccept_ae22d3a856ad56f1,
              mid_setAccept_2936d2706a18a684,
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
