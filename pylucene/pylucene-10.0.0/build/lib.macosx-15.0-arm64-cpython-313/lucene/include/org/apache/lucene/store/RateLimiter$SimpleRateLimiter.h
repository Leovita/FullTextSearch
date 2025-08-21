#ifndef org_apache_lucene_store_RateLimiter$SimpleRateLimiter_H
#define org_apache_lucene_store_RateLimiter$SimpleRateLimiter_H

#include "org/apache/lucene/store/RateLimiter.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RateLimiter$SimpleRateLimiter : public ::org::apache::lucene::store::RateLimiter {
         public:
          enum {
            mid_init$_b5bc1a2fb9ff9e90,
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

          explicit RateLimiter$SimpleRateLimiter(jobject obj) : ::org::apache::lucene::store::RateLimiter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimiter$SimpleRateLimiter(const RateLimiter$SimpleRateLimiter& obj) : ::org::apache::lucene::store::RateLimiter(obj) {}

          RateLimiter$SimpleRateLimiter(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(RateLimiter$SimpleRateLimiter);
        extern PyTypeObject *PY_TYPE(RateLimiter$SimpleRateLimiter);

        class t_RateLimiter$SimpleRateLimiter {
        public:
          PyObject_HEAD
          RateLimiter$SimpleRateLimiter object;
          static PyObject *wrap_Object(const RateLimiter$SimpleRateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
