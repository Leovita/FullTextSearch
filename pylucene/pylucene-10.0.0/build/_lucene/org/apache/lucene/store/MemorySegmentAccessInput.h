#ifndef org_apache_lucene_store_MemorySegmentAccessInput_H
#define org_apache_lucene_store_MemorySegmentAccessInput_H

#include "org/apache/lucene/store/RandomAccessInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class MemorySegmentAccessInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class MemorySegmentAccessInput : public ::org::apache::lucene::store::RandomAccessInput {
         public:
          enum {
            mid_clone_f2bb9cdc808b337d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MemorySegmentAccessInput(jobject obj) : ::org::apache::lucene::store::RandomAccessInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MemorySegmentAccessInput(const MemorySegmentAccessInput& obj) : ::org::apache::lucene::store::RandomAccessInput(obj) {}

          MemorySegmentAccessInput clone() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(MemorySegmentAccessInput);
        extern PyTypeObject *PY_TYPE(MemorySegmentAccessInput);

        class t_MemorySegmentAccessInput {
        public:
          PyObject_HEAD
          MemorySegmentAccessInput object;
          static PyObject *wrap_Object(const MemorySegmentAccessInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
