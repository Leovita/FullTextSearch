#ifndef java_io_StringReader_H
#define java_io_StringReader_H

#include "java/io/Reader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_close_e7bdbe105ce1bafb,
        mid_mark_8226bd0b0fc13dba,
        mid_markSupported_9aa4f33e82ea333f,
        mid_read_bd89ce15dad49192,
        mid_read_872baf22ed11fbaa,
        mid_ready_9aa4f33e82ea333f,
        mid_reset_e7bdbe105ce1bafb,
        mid_skip_3dc1c6e3a5a0baf0,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringReader(const StringReader& obj) : ::java::io::Reader(obj) {}

      StringReader(const ::java::lang::String &);

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(StringReader);
    extern PyTypeObject *PY_TYPE(StringReader);

    class t_StringReader {
    public:
      PyObject_HEAD
      StringReader object;
      static PyObject *wrap_Object(const StringReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
