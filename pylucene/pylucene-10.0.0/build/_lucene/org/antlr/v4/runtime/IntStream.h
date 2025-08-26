#ifndef org_antlr_v4_runtime_IntStream_H
#define org_antlr_v4_runtime_IntStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class IntStream : public ::java::lang::Object {
         public:
          enum {
            mid_LA_a3904e10f5bb9437,
            mid_consume_e7bdbe105ce1bafb,
            mid_getSourceName_e7df854526d67fa3,
            mid_index_bd89ce15dad49192,
            mid_mark_bd89ce15dad49192,
            mid_release_8226bd0b0fc13dba,
            mid_seek_8226bd0b0fc13dba,
            mid_size_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntStream(const IntStream& obj) : ::java::lang::Object(obj) {}

          static jint EOF;
          static ::java::lang::String *UNKNOWN_SOURCE_NAME;

          jint LA(jint) const;
          void consume() const;
          ::java::lang::String getSourceName() const;
          jint index() const;
          jint mark() const;
          void release(jint) const;
          void seek(jint) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(IntStream);
        extern PyTypeObject *PY_TYPE(IntStream);

        class t_IntStream {
        public:
          PyObject_HEAD
          IntStream object;
          static PyObject *wrap_Object(const IntStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
