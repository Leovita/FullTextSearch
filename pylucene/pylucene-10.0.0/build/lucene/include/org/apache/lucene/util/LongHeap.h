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
            mid_init$_540b2b23d51b1efd,
            mid_clear_3720c61b0679eb3e,
            mid_get_7b22650fccb5d574,
            mid_insertWithOverflow_d8a0ab12857291e0,
            mid_pop_16939d9d0a9a9721,
            mid_push_91d66fa3ea476cea,
            mid_pushAll_574551283b21d132,
            mid_size_20fbf7565993c3d7,
            mid_top_16939d9d0a9a9721,
            mid_updateTop_91d66fa3ea476cea,
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
