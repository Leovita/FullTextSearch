#ifndef java_io_Reader_H
#define java_io_Reader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
    class Writer;
    class Reader;
  }
  namespace lang {
    class Class;
    class Readable;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Reader : public ::java::lang::Object {
     public:
      enum {
        mid_close_3720c61b0679eb3e,
        mid_mark_540b2b23d51b1efd,
        mid_markSupported_947277eca0748c4e,
        mid_nullReader_2493c69d5db06811,
        mid_read_20fbf7565993c3d7,
        mid_read_1d6980f6711df1e4,
        mid_read_db543c1e894f3140,
        mid_ready_947277eca0748c4e,
        mid_reset_3720c61b0679eb3e,
        mid_skip_91d66fa3ea476cea,
        mid_transferTo_b44a0e5fdad7cc9b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Reader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Reader(const Reader& obj) : ::java::lang::Object(obj) {}

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      static Reader nullReader();
      jint read() const;
      jint read(const JArray< jchar > &) const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
      jlong transferTo(const ::java::io::Writer &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(Reader);
    extern PyTypeObject *PY_TYPE(Reader);

    class t_Reader {
    public:
      PyObject_HEAD
      Reader object;
      static PyObject *wrap_Object(const Reader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
