#ifndef org_apache_lucene_util_ByteBlockPool$DirectTrackingAllocator_H
#define org_apache_lucene_util_ByteBlockPool$DirectTrackingAllocator_H

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

        class ByteBlockPool$DirectTrackingAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
         public:
          enum {
            mid_init$_e07e11bc9ee23d51,
            mid_getByteBlock_44e916dc40fc04cb,
            mid_recycleByteBlocks_12d456106f915218,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool$DirectTrackingAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool$DirectTrackingAllocator(const ByteBlockPool$DirectTrackingAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          ByteBlockPool$DirectTrackingAllocator(const ::org::apache::lucene::util::Counter &);

          JArray< jbyte > getByteBlock() const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool$DirectTrackingAllocator);
        extern PyTypeObject *PY_TYPE(ByteBlockPool$DirectTrackingAllocator);

        class t_ByteBlockPool$DirectTrackingAllocator {
        public:
          PyObject_HEAD
          ByteBlockPool$DirectTrackingAllocator object;
          static PyObject *wrap_Object(const ByteBlockPool$DirectTrackingAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
