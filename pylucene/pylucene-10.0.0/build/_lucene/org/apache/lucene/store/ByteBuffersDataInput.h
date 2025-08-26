#ifndef org_apache_lucene_store_ByteBuffersDataInput_H
#define org_apache_lucene_store_ByteBuffersDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class EOFException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
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

        class ByteBuffersDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_length_0f176418e3e16541,
            mid_position_0f176418e3e16541,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_readByte_1456044a01a5c9bf,
            mid_readByte_cb04f80b25dc941d,
            mid_readBytes_116f7fcb5bff0f39,
            mid_readBytes_da091ec7fbc87f01,
            mid_readFloats_a1c18faad4aff7a1,
            mid_readGroupVInt_e28d84b49af388d8,
            mid_readInt_bd89ce15dad49192,
            mid_readInt_7af44747c1921bd4,
            mid_readLong_0f176418e3e16541,
            mid_readLong_3dc1c6e3a5a0baf0,
            mid_readLongs_2a4a0e3eb510f108,
            mid_readShort_ae7a5bcb127748fd,
            mid_readShort_d0da64abd2ba9d05,
            mid_seek_1d3149fac12f2af3,
            mid_skipBytes_1d3149fac12f2af3,
            mid_slice_d4073299449c6330,
            mid_toString_e7df854526d67fa3,
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
