#ifndef org_apache_lucene_store_ByteBuffersDataInput_H
#define org_apache_lucene_store_ByteBuffersDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class ByteBuffersDataInput;
        class RandomAccessInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class EOFException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_length_16939d9d0a9a9721,
            mid_position_16939d9d0a9a9721,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_readByte_847674f430f49e4c,
            mid_readByte_2a9a6e154cb14e58,
            mid_readBytes_5fdd5da9426708e6,
            mid_readBytes_ded37dfd7b9f37c4,
            mid_readFloats_e895d5e6b13d4d50,
            mid_readGroupVInt_70e26db984971679,
            mid_readInt_20fbf7565993c3d7,
            mid_readInt_35c872f03f347c10,
            mid_readLong_16939d9d0a9a9721,
            mid_readLong_91d66fa3ea476cea,
            mid_readLongs_f3cd87eda3d12dc6,
            mid_readShort_21ad82099ac5d56c,
            mid_readShort_60f7d07ba3ea1177,
            mid_seek_8b3d46852b435a94,
            mid_skipBytes_8b3d46852b435a94,
            mid_slice_28a81f80cad2ae61,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataInput(const ByteBuffersDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          jlong length() const;
          jlong position() const;
          jlong ramBytesUsed() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          void readGroupVInt(const JArray< jlong > &, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          void seek(jlong) const;
          void skipBytes(jlong) const;
          ByteBuffersDataInput slice(jlong, jlong) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataInput);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataInput);

        class t_ByteBuffersDataInput {
        public:
          PyObject_HEAD
          ByteBuffersDataInput object;
          static PyObject *wrap_Object(const ByteBuffersDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
