#ifndef java_io_BufferedWriter_H
#define java_io_BufferedWriter_H

#include "java/io/Writer.h"

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

    class BufferedWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_46e0745a29d25bc4,
        mid_init$_e6ca7aa1d9f2bdcf,
        mid_close_3720c61b0679eb3e,
        mid_flush_3720c61b0679eb3e,
        mid_newLine_3720c61b0679eb3e,
        mid_write_540b2b23d51b1efd,
        mid_write_fc9be2ded8ee801f,
        mid_write_54573ef49c0daa22,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BufferedWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BufferedWriter(const BufferedWriter& obj) : ::java::io::Writer(obj) {}

      BufferedWriter(const ::java::io::Writer &);
      BufferedWriter(const ::java::io::Writer &, jint);

      void close() const;
      void flush() const;
      void newLine() const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(BufferedWriter);
    extern PyTypeObject *PY_TYPE(BufferedWriter);

    class t_BufferedWriter {
    public:
      PyObject_HEAD
      BufferedWriter object;
      static PyObject *wrap_Object(const BufferedWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
