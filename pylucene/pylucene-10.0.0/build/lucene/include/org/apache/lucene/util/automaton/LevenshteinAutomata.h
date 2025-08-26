#ifndef org_apache_lucene_util_automaton_LevenshteinAutomata_H
#define org_apache_lucene_util_automaton_LevenshteinAutomata_H

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
        namespace automaton {
          class Automaton;
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

          class LevenshteinAutomata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0c3fb5e97dae8b90,
              mid_init$_a2398002aceeb56a,
              mid_toAutomaton_8b59fea4e7d4c9ef,
              mid_toAutomaton_d16b0e8108389ebc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LevenshteinAutomata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LevenshteinAutomata(const LevenshteinAutomata& obj) : ::java::lang::Object(obj) {}

            static jint MAXIMUM_SUPPORTED_DISTANCE;

            LevenshteinAutomata(const ::java::lang::String &, jboolean);
            LevenshteinAutomata(const JArray< jint > &, jint, jboolean);

            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jint) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jint, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(LevenshteinAutomata);
          extern PyTypeObject *PY_TYPE(LevenshteinAutomata);

          class t_LevenshteinAutomata {
          public:
            PyObject_HEAD
            LevenshteinAutomata object;
            static PyObject *wrap_Object(const LevenshteinAutomata&);
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
