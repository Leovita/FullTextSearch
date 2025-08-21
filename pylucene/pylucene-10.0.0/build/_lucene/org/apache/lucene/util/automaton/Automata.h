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
        class BytesRefIterator;
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

          class Automata : public ::java::lang::Object {
           public:
            enum {
              mid_appendAnyChar_5ded106147df2bd6,
              mid_appendChar_8d2d65409dafd4b3,
              mid_makeAnyBinary_275570da72a90658,
              mid_makeAnyChar_275570da72a90658,
              mid_makeAnyString_275570da72a90658,
              mid_makeBinary_742f04198c20516e,
              mid_makeBinaryInterval_cc7e0590f4652dda,
              mid_makeBinaryStringUnion_3745ed8e4c4fd302,
              mid_makeBinaryStringUnion_3b6d3c5a15b527e7,
              mid_makeChar_bee936adc7ebdd5f,
              mid_makeCharRange_daab0f24fbb822f4,
              mid_makeDecimalInterval_0f6495972351b628,
              mid_makeEmpty_275570da72a90658,
              mid_makeEmptyString_275570da72a90658,
              mid_makeNonEmptyBinary_275570da72a90658,
              mid_makeString_19ccfea663b93327,
              mid_makeString_d7d157c2bbd3d50d,
              mid_makeStringUnion_3745ed8e4c4fd302,
              mid_makeStringUnion_3b6d3c5a15b527e7,
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
