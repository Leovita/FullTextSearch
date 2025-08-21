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
            mid_init$_3720c61b0679eb3e,
            mid_init$_e13cff512ebda969,
            mid_init$_1592eea16ceb49c5,
            mid_bytesUsed_16939d9d0a9a9721,
            mid_freeBlocks_3c9bba330f083871,
            mid_getIntBlock_623cd4a044ba647a,
            mid_maxBufferedBlocks_20fbf7565993c3d7,
            mid_numBufferedBlocks_20fbf7565993c3d7,
            mid_recycleIntBlocks_db6edd5aae13a5bb,
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
