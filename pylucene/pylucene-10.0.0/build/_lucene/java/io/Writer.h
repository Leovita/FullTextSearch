#ifndef java_io_Writer_H
#define java_io_Writer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Appendable;
    class Class;
    class CharSequence;
    class String;
  }
  namespace io {
    class IOException;
    class Writer;
    class Closeable;
    class Flushable;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Writer : public ::java::lang::Object {
     public:
      enum {
        mid_append_da172486ea8d705f,
        mid_append_ae79dc05365818ba,
        mid_append_a6389a95232834c1,
        mid_close_3720c61b0679eb3e,
        mid_flush_3720c61b0679eb3e,
        mid_nullWriter_ef08653588135d1c,
        mid_write_cc40ee25f19f0868,
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

      explicit Writer(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Writer(const Writer& obj) : ::java::lang::Object(obj) {}

      Writer append(jchar) const;
      Writer append(const ::java::lang::CharSequence &) const;
      Writer append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      static Writer nullWriter();
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
    extern PyType_Def PY_TYPE_DEF(Writer);
    extern PyTypeObject *PY_TYPE(Writer);

    class t_Writer {
    public:
      PyObject_HEAD
      Writer object;
      static PyObject *wrap_Object(const Writer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
