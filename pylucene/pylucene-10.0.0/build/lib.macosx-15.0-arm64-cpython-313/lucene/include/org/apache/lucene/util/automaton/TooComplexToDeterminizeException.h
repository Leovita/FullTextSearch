#ifndef org_apache_lucene_util_automaton_TooComplexToDeterminizeException_H
#define org_apache_lucene_util_automaton_TooComplexToDeterminizeException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
          class TooComplexToDeterminizeException;
          class RegExp;
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

          class TooComplexToDeterminizeException : public ::java::lang::RuntimeException {
           public:
            enum {
              mid_init$_c82d7364f21ccfa4,
              mid_init$_c0be4f60ca27e723,
              mid_getAutomaton_275570da72a90658,
              mid_getDeterminizeWorkLimit_20fbf7565993c3d7,
              mid_getRegExp_6bb6a19377f37398,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TooComplexToDeterminizeException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TooComplexToDeterminizeException(const TooComplexToDeterminizeException& obj) : ::java::lang::RuntimeException(obj) {}

            TooComplexToDeterminizeException(const ::org::apache::lucene::util::automaton::RegExp &, const TooComplexToDeterminizeException &);
            TooComplexToDeterminizeException(const ::org::apache::lucene::util::automaton::Automaton &, jint);

            ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
            jint getDeterminizeWorkLimit() const;
            ::org::apache::lucene::util::automaton::RegExp getRegExp() const;
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
          extern PyType_Def PY_TYPE_DEF(TooComplexToDeterminizeException);
          extern PyTypeObject *PY_TYPE(TooComplexToDeterminizeException);

          class t_TooComplexToDeterminizeException {
          public:
            PyObject_HEAD
            TooComplexToDeterminizeException object;
            static PyObject *wrap_Object(const TooComplexToDeterminizeException&);
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
