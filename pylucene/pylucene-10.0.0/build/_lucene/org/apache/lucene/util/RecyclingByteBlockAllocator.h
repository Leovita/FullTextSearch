#ifndef org_apache_lucene_util_RecyclingByteBlockAllocator_H
#define org_apache_lucene_util_RecyclingByteBlockAllocator_H

#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
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

        class RecyclingByteBlockAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_3f16b8628c08efc6,
            mid_bytesUsed_0f176418e3e16541,
            mid_freeBlocks_a3904e10f5bb9437,
            mid_getByteBlock_44e916dc40fc04cb,
            mid_maxBufferedBlocks_bd89ce15dad49192,
            mid_numBufferedBlocks_bd89ce15dad49192,
            mid_recycleByteBlocks_12d456106f915218,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingByteBlockAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecyclingByteBlockAllocator(const RecyclingByteBlockAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingByteBlockAllocator();
          RecyclingByteBlockAllocator(jint);
          RecyclingByteBlockAllocator(jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jbyte > getByteBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
          void recycleByteBlocks(const JArray< JArray< jbyte > > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(RecyclingByteBlockAllocator);
        extern PyTypeObject *PY_TYPE(RecyclingByteBlockAllocator);

        class t_RecyclingByteBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingByteBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingByteBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
