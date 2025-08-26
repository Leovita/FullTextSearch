#ifndef org_apache_lucene_index_ReaderSlice_H
#define org_apache_lucene_index_ReaderSlice_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ReaderSlice;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ReaderSlice : public ::java::lang::Record {
         public:
          enum {
            mid_init$_eee637a6cebc299b,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_length_bd89ce15dad49192,
            mid_readerIndex_bd89ce15dad49192,
            mid_start_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderSlice(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReaderSlice(const ReaderSlice& obj) : ::java::lang::Record(obj) {}

          static JArray< ReaderSlice > *EMPTY_ARRAY;

          ReaderSlice(jint, jint, jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jint length() const;
          jint readerIndex() const;
          jint start() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(ReaderSlice);
        extern PyTypeObject *PY_TYPE(ReaderSlice);

        class t_ReaderSlice {
        public:
          PyObject_HEAD
          ReaderSlice object;
          static PyObject *wrap_Object(const ReaderSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
