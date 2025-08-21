#ifndef java_io_BufferedReader_H
#define java_io_BufferedReader_H

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

    class BufferedReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_fa55492f0f5d7f31,
        mid_init$_dfcd41e6e2106c34,
        mid_close_3720c61b0679eb3e,
        mid_mark_540b2b23d51b1efd,
        mid_markSupported_947277eca0748c4e,
        mid_read_20fbf7565993c3d7,
        mid_read_db543c1e894f3140,
        mid_readLine_09a7afff1868fc5e,
        mid_ready_947277eca0748c4e,
        mid_reset_3720c61b0679eb3e,
        mid_skip_91d66fa3ea476cea,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BufferedReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BufferedReader(const BufferedReader& obj) : ::java::io::Reader(obj) {}

      BufferedReader(const ::java::io::Reader &);
      BufferedReader(const ::java::io::Reader &, jint);

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      ::java::lang::String readLine() const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(BufferedReader);
    extern PyTypeObject *PY_TYPE(BufferedReader);

    class t_BufferedReader {
    public:
      PyObject_HEAD
      BufferedReader object;
      static PyObject *wrap_Object(const BufferedReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
