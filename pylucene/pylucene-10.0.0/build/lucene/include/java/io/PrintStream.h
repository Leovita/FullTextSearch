#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
  namespace io {
    class File;
    class IOException;
    class PrintStream;
    class FileNotFoundException;
    class UnsupportedEncodingException;
    class OutputStream;
  }
  namespace lang {
    class Object;
    class Appendable;
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintStream : public ::java::io::FilterOutputStream {
     public:
      enum {
        mid_init$_8771d7b2e28229dd,
        mid_init$_fbdd420d6e3d48b2,
        mid_init$_ee46a189998009d6,
        mid_init$_eb4a708af6270cb7,
        mid_init$_0dd012a11c3f389b,
        mid_init$_94dfb8c9ea020262,
        mid_init$_07d3b356de582f3a,
        mid_append_b049e678812954fc,
        mid_append_971db9c193950218,
        mid_append_076905f150d20346,
        mid_checkError_9aa4f33e82ea333f,
        mid_close_e7bdbe105ce1bafb,
        mid_flush_e7bdbe105ce1bafb,
        mid_format_0699757b7f69b6a1,
        mid_format_bec75aab33e4bbe3,
        mid_print_ae4452529cb9c0dd,
        mid_print_ee46a189998009d6,
        mid_print_f5dd97eebf6a215a,
        mid_print_121fb0d25559975f,
        mid_print_a03f734ddaeb69b4,
        mid_print_675f4cb9a2529ee0,
        mid_print_8226bd0b0fc13dba,
        mid_print_501c3eb890ff6d79,
        mid_print_1d3149fac12f2af3,
        mid_printf_0699757b7f69b6a1,
        mid_printf_bec75aab33e4bbe3,
        mid_println_e7bdbe105ce1bafb,
        mid_println_ae4452529cb9c0dd,
        mid_println_ee46a189998009d6,
        mid_println_f5dd97eebf6a215a,
        mid_println_121fb0d25559975f,
        mid_println_a03f734ddaeb69b4,
        mid_println_675f4cb9a2529ee0,
        mid_println_8226bd0b0fc13dba,
        mid_println_501c3eb890ff6d79,
        mid_println_1d3149fac12f2af3,
        mid_write_a4d4f283481182e8,
        mid_write_8226bd0b0fc13dba,
        mid_write_116f7fcb5bff0f39,
        mid_writeBytes_a4d4f283481182e8,
        mid_setError_e7bdbe105ce1bafb,
        mid_clearError_e7bdbe105ce1bafb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintStream(jobject obj) : ::java::io::FilterOutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintStream(const PrintStream& obj) : ::java::io::FilterOutputStream(obj) {}

      PrintStream(const ::java::io::File &);
      PrintStream(const ::java::io::OutputStream &);
      PrintStream(const ::java::lang::String &);
      PrintStream(const ::java::io::File &, const ::java::lang::String &);
      PrintStream(const ::java::lang::String &, const ::java::lang::String &);
      PrintStream(const ::java::io::OutputStream &, jboolean);
      PrintStream(const ::java::io::OutputStream &, jboolean, const ::java::lang::String &);

      PrintStream append(jchar) const;
      PrintStream append(const ::java::lang::CharSequence &) const;
      PrintStream append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintStream format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintStream printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void println() const;
      void println(const JArray< jchar > &) const;
      void println(const ::java::lang::String &) const;
      void println(jboolean) const;
      void println(jchar) const;
      void println(jdouble) const;
      void println(jfloat) const;
      void println(jint) const;
      void println(const ::java::lang::Object &) const;
      void println(jlong) const;
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
      void writeBytes(const JArray< jbyte > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(PrintStream);
    extern PyTypeObject *PY_TYPE(PrintStream);

    class t_PrintStream {
    public:
      PyObject_HEAD
      PrintStream object;
      static PyObject *wrap_Object(const PrintStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
