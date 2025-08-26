#ifndef java_io_InputStream_H
#define java_io_InputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
    class OutputStream;
    class InputStream;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class InputStream : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_available_bd89ce15dad49192,
        mid_close_e7bdbe105ce1bafb,
        mid_mark_8226bd0b0fc13dba,
        mid_markSupported_9aa4f33e82ea333f,
        mid_nullInputStream_e6d5d6822aa2b5dc,
        mid_read_bd89ce15dad49192,
        mid_read_9878f7b1ab77aa6c,
        mid_read_b3f10f03d40a20cf,
        mid_readAllBytes_44e916dc40fc04cb,
        mid_readNBytes_d94c1f1d0c66928c,
        mid_readNBytes_b3f10f03d40a20cf,
        mid_reset_e7bdbe105ce1bafb,
        mid_skip_3dc1c6e3a5a0baf0,
        mid_skipNBytes_1d3149fac12f2af3,
        mid_transferTo_11a5caab2844bf35,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InputStream(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InputStream(const InputStream& obj) : ::java::lang::Object(obj) {}

      InputStream();

      jint available() const;
      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      static InputStream nullInputStream();
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      JArray< jbyte > readAllBytes() const;
      JArray< jbyte > readNBytes(jint) const;
      jint readNBytes(const JArray< jbyte > &, jint, jint) const;
      void reset() const;
      jlong skip(jlong) const;
      void skipNBytes(jlong) const;
      jlong transferTo(const ::java::io::OutputStream &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(InputStream);
    extern PyTypeObject *PY_TYPE(InputStream);

    class t_InputStream {
    public:
      PyObject_HEAD
      InputStream object;
      static PyObject *wrap_Object(const InputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
