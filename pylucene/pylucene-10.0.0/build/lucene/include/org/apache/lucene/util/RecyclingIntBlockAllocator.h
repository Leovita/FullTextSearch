#ifndef org_apache_lucene_util_RecyclingIntBlockAllocator_H
#define org_apache_lucene_util_RecyclingIntBlockAllocator_H

#include "org/apache/lucene/util/IntBlockPool$Allocator.h"

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

        class RecyclingIntBlockAllocator : public ::org::apache::lucene::util::IntBlockPool$Allocator {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_645c25455f5b9b1c,
            mid_init$_abe21a6a1d9a9266,
            mid_bytesUsed_0f176418e3e16541,
            mid_freeBlocks_a3904e10f5bb9437,
            mid_getIntBlock_4b72a28a860ae838,
            mid_maxBufferedBlocks_bd89ce15dad49192,
            mid_numBufferedBlocks_bd89ce15dad49192,
            mid_recycleIntBlocks_4bb8f555233a8d15,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingIntBlockAllocator(jobject obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecyclingIntBlockAllocator(const RecyclingIntBlockAllocator& obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingIntBlockAllocator();
          RecyclingIntBlockAllocator(jint, jint);
          RecyclingIntBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jint > getIntBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
          void recycleIntBlocks(const JArray< JArray< jint > > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(RecyclingIntBlockAllocator);
        extern PyTypeObject *PY_TYPE(RecyclingIntBlockAllocator);

        class t_RecyclingIntBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingIntBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingIntBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
