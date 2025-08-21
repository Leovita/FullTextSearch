#ifndef org_apache_lucene_util_ByteBlockPool$Allocator_H
#define org_apache_lucene_util_ByteBlockPool$Allocator_H

#include "java/lang/Object.h"

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

        class ByteBlockPool$Allocator : public ::java::lang::Object {
         public:
          enum {
            mid_getByteBlock_5560da88fc44aa82,
            mid_recycleByteBlocks_540f60124d959184,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool$Allocator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool$Allocator(const ByteBlockPool$Allocator& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool$Allocator);
        extern PyTypeObject *PY_TYPE(ByteBlockPool$Allocator);

        class t_ByteBlockPool$Allocator {
        public:
          PyObject_HEAD
          ByteBlockPool$Allocator object;
          static PyObject *wrap_Object(const ByteBlockPool$Allocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
