#ifndef org_apache_lucene_store_RateLimiter_H
#define org_apache_lucene_store_RateLimiter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RateLimiter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_getMBPerSec_32caabaad86c508b,
            mid_getMinPauseCheckBytes_16939d9d0a9a9721,
            mid_pause_91d66fa3ea476cea,
            mid_setMBPerSec_b5bc1a2fb9ff9e90,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RateLimiter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimiter(const RateLimiter& obj) : ::java::lang::Object(obj) {}

          RateLimiter();

          jdouble getMBPerSec() const;
          jlong getMinPauseCheckBytes() const;
          jlong pause(jlong) const;
          void setMBPerSec(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(RateLimiter);
        extern PyTypeObject *PY_TYPE(RateLimiter);

        class t_RateLimiter {
        public:
          PyObject_HEAD
          RateLimiter object;
          static PyObject *wrap_Object(const RateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
