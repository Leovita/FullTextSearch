#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
  namespace lang {
    class Appendable;
    class Class;
    class String;
    class CharSequence;
    class Object;
  }
  namespace io {
    class File;
    class FileNotFoundException;
    class UnsupportedEncodingException;
    class IOException;
    class OutputStream;
    class PrintStream;
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
        mid_init$_a0738b5f41071828,
        mid_init$_84831c9725b47eae,
        mid_init$_0d82408c6e55bc30,
        mid_init$_e959520fd6b758e1,
        mid_init$_3d104da0b5c75e64,
        mid_init$_a73ac245e9d314c5,
        mid_init$_2985d7d156c4d1c7,
        mid_append_53022182faacafb9,
        mid_append_33cdb18c283c4c55,
        mid_append_84a2d12d676b3e40,
        mid_checkError_947277eca0748c4e,
        mid_close_3720c61b0679eb3e,
        mid_flush_3720c61b0679eb3e,
        mid_format_6584e4f63235f701,
        mid_format_a67d5c7502acb2d4,
        mid_print_cc40ee25f19f0868,
        mid_print_0d82408c6e55bc30,
        mid_print_b110fc3a58c081ab,
        mid_print_97f8668422006638,
        mid_print_b5bc1a2fb9ff9e90,
        mid_print_c771a95b0227fb6a,
        mid_print_540b2b23d51b1efd,
        mid_print_eb61ef4d1db15d08,
        mid_print_8b3d46852b435a94,
        mid_printf_6584e4f63235f701,
        mid_printf_a67d5c7502acb2d4,
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
        mid_write_3ce1e597fb62ac79,
        mid_write_540b2b23d51b1efd,
        mid_write_5fdd5da9426708e6,
        mid_writeBytes_3ce1e597fb62ac79,
        mid_setError_3720c61b0679eb3e,
        mid_clearError_3720c61b0679eb3e,
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
