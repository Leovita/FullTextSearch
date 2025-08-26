#ifndef org_apache_lucene_store_BufferedIndexInput_H
#define org_apache_lucene_store_BufferedIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
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
        class RandomAccessInput;
        class BufferedIndexInput;
        class IOContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BufferedIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_ee46a189998009d6,
            mid_init$_1aa676c7c47306c5,
            mid_init$_49e27e98009acf15,
            mid_bufferSize_ba9bb96272cb0c97,
            mid_clone_cb3967eb6eacc1e4,
            mid_getBufferSize_bd89ce15dad49192,
            mid_getFilePointer_0f176418e3e16541,
            mid_readByte_1456044a01a5c9bf,
            mid_readByte_cb04f80b25dc941d,
            mid_readBytes_116f7fcb5bff0f39,
            mid_readBytes_c802d561b0b0b5a6,
            mid_readBytes_da091ec7fbc87f01,
            mid_readFloats_a1c18faad4aff7a1,
            mid_readGroupVInt_e28d84b49af388d8,
            mid_readInt_bd89ce15dad49192,
            mid_readInt_7af44747c1921bd4,
            mid_readInts_57da58ead958e473,
            mid_readLong_0f176418e3e16541,
            mid_readLong_3dc1c6e3a5a0baf0,
            mid_readLongs_2a4a0e3eb510f108,
            mid_readShort_ae7a5bcb127748fd,
            mid_readShort_d0da64abd2ba9d05,
            mid_seek_1d3149fac12f2af3,
            mid_slice_fa5539b2c5f0192d,
            mid_wrap_d6f7dc2e0e23c6d5,
            mid_readInternal_bbc658db99820977,
            mid_seekInternal_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedIndexInput(const BufferedIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          static jint BUFFER_SIZE;
          static jint MERGE_BUFFER_SIZE;
          static jint MIN_BUFFER_SIZE;

          BufferedIndexInput(const ::java::lang::String &);
          BufferedIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput(const ::java::lang::String &, jint);

          static jint bufferSize(const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput clone() const;
          jint getBufferSize() const;
          jlong getFilePointer() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          void readGroupVInt(const JArray< jlong > &, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          void readInts(const JArray< jint > &, jint, jint) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          void seek(jlong) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          static BufferedIndexInput wrap(const ::java::lang::String &, const ::org::apache::lucene::store::IndexInput &, jlong, jlong);
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
        extern PyType_Def PY_TYPE_DEF(BufferedIndexInput);
        extern PyTypeObject *PY_TYPE(BufferedIndexInput);

        class t_BufferedIndexInput {
        public:
          PyObject_HEAD
          BufferedIndexInput object;
          static PyObject *wrap_Object(const BufferedIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
