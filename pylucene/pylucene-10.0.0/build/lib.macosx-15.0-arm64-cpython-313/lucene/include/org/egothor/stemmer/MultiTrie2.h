#ifndef org_egothor_stemmer_MultiTrie2_H
#define org_egothor_stemmer_MultiTrie2_H

#include "org/egothor/stemmer/MultiTrie.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Reduce;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class DataInput;
    class DataOutput;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie2 : public ::org::egothor::stemmer::MultiTrie {
       public:
        enum {
          mid_init$_b110fc3a58c081ab,
          mid_init$_8ffc0b64a085f7b2,
          mid_add_25d608db26253320,
          mid_decompose_743dedb8290689b3,
          mid_getFully_58dc6165804a9474,
          mid_getLastOnPath_58dc6165804a9474,
          mid_reduce_750bf77c4c36b3b2,
          mid_store_fe9bf8370403deab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultiTrie2(jobject obj) : ::org::egothor::stemmer::MultiTrie(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultiTrie2(const MultiTrie2& obj) : ::org::egothor::stemmer::MultiTrie(obj) {}

        MultiTrie2(jboolean);
        MultiTrie2(const ::java::io::DataInput &);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::CharSequence > decompose(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
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
      extern PyType_Def PY_TYPE_DEF(MultiTrie2);
      extern PyTypeObject *PY_TYPE(MultiTrie2);

      class t_MultiTrie2 {
      public:
        PyObject_HEAD
        MultiTrie2 object;
        static PyObject *wrap_Object(const MultiTrie2&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
