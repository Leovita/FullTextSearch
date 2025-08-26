#ifndef java_io_DataInput_H
#define java_io_DataInput_H

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

    class DataInput : public ::java::lang::Object {
     public:
      enum {
        mid_readBoolean_9aa4f33e82ea333f,
        mid_readByte_1456044a01a5c9bf,
        mid_readChar_15a06771db8cb866,
        mid_readDouble_6fb37e123fed7a1f,
        mid_readFloat_8b62236f0e4d0dbc,
        mid_readFully_a4d4f283481182e8,
        mid_readFully_116f7fcb5bff0f39,
        mid_readInt_bd89ce15dad49192,
        mid_readLine_e7df854526d67fa3,
        mid_readLong_0f176418e3e16541,
        mid_readShort_ae7a5bcb127748fd,
        mid_readUTF_e7df854526d67fa3,
        mid_readUnsignedByte_bd89ce15dad49192,
        mid_readUnsignedShort_bd89ce15dad49192,
        mid_skipBytes_a3904e10f5bb9437,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

      jboolean readBoolean() const;
      jbyte readByte() const;
      jchar readChar() const;
      jdouble readDouble() const;
      jfloat readFloat() const;
      void readFully(const JArray< jbyte > &) const;
      void readFully(const JArray< jbyte > &, jint, jint) const;
      jint readInt() const;
      ::java::lang::String readLine() const;
      jlong readLong() const;
      jshort readShort() const;
      ::java::lang::String readUTF() const;
      jint readUnsignedByte() const;
      jint readUnsignedShort() const;
      jint skipBytes(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(DataInput);
    extern PyTypeObject *PY_TYPE(DataInput);

    class t_DataInput {
    public:
      PyObject_HEAD
      DataInput object;
      static PyObject *wrap_Object(const DataInput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
