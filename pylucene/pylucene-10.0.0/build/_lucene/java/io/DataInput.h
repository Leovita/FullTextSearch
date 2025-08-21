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
        mid_readBoolean_947277eca0748c4e,
        mid_readByte_847674f430f49e4c,
        mid_readChar_6c956faefc706166,
        mid_readDouble_32caabaad86c508b,
        mid_readFloat_9b6c3480dac00edf,
        mid_readFully_3ce1e597fb62ac79,
        mid_readFully_5fdd5da9426708e6,
        mid_readInt_20fbf7565993c3d7,
        mid_readLine_09a7afff1868fc5e,
        mid_readLong_16939d9d0a9a9721,
        mid_readShort_21ad82099ac5d56c,
        mid_readUTF_09a7afff1868fc5e,
        mid_readUnsignedByte_20fbf7565993c3d7,
        mid_readUnsignedShort_20fbf7565993c3d7,
        mid_skipBytes_3c9bba330f083871,
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
