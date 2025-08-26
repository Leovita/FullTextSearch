#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace io {
    class File;
    class PrintWriter;
    class FileNotFoundException;
    class UnsupportedEncodingException;
    class OutputStream;
  }
  namespace lang {
    class Object;
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

    class PrintWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_8771d7b2e28229dd,
        mid_init$_fbdd420d6e3d48b2,
        mid_init$_33899052a49a073c,
        mid_init$_ee46a189998009d6,
        mid_init$_eb4a708af6270cb7,
        mid_init$_0dd012a11c3f389b,
        mid_init$_94dfb8c9ea020262,
        mid_init$_42bcd4cb517042eb,
        mid_append_6dc7d2b1ad59c0b4,
        mid_append_33685aa893160929,
        mid_append_77f7bcd170c76476,
        mid_checkError_9aa4f33e82ea333f,
        mid_close_e7bdbe105ce1bafb,
        mid_flush_e7bdbe105ce1bafb,
        mid_format_4e4605b494d977b5,
        mid_format_0c21f3475b426836,
        mid_print_ae4452529cb9c0dd,
        mid_print_ee46a189998009d6,
        mid_print_f5dd97eebf6a215a,
        mid_print_121fb0d25559975f,
        mid_print_a03f734ddaeb69b4,
        mid_print_675f4cb9a2529ee0,
        mid_print_8226bd0b0fc13dba,
        mid_print_501c3eb890ff6d79,
        mid_print_1d3149fac12f2af3,
        mid_printf_4e4605b494d977b5,
        mid_printf_0c21f3475b426836,
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
        mid_write_ae4452529cb9c0dd,
        mid_write_ee46a189998009d6,
        mid_write_8226bd0b0fc13dba,
        mid_write_186bb5d1c1aec30c,
        mid_write_ae8275bdfad592e6,
        mid_setError_e7bdbe105ce1bafb,
        mid_clearError_e7bdbe105ce1bafb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintWriter(const PrintWriter& obj) : ::java::io::Writer(obj) {}

      PrintWriter(const ::java::io::File &);
      PrintWriter(const ::java::io::OutputStream &);
      PrintWriter(const ::java::io::Writer &);
      PrintWriter(const ::java::lang::String &);
      PrintWriter(const ::java::io::File &, const ::java::lang::String &);
      PrintWriter(const ::java::lang::String &, const ::java::lang::String &);
      PrintWriter(const ::java::io::OutputStream &, jboolean);
      PrintWriter(const ::java::io::Writer &, jboolean);

      PrintWriter append(jchar) const;
      PrintWriter append(const ::java::lang::CharSequence &) const;
      PrintWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintWriter format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintWriter printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
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
      void write(const JArray< jchar > &) const;
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
    extern PyType_Def PY_TYPE_DEF(PrintWriter);
    extern PyTypeObject *PY_TYPE(PrintWriter);

    class t_PrintWriter {
    public:
      PyObject_HEAD
      PrintWriter object;
      static PyObject *wrap_Object(const PrintWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
