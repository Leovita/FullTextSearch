#ifndef java_io_InputStream_H
#define java_io_InputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class Closeable;
    class OutputStream;
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
        mid_init$_3720c61b0679eb3e,
        mid_available_20fbf7565993c3d7,
        mid_close_3720c61b0679eb3e,
        mid_mark_540b2b23d51b1efd,
        mid_markSupported_947277eca0748c4e,
        mid_nullInputStream_13f722253d099a7c,
        mid_read_20fbf7565993c3d7,
        mid_read_05c267a0584e092f,
        mid_read_a8eecdc69feea090,
        mid_readAllBytes_5560da88fc44aa82,
        mid_readNBytes_81e4ab9dd381561f,
        mid_readNBytes_a8eecdc69feea090,
        mid_reset_3720c61b0679eb3e,
        mid_skip_91d66fa3ea476cea,
        mid_skipNBytes_8b3d46852b435a94,
        mid_transferTo_6f2b60168d414826,
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
