#ifndef org_egothor_stemmer_MultiTrie_H
#define org_egothor_stemmer_MultiTrie_H

#include "org/egothor/stemmer/Trie.h"

namespace java {
  namespace io {
    class IOException;
    class DataInput;
    class DataOutput;
    class PrintStream;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie : public ::org::egothor::stemmer::Trie {
       public:
        enum {
          mid_init$_b110fc3a58c081ab,
          mid_init$_8ffc0b64a085f7b2,
          mid_add_25d608db26253320,
          mid_getFully_58dc6165804a9474,
          mid_getLastOnPath_58dc6165804a9474,
          mid_printInfo_5e4451c8b725f8cc,
          mid_reduce_750bf77c4c36b3b2,
          mid_store_fe9bf8370403deab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultiTrie(jobject obj) : ::org::egothor::stemmer::Trie(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultiTrie(const MultiTrie& obj) : ::org::egothor::stemmer::Trie(obj) {}

        MultiTrie(jboolean);
        MultiTrie(const ::java::io::DataInput &);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        ::org::egothor::stemmer::Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(MultiTrie);
      extern PyTypeObject *PY_TYPE(MultiTrie);

      class t_MultiTrie {
      public:
        PyObject_HEAD
        MultiTrie object;
        static PyObject *wrap_Object(const MultiTrie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
