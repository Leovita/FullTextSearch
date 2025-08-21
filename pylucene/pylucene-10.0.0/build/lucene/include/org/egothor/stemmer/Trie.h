#ifndef org_egothor_stemmer_Trie_H
#define org_egothor_stemmer_Trie_H

#include "java/lang/Object.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Row;
      class Reduce;
    }
  }
}
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Trie : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b110fc3a58c081ab,
          mid_init$_8ffc0b64a085f7b2,
          mid_init$_9c139270ef1d60a7,
          mid_getAll_743dedb8290689b3,
          mid_getCells_20fbf7565993c3d7,
          mid_getCellsPnt_20fbf7565993c3d7,
          mid_getCellsVal_20fbf7565993c3d7,
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

        explicit Trie(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Trie(const Trie& obj) : ::java::lang::Object(obj) {}

        Trie(jboolean);
        Trie(const ::java::io::DataInput &);
        Trie(jboolean, jint, const ::java::util::List &, const ::java::util::List &);

        JArray< ::java::lang::CharSequence > getAll(const ::java::lang::CharSequence &) const;
        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Trie);
      extern PyTypeObject *PY_TYPE(Trie);

      class t_Trie {
      public:
        PyObject_HEAD
        Trie object;
        static PyObject *wrap_Object(const Trie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
