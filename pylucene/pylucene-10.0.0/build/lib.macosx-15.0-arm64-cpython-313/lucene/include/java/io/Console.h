#ifndef java_io_Console_H
#define java_io_Console_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class PrintWriter;
    class Reader;
    class Flushable;
    class Console;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Console : public ::java::lang::Object {
     public:
      enum {
        mid_flush_3720c61b0679eb3e,
        mid_format_33e7d5928f7394be,
        mid_printf_33e7d5928f7394be,
        mid_readLine_09a7afff1868fc5e,
        mid_readLine_da2198b2b95de815,
        mid_readPassword_77d52ded526199de,
        mid_readPassword_fea2dbdd2ddcac0b,
        mid_reader_2493c69d5db06811,
        mid_writer_aa227db7cb45a809,
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
      Console printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::lang::String readLine() const;
      ::java::lang::String readLine(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      JArray< jchar > readPassword() const;
      JArray< jchar > readPassword(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      ::java::io::Reader reader() const;
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
