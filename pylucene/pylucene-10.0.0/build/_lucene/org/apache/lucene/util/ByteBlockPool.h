#ifndef org_apache_lucene_util_ByteBlockPool_H
#define org_apache_lucene_util_ByteBlockPool_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ByteBlockPool;
        class ByteBlockPool$Allocator;
        class Accountable;
        class BytesRef;
      }
    }
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
            mid_init$_8ed9c9628f9570c0,
            mid_append_a4d4f283481182e8,
            mid_append_920ce0cdf4259cc9,
            mid_append_116f7fcb5bff0f39,
            mid_append_6f42edadaef700bb,
            mid_getBuffer_d94c1f1d0c66928c,
            mid_getPosition_0f176418e3e16541,
            mid_nextBuffer_e7bdbe105ce1bafb,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_readByte_cb04f80b25dc941d,
            mid_readBytes_da091ec7fbc87f01,
            mid_reset_625f7a21e54cb1c3,
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
