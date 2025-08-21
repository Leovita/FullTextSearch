#ifndef org_apache_lucene_util_IntBlockPool$Allocator_H
#define org_apache_lucene_util_IntBlockPool$Allocator_H

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

        class IntBlockPool$Allocator : public ::java::lang::Object {
         public:
          enum {
            mid_getIntBlock_623cd4a044ba647a,
            mid_recycleIntBlocks_db6edd5aae13a5bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntBlockPool$Allocator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntBlockPool$Allocator(const IntBlockPool$Allocator& obj) : ::java::lang::Object(obj) {}

          JArray< jint > getIntBlock() const;
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
        extern PyType_Def PY_TYPE_DEF(IntBlockPool$Allocator);
        extern PyTypeObject *PY_TYPE(IntBlockPool$Allocator);

        class t_IntBlockPool$Allocator {
        public:
          PyObject_HEAD
          IntBlockPool$Allocator object;
          static PyObject *wrap_Object(const IntBlockPool$Allocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
