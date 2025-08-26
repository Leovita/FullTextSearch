#ifndef org_egothor_stemmer_Trie_H
#define org_egothor_stemmer_Trie_H

#include "java/lang/Object.h"

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
  namespace util {
    class List;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
      class Row;
      class Trie;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Trie : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f5dd97eebf6a215a,
          mid_init$_97ec23eaea7e6222,
          mid_init$_64ba8267679bb350,
          mid_getAll_881843cf2b0e8f23,
          mid_getCells_bd89ce15dad49192,
          mid_getCellsPnt_bd89ce15dad49192,
          mid_getCellsVal_bd89ce15dad49192,
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
