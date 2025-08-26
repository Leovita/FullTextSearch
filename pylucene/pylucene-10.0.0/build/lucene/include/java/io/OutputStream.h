#ifndef java_io_OutputStream_H
#define java_io_OutputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
    class Flushable;
    class OutputStream;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class OutputStream : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_close_e7bdbe105ce1bafb,
        mid_flush_e7bdbe105ce1bafb,
        mid_nullOutputStream_1478f16a8ad52680,
        mid_write_a4d4f283481182e8,
        mid_write_8226bd0b0fc13dba,
        mid_write_116f7fcb5bff0f39,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit OutputStream(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      OutputStream(const OutputStream& obj) : ::java::lang::Object(obj) {}

      OutputStream();

      void close() const;
      void flush() const;
      static OutputStream nullOutputStream();
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(OutputStream);
    extern PyTypeObject *PY_TYPE(OutputStream);

    class t_OutputStream {
    public:
      PyObject_HEAD
      OutputStream object;
      static PyObject *wrap_Object(const OutputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
