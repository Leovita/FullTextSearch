#ifndef org_apache_lucene_store_ByteBuffersDataOutput_H
#define org_apache_lucene_store_ByteBuffersDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace util {
    class ArrayList;
    class Map;
    class Set;
    namespace function {
      class IntFunction;
      class Consumer;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class ByteBuffersDataOutput;
        class ByteBuffersDataInput;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_1d3149fac12f2af3,
            mid_copyBytes_56e1353970db77c0,
            mid_copyTo_949eccaa2018a6dc,
            mid_newResettableInstance_8768f3d466deaf75,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_reset_e7bdbe105ce1bafb,
            mid_size_0f176418e3e16541,
            mid_toArrayCopy_44e916dc40fc04cb,
            mid_toDataInput_9a42e03ccabe871b,
            mid_toString_e7df854526d67fa3,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_a4d4f283481182e8,
            mid_writeBytes_31e2e931f3bb1000,
            mid_writeBytes_116f7fcb5bff0f39,
            mid_writeInt_8226bd0b0fc13dba,
            mid_writeLong_1d3149fac12f2af3,
            mid_writeMapOfStrings_6a7e23584beb7c0f,
            mid_writeSetOfStrings_478519f7d4301fc7,
            mid_writeShort_19904c0bd37f0d7f,
            mid_writeString_ee46a189998009d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataOutput(const ByteBuffersDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          static jint DEFAULT_MAX_BITS_PER_BLOCK;
          static jint DEFAULT_MIN_BITS_PER_BLOCK;
          static jint LIMIT_MAX_BITS_PER_BLOCK;
          static jint LIMIT_MIN_BITS_PER_BLOCK;

          ByteBuffersDataOutput();
          ByteBuffersDataOutput(jlong);

          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          void copyTo(const ::org::apache::lucene::store::DataOutput &) const;
          static ByteBuffersDataOutput newResettableInstance();
          jlong ramBytesUsed() const;
          void reset() const;
          jlong size() const;
          JArray< jbyte > toArrayCopy() const;
          ::org::apache::lucene::store::ByteBuffersDataInput toDataInput() const;
          ::java::lang::String toString() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataOutput);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataOutput);

        class t_ByteBuffersDataOutput {
        public:
          PyObject_HEAD
          ByteBuffersDataOutput object;
          static PyObject *wrap_Object(const ByteBuffersDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
