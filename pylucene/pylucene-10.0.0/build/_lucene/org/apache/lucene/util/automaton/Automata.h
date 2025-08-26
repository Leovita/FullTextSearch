#ifndef org_apache_lucene_util_automaton_Automata_H
#define org_apache_lucene_util_automaton_Automata_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
        class BytesRefIterator;
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

          class Automata : public ::java::lang::Object {
           public:
            enum {
              mid_appendAnyChar_e23ecae95767f635,
              mid_appendChar_9e4aa326032b70ad,
              mid_makeAnyBinary_d4cfa49a0a7bdead,
              mid_makeAnyChar_d4cfa49a0a7bdead,
              mid_makeAnyString_d4cfa49a0a7bdead,
              mid_makeBinary_9f3670e6fbfa1ef8,
              mid_makeBinaryInterval_27fc18ba7c8531c2,
              mid_makeBinaryStringUnion_28c3e994c170e434,
              mid_makeBinaryStringUnion_164415a335b71a17,
              mid_makeChar_8b59fea4e7d4c9ef,
              mid_makeCharRange_62548b2fac1d17f9,
              mid_makeDecimalInterval_1af62663d1d60754,
              mid_makeEmpty_d4cfa49a0a7bdead,
              mid_makeEmptyString_d4cfa49a0a7bdead,
              mid_makeNonEmptyBinary_d4cfa49a0a7bdead,
              mid_makeString_e2fb5d1ad86a4236,
              mid_makeString_2add1f0bb5e13e3b,
              mid_makeStringUnion_28c3e994c170e434,
              mid_makeStringUnion_164415a335b71a17,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automata(const Automata& obj) : ::java::lang::Object(obj) {}

            static jint MAX_STRING_UNION_TERM_LENGTH;

            static jint appendAnyChar(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static jint appendChar(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeAnyBinary();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyChar();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyString();
            static ::org::apache::lucene::util::automaton::Automaton makeBinary(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::util::automaton::Automaton makeBinaryInterval(const ::org::apache::lucene::util::BytesRef &, jboolean, const ::org::apache::lucene::util::BytesRef &, jboolean);
            static ::org::apache::lucene::util::automaton::Automaton makeBinaryStringUnion(const ::java::lang::Iterable &);
            static ::org::apache::lucene::util::automaton::Automaton makeBinaryStringUnion(const ::org::apache::lucene::util::BytesRefIterator &);
            static ::org::apache::lucene::util::automaton::Automaton makeChar(jint);
            static ::org::apache::lucene::util::automaton::Automaton makeCharRange(jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeDecimalInterval(jint, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeEmpty();
            static ::org::apache::lucene::util::automaton::Automaton makeEmptyString();
            static ::org::apache::lucene::util::automaton::Automaton makeNonEmptyBinary();
            static ::org::apache::lucene::util::automaton::Automaton makeString(const ::java::lang::String &);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const JArray< jint > &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeStringUnion(const ::java::lang::Iterable &);
            static ::org::apache::lucene::util::automaton::Automaton makeStringUnion(const ::org::apache::lucene::util::BytesRefIterator &);
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
          extern PyType_Def PY_TYPE_DEF(Automata);
          extern PyTypeObject *PY_TYPE(Automata);

          class t_Automata {
          public:
            PyObject_HEAD
            Automata object;
            static PyObject *wrap_Object(const Automata&);
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
