#ifndef org_apache_lucene_store_BufferedIndexInput_H
#define org_apache_lucene_store_BufferedIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class BufferedIndexInput;
        class RandomAccessInput;
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
            mid_init$_0d82408c6e55bc30,
            mid_init$_e41903e0c61b1b8d,
            mid_init$_a5140b013bba694a,
            mid_bufferSize_41b14630658717ac,
            mid_clone_48e28735240f5124,
            mid_getBufferSize_20fbf7565993c3d7,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_readByte_847674f430f49e4c,
            mid_readByte_2a9a6e154cb14e58,
            mid_readBytes_5fdd5da9426708e6,
            mid_readBytes_8ca6ba058aa9701b,
            mid_readBytes_ded37dfd7b9f37c4,
            mid_readFloats_e895d5e6b13d4d50,
            mid_readGroupVInt_70e26db984971679,
            mid_readInt_20fbf7565993c3d7,
            mid_readInt_35c872f03f347c10,
            mid_readInts_ad090cb6070ea6a2,
            mid_readLong_16939d9d0a9a9721,
            mid_readLong_91d66fa3ea476cea,
            mid_readLongs_f3cd87eda3d12dc6,
            mid_readShort_21ad82099ac5d56c,
            mid_readShort_60f7d07ba3ea1177,
            mid_seek_8b3d46852b435a94,
            mid_slice_4c0286d0c02e55b3,
            mid_wrap_97a452954446449b,
            mid_readInternal_2edbab4eb1690b47,
            mid_seekInternal_8b3d46852b435a94,
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
