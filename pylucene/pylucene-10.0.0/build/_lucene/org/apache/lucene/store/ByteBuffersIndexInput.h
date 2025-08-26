#ifndef org_apache_lucene_store_ByteBuffersIndexInput_H
#define org_apache_lucene_store_ByteBuffersIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class ByteBuffersIndexInput;
        class ByteBuffersDataInput;
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
            mid_init$_6ce24be7c632367b,
            mid_clone_1107977def75ee66,
            mid_close_e7bdbe105ce1bafb,
            mid_getFilePointer_0f176418e3e16541,
            mid_length_0f176418e3e16541,
            mid_randomAccessSlice_02040cfc534fdd16,
            mid_readByte_1456044a01a5c9bf,
            mid_readByte_cb04f80b25dc941d,
            mid_readBytes_116f7fcb5bff0f39,
            mid_readBytes_c802d561b0b0b5a6,
            mid_readBytes_da091ec7fbc87f01,
            mid_readFloats_a1c18faad4aff7a1,
            mid_readGroupVInt_e28d84b49af388d8,
            mid_readInt_bd89ce15dad49192,
            mid_readInt_7af44747c1921bd4,
            mid_readLong_0f176418e3e16541,
            mid_readLong_3dc1c6e3a5a0baf0,
            mid_readLongs_2a4a0e3eb510f108,
            mid_readMapOfStrings_5004bdf19ed33453,
            mid_readSetOfStrings_79131c6bbcf08916,
            mid_readShort_ae7a5bcb127748fd,
            mid_readShort_d0da64abd2ba9d05,
            mid_readString_e7df854526d67fa3,
            mid_readVInt_bd89ce15dad49192,
            mid_readVLong_0f176418e3e16541,
            mid_readZInt_bd89ce15dad49192,
            mid_readZLong_0f176418e3e16541,
            mid_seek_1d3149fac12f2af3,
            mid_skipBytes_1d3149fac12f2af3,
            mid_slice_707ce2d14d8d098a,
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
