#ifndef org_apache_lucene_store_ByteBuffersDataOutput_H
#define org_apache_lucene_store_ByteBuffersDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class DataInput;
        class ByteBuffersDataInput;
        class ByteBuffersDataOutput;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Consumer;
      class IntFunction;
    }
    class Set;
    class ArrayList;
    class Map;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_8b3d46852b435a94,
            mid_copyBytes_3386f81b45981517,
            mid_copyTo_3a071e25ad99bd99,
            mid_newResettableInstance_08c204fb5ce1051a,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_reset_3720c61b0679eb3e,
            mid_size_16939d9d0a9a9721,
            mid_toArrayCopy_5560da88fc44aa82,
            mid_toDataInput_297fd38a574af1dd,
            mid_toString_09a7afff1868fc5e,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_3ce1e597fb62ac79,
            mid_writeBytes_3f6ea74fc0096aaa,
            mid_writeBytes_5fdd5da9426708e6,
            mid_writeInt_540b2b23d51b1efd,
            mid_writeLong_8b3d46852b435a94,
            mid_writeMapOfStrings_79ba0f5a7d05e623,
            mid_writeSetOfStrings_1d5d4c6f11d1b2ab,
            mid_writeShort_13ddeb599c553531,
            mid_writeString_0d82408c6e55bc30,
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
