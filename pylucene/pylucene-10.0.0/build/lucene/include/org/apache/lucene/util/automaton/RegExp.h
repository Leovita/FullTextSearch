#ifndef org_apache_lucene_util_automaton_RegExp_H
#define org_apache_lucene_util_automaton_RegExp_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class AutomatonProvider;
          class RegExp;
          class TooComplexToDeterminizeException;
          class Automaton;
          class RegExp$Kind;
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

          class RegExp : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_init$_49e27e98009acf15,
              mid_init$_ae8275bdfad592e6,
              mid_getIdentifiers_79131c6bbcf08916,
              mid_getOriginalString_e7df854526d67fa3,
              mid_toAutomaton_d4cfa49a0a7bdead,
              mid_toAutomaton_3b592332473f6d87,
              mid_toAutomaton_62b2bfe1f5e547bb,
              mid_toString_e7df854526d67fa3,
              mid_toStringTree_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_c,
              fid_digits,
              fid_exp1,
              fid_exp2,
              fid_from,
              fid_kind,
              fid_max,
              fid_min,
              fid_s,
              fid_to,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RegExp(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RegExp(const RegExp& obj) : ::java::lang::Object(obj) {}

            static jint ALL;
            static jint ANYSTRING;
            static jint ASCII_CASE_INSENSITIVE;
            static jint AUTOMATON;
            static jint DEPRECATED_COMPLEMENT;
            static jint EMPTY;
            static jint INTERSECTION;
            static jint INTERVAL;
            static jint NONE;

            jint _get_c() const;
            jint _get_digits() const;
            RegExp _get_exp1() const;
            RegExp _get_exp2() const;
            jint _get_from() const;
            ::org::apache::lucene::util::automaton::RegExp$Kind _get_kind() const;
            jint _get_max() const;
            jint _get_min() const;
            ::java::lang::String _get_s() const;
            jint _get_to() const;

            RegExp(const ::java::lang::String &);
            RegExp(const ::java::lang::String &, jint);
            RegExp(const ::java::lang::String &, jint, jint);

            ::java::util::Set getIdentifiers() const;
            ::java::lang::String getOriginalString() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::java::util::Map &) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::automaton::AutomatonProvider &) const;
            ::java::lang::String toString() const;
            ::java::lang::String toStringTree() const;
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
          extern PyType_Def PY_TYPE_DEF(RegExp);
          extern PyTypeObject *PY_TYPE(RegExp);

          class t_RegExp {
          public:
            PyObject_HEAD
            RegExp object;
            static PyObject *wrap_Object(const RegExp&);
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
