#ifndef org_egothor_stemmer_MultiTrie_H
#define org_egothor_stemmer_MultiTrie_H

#include "org/egothor/stemmer/Trie.h"

namespace java {
  namespace io {
    class DataInput;
    class DataOutput;
    class IOException;
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
          mid_init$_f5dd97eebf6a215a,
          mid_init$_97ec23eaea7e6222,
          mid_add_8603315685815f47,
          mid_getFully_aa1c9702f9e97de9,
          mid_getLastOnPath_aa1c9702f9e97de9,
          mid_printInfo_070009a171fdd3d4,
          mid_reduce_3fcb27227235a388,
          mid_store_5ebb39b7772e6a1c,
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
