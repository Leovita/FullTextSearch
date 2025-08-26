#ifndef org_apache_lucene_util_automaton_RunAutomaton_H
#define org_apache_lucene_util_automaton_RunAutomaton_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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

          class RunAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_equals_00d17418847797d4,
              mid_getCharIntervals_4b72a28a860ae838,
              mid_getSize_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_isAccept_a8281eb3b9d9672d,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_step_7f27cf81a85a97e9,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RunAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RunAutomaton(const RunAutomaton& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            JArray< jint > getCharIntervals() const;
            jint getSize() const;
            jint hashCode() const;
            jboolean isAccept(jint) const;
            jlong ramBytesUsed() const;
            jint step(jint, jint) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(RunAutomaton);
          extern PyTypeObject *PY_TYPE(RunAutomaton);

          class t_RunAutomaton {
          public:
            PyObject_HEAD
            RunAutomaton object;
            static PyObject *wrap_Object(const RunAutomaton&);
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
