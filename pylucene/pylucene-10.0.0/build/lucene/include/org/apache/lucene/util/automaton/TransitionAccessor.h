#ifndef org_apache_lucene_util_automaton_TransitionAccessor_H
#define org_apache_lucene_util_automaton_TransitionAccessor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
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

          class TransitionAccessor : public ::java::lang::Object {
           public:
            enum {
              mid_getNextTransition_6c54ca7f042c9484,
              mid_getNumTransitions_a3904e10f5bb9437,
              mid_getTransition_092e1865fab21c72,
              mid_initTransition_4be620059fef20d2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TransitionAccessor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TransitionAccessor(const TransitionAccessor& obj) : ::java::lang::Object(obj) {}

            void getNextTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint getNumTransitions(jint) const;
            void getTransition(jint, jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jint initTransition(jint, const ::org::apache::lucene::util::automaton::Transition &) const;
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
          extern PyType_Def PY_TYPE_DEF(TransitionAccessor);
          extern PyTypeObject *PY_TYPE(TransitionAccessor);

          class t_TransitionAccessor {
          public:
            PyObject_HEAD
            TransitionAccessor object;
            static PyObject *wrap_Object(const TransitionAccessor&);
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
