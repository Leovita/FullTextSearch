#ifndef org_apache_lucene_util_automaton_LimitedFiniteStringsIterator_H
#define org_apache_lucene_util_automaton_LimitedFiniteStringsIterator_H

#include "org/apache/lucene/util/automaton/FiniteStringsIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
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

          class LimitedFiniteStringsIterator : public ::org::apache::lucene::util::automaton::FiniteStringsIterator {
           public:
            enum {
              mid_init$_4144d90d35e82925,
              mid_next_467dd1d064587a13,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitedFiniteStringsIterator(jobject obj) : ::org::apache::lucene::util::automaton::FiniteStringsIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitedFiniteStringsIterator(const LimitedFiniteStringsIterator& obj) : ::org::apache::lucene::util::automaton::FiniteStringsIterator(obj) {}

            LimitedFiniteStringsIterator(const ::org::apache::lucene::util::automaton::Automaton &, jint);

            ::org::apache::lucene::util::IntsRef next() const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(LimitedFiniteStringsIterator);
          extern PyTypeObject *PY_TYPE(LimitedFiniteStringsIterator);

          class t_LimitedFiniteStringsIterator {
          public:
            PyObject_HEAD
            LimitedFiniteStringsIterator object;
            static PyObject *wrap_Object(const LimitedFiniteStringsIterator&);
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
