#ifndef org_apache_lucene_util_ByteBlockPool_H
#define org_apache_lucene_util_ByteBlockPool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
        class ByteBlockPool$Allocator;
        class ByteBlockPool;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ByteBlockPool : public ::java::lang::Object {
         public:
          enum {
            mid_init$_154c85dc30e3f822,
            mid_append_3ce1e597fb62ac79,
            mid_append_ac0de3ee0e03786d,
            mid_append_5fdd5da9426708e6,
            mid_append_0179d884185c18d3,
            mid_getBuffer_81e4ab9dd381561f,
            mid_getPosition_16939d9d0a9a9721,
            mid_nextBuffer_3720c61b0679eb3e,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_readByte_2a9a6e154cb14e58,
            mid_readBytes_ded37dfd7b9f37c4,
            mid_reset_c485d474c3ac8ca0,
            max_mid
          };

          enum {
            fid_buffer,
            fid_byteOffset,
            fid_byteUpto,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool(const ByteBlockPool& obj) : ::java::lang::Object(obj) {}

          static jint BYTE_BLOCK_MASK;
          static jint BYTE_BLOCK_SHIFT;
          static jint BYTE_BLOCK_SIZE;

          JArray< jbyte > _get_buffer() const;
          void _set_buffer(const JArray< jbyte > &) const;
          jint _get_byteOffset() const;
          void _set_byteOffset(jint) const;
          jint _get_byteUpto() const;
          void _set_byteUpto(jint) const;

          ByteBlockPool(const ::org::apache::lucene::util::ByteBlockPool$Allocator &);

          void append(const JArray< jbyte > &) const;
          void append(const ::org::apache::lucene::util::BytesRef &) const;
          void append(const JArray< jbyte > &, jint, jint) const;
          void append(const ByteBlockPool &, jlong, jint) const;
          JArray< jbyte > getBuffer(jint) const;
          jlong getPosition() const;
          void nextBuffer() const;
          jlong ramBytesUsed() const;
          jbyte readByte(jlong) const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void reset(jboolean, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool);
        extern PyTypeObject *PY_TYPE(ByteBlockPool);

        class t_ByteBlockPool {
        public:
          PyObject_HEAD
          ByteBlockPool object;
          static PyObject *wrap_Object(const ByteBlockPool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
