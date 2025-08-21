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
    class Class;
    class String;
    class CharSequence;
    class Object;
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
        mid_init$_a0738b5f41071828,
        mid_init$_84831c9725b47eae,
        mid_init$_46e0745a29d25bc4,
        mid_init$_0d82408c6e55bc30,
        mid_init$_e959520fd6b758e1,
        mid_init$_3d104da0b5c75e64,
        mid_init$_a73ac245e9d314c5,
        mid_init$_ca0f0211998f8c27,
        mid_append_fb4db710586785fc,
        mid_append_bf92c5567d87d023,
        mid_append_f4d1d58926cc3700,
        mid_checkError_947277eca0748c4e,
        mid_close_3720c61b0679eb3e,
        mid_flush_3720c61b0679eb3e,
        mid_format_a4fb52bf0c82a7be,
        mid_format_59baa5a15968132d,
        mid_print_cc40ee25f19f0868,
        mid_print_0d82408c6e55bc30,
        mid_print_b110fc3a58c081ab,
        mid_print_97f8668422006638,
        mid_print_b5bc1a2fb9ff9e90,
        mid_print_c771a95b0227fb6a,
        mid_print_540b2b23d51b1efd,
        mid_print_eb61ef4d1db15d08,
        mid_print_8b3d46852b435a94,
        mid_printf_a4fb52bf0c82a7be,
        mid_printf_59baa5a15968132d,
        mid_println_3720c61b0679eb3e,
        mid_println_cc40ee25f19f0868,
        mid_println_0d82408c6e55bc30,
        mid_println_b110fc3a58c081ab,
        mid_println_97f8668422006638,
        mid_println_b5bc1a2fb9ff9e90,
        mid_println_c771a95b0227fb6a,
        mid_println_540b2b23d51b1efd,
        mid_println_eb61ef4d1db15d08,
        mid_println_8b3d46852b435a94,
        mid_write_cc40ee25f19f0868,
        mid_write_0d82408c6e55bc30,
        mid_write_540b2b23d51b1efd,
        mid_write_fc9be2ded8ee801f,
        mid_write_54573ef49c0daa22,
        mid_setError_3720c61b0679eb3e,
        mid_clearError_3720c61b0679eb3e,
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
