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
            mid_init$_3720c61b0679eb3e,
            mid_init$_540b2b23d51b1efd,
            mid_init$_e56ec7e576fdba66,
            mid_bytesUsed_16939d9d0a9a9721,
            mid_freeBlocks_3c9bba330f083871,
            mid_getByteBlock_5560da88fc44aa82,
            mid_maxBufferedBlocks_20fbf7565993c3d7,
            mid_numBufferedBlocks_20fbf7565993c3d7,
            mid_recycleByteBlocks_540f60124d959184,
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
