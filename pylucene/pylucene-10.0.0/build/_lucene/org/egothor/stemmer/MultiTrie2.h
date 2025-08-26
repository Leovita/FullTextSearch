#ifndef org_egothor_stemmer_MultiTrie2_H
#define org_egothor_stemmer_MultiTrie2_H

#include "org/egothor/stemmer/MultiTrie.h"

namespace java {
  namespace io {
    class DataInput;
    class DataOutput;
    class IOException;
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
      class Trie;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie2 : public ::org::egothor::stemmer::MultiTrie {
       public:
        enum {
          mid_init$_f5dd97eebf6a215a,
          mid_init$_97ec23eaea7e6222,
          mid_add_8603315685815f47,
          mid_decompose_881843cf2b0e8f23,
          mid_getFully_aa1c9702f9e97de9,
          mid_getLastOnPath_aa1c9702f9e97de9,
          mid_reduce_3fcb27227235a388,
          mid_store_5ebb39b7772e6a1c,
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
