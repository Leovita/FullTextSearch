#ifndef java_io_DataOutput_H
#define java_io_DataOutput_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class DataOutput : public ::java::lang::Object {
     public:
      enum {
        mid_write_3ce1e597fb62ac79,
        mid_write_540b2b23d51b1efd,
        mid_write_5fdd5da9426708e6,
        mid_writeBoolean_b110fc3a58c081ab,
        mid_writeByte_540b2b23d51b1efd,
        mid_writeBytes_0d82408c6e55bc30,
        mid_writeChar_540b2b23d51b1efd,
        mid_writeChars_0d82408c6e55bc30,
        mid_writeDouble_b5bc1a2fb9ff9e90,
        mid_writeFloat_c771a95b0227fb6a,
        mid_writeInt_540b2b23d51b1efd,
        mid_writeLong_8b3d46852b435a94,
        mid_writeShort_540b2b23d51b1efd,
        mid_writeUTF_0d82408c6e55bc30,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DataOutput(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DataOutput(const DataOutput& obj) : ::java::lang::Object(obj) {}

      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
      void writeBoolean(jboolean) const;
      void writeByte(jint) const;
      void writeBytes(const ::java::lang::String &) const;
      void writeChar(jint) const;
      void writeChars(const ::java::lang::String &) const;
      void writeDouble(jdouble) const;
      void writeFloat(jfloat) const;
      void writeInt(jint) const;
      void writeLong(jlong) const;
      void writeShort(jint) const;
      void writeUTF(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(DataOutput);
    extern PyTypeObject *PY_TYPE(DataOutput);

    class t_DataOutput {
    public:
      PyObject_HEAD
      DataOutput object;
      static PyObject *wrap_Object(const DataOutput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
