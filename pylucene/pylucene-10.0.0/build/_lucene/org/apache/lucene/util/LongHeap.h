#ifndef org_apache_lucene_util_LongHeap_H
#define org_apache_lucene_util_LongHeap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongHeap;
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

        class LongHeap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_clear_e7bdbe105ce1bafb,
            mid_get_49af390f180d8ee7,
            mid_insertWithOverflow_eae0b285d107fcb0,
            mid_pop_0f176418e3e16541,
            mid_push_3dc1c6e3a5a0baf0,
            mid_pushAll_51807f32ec6113ec,
            mid_size_bd89ce15dad49192,
            mid_top_0f176418e3e16541,
            mid_updateTop_3dc1c6e3a5a0baf0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongHeap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongHeap(const LongHeap& obj) : ::java::lang::Object(obj) {}

          LongHeap(jint);

          void clear() const;
          jlong get(jint) const;
          jboolean insertWithOverflow(jlong) const;
          jlong pop() const;
          jlong push(jlong) const;
          void pushAll(const LongHeap &) const;
          jint size() const;
          jlong top() const;
          jlong updateTop(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(LongHeap);
        extern PyTypeObject *PY_TYPE(LongHeap);

        class t_LongHeap {
        public:
          PyObject_HEAD
          LongHeap object;
          static PyObject *wrap_Object(const LongHeap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
