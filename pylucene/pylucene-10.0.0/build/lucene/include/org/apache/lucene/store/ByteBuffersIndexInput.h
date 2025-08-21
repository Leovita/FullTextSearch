#ifndef org_apache_lucene_store_ByteBuffersIndexInput_H
#define org_apache_lucene_store_ByteBuffersIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class ByteBuffersDataInput;
        class RandomAccessInput;
        class ByteBuffersIndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_1dc566f17a95bc33,
            mid_clone_69ff96f993716366,
            mid_close_3720c61b0679eb3e,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_length_16939d9d0a9a9721,
            mid_randomAccessSlice_2e3247f0548f785b,
            mid_readByte_847674f430f49e4c,
            mid_readByte_2a9a6e154cb14e58,
            mid_readBytes_5fdd5da9426708e6,
            mid_readBytes_8ca6ba058aa9701b,
            mid_readBytes_ded37dfd7b9f37c4,
            mid_readFloats_e895d5e6b13d4d50,
            mid_readGroupVInt_70e26db984971679,
            mid_readInt_20fbf7565993c3d7,
            mid_readInt_35c872f03f347c10,
            mid_readLong_16939d9d0a9a9721,
            mid_readLong_91d66fa3ea476cea,
            mid_readLongs_f3cd87eda3d12dc6,
            mid_readMapOfStrings_f125f26c07a7bec8,
            mid_readSetOfStrings_4df174295554d7bd,
            mid_readShort_21ad82099ac5d56c,
            mid_readShort_60f7d07ba3ea1177,
            mid_readString_09a7afff1868fc5e,
            mid_readVInt_20fbf7565993c3d7,
            mid_readVLong_16939d9d0a9a9721,
            mid_readZInt_20fbf7565993c3d7,
            mid_readZLong_16939d9d0a9a9721,
            mid_seek_8b3d46852b435a94,
            mid_skipBytes_8b3d46852b435a94,
            mid_slice_970eecc3eca62a5b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersIndexInput(const ByteBuffersIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          ByteBuffersIndexInput(const ::org::apache::lucene::store::ByteBuffersDataInput &, const ::java::lang::String &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          void readGroupVInt(const JArray< jlong > &, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          ::java::util::Map readMapOfStrings() const;
          ::java::util::Set readSetOfStrings() const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          ::java::lang::String readString() const;
          jint readVInt() const;
          jlong readVLong() const;
          jint readZInt() const;
          jlong readZLong() const;
          void seek(jlong) const;
          void skipBytes(jlong) const;
          ByteBuffersIndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersIndexInput);
        extern PyTypeObject *PY_TYPE(ByteBuffersIndexInput);

        class t_ByteBuffersIndexInput {
        public:
          PyObject_HEAD
          ByteBuffersIndexInput object;
          static PyObject *wrap_Object(const ByteBuffersIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
