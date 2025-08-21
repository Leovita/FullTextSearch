#ifndef org_apache_lucene_util_BytesRefBlockPool_H
#define org_apache_lucene_util_BytesRefBlockPool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class ByteBlockPool;
        class BytesRef;
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

        class BytesRefBlockPool : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_4fc7f90c0bbc4c49,
            mid_addBytesRef_5cda243a0bd46c4d,
            mid_fillBytesRef_be93bdc4fbbb5027,
            mid_ramBytesUsed_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefBlockPool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefBlockPool(const BytesRefBlockPool& obj) : ::java::lang::Object(obj) {}

          BytesRefBlockPool();
          BytesRefBlockPool(const ::org::apache::lucene::util::ByteBlockPool &);

          jint addBytesRef(const ::org::apache::lucene::util::BytesRef &) const;
          void fillBytesRef(const ::org::apache::lucene::util::BytesRef &, jint) const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefBlockPool);
        extern PyTypeObject *PY_TYPE(BytesRefBlockPool);

        class t_BytesRefBlockPool {
        public:
          PyObject_HEAD
          BytesRefBlockPool object;
          static PyObject *wrap_Object(const BytesRefBlockPool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
