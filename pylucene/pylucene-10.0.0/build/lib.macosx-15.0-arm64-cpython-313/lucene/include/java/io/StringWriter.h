#ifndef java_io_StringWriter_H
#define java_io_StringWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace io {
    class IOException;
    class StringWriter;
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
        mid_append_dfb0292a931845cc,
        mid_append_d1c830b9f262498e,
        mid_append_cfba332fdb13d759,
        mid_close_3720c61b0679eb3e,
        mid_flush_3720c61b0679eb3e,
        mid_getBuffer_f9f076bdddc266c4,
        mid_toString_09a7afff1868fc5e,
        mid_write_0d82408c6e55bc30,
        mid_write_540b2b23d51b1efd,
        mid_write_fc9be2ded8ee801f,
        mid_write_54573ef49c0daa22,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringWriter(const StringWriter& obj) : ::java::io::Writer(obj) {}

      StringWriter();
      StringWriter(jint);

      StringWriter append(jchar) const;
      StringWriter append(const ::java::lang::CharSequence &) const;
      StringWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      ::java::lang::StringBuffer getBuffer() const;
      ::java::lang::String toString() const;
      void write(const ::java::lang::String &) const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(StringWriter);
    extern PyTypeObject *PY_TYPE(StringWriter);

    class t_StringWriter {
    public:
      PyObject_HEAD
      StringWriter object;
      static PyObject *wrap_Object(const StringWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
