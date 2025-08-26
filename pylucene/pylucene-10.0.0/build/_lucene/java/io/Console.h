#ifndef java_io_Console_H
#define java_io_Console_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Reader;
    class PrintWriter;
    class Console;
    class Flushable;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Console : public ::java::lang::Object {
     public:
      enum {
        mid_flush_e7bdbe105ce1bafb,
        mid_format_6cc792e53bcbe67d,
        mid_format_3cdb5369195e8029,
        mid_isTerminal_9aa4f33e82ea333f,
        mid_print_cde0b0c827ecd955,
        mid_printf_6cc792e53bcbe67d,
        mid_printf_3cdb5369195e8029,
        mid_println_cde0b0c827ecd955,
        mid_readLine_e7df854526d67fa3,
        mid_readLine_c89cb40ab473441a,
        mid_readLine_20bc3f8873845d3f,
        mid_readPassword_e5926045e1917c62,
        mid_readPassword_099976a44a3b5b19,
        mid_readPassword_7ea561c207135af3,
        mid_reader_58cfbaca8545e054,
        mid_readln_fef9c036acf290a9,
        mid_writer_a0a00601be271e70,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Console(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Console(const Console& obj) : ::java::lang::Object(obj) {}

      void flush() const;
      Console format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      Console format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      jboolean isTerminal() const;
      Console print(const ::java::lang::Object &) const;
      Console printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      Console printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      Console println(const ::java::lang::Object &) const;
      ::java::lang::String readLine() const;
      ::java::lang::String readLine(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::lang::String readLine(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      JArray< jchar > readPassword() const;
      JArray< jchar > readPassword(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      JArray< jchar > readPassword(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::io::Reader reader() const;
      ::java::lang::String readln(const ::java::lang::String &) const;
      ::java::io::PrintWriter writer() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(Console);
    extern PyTypeObject *PY_TYPE(Console);

    class t_Console {
    public:
      PyObject_HEAD
      Console object;
      static PyObject *wrap_Object(const Console&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
