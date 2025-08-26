#ifndef org_apache_lucene_index_MergeRateLimiter_H
#define org_apache_lucene_index_MergeRateLimiter_H

#include "org/apache/lucene/store/RateLimiter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMergeProgress;
        class MergePolicy$MergeAbortedException;
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
      namespace index {

        class MergeRateLimiter : public ::org::apache::lucene::store::RateLimiter {
         public:
          enum {
            mid_init$_1660a6c36c23556e,
            mid_getMBPerSec_6fb37e123fed7a1f,
            mid_getMinPauseCheckBytes_0f176418e3e16541,
            mid_getTotalBytesWritten_0f176418e3e16541,
            mid_getTotalPausedNS_0f176418e3e16541,
            mid_getTotalStoppedNS_0f176418e3e16541,
            mid_pause_3dc1c6e3a5a0baf0,
            mid_setMBPerSec_a03f734ddaeb69b4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeRateLimiter(jobject obj) : ::org::apache::lucene::store::RateLimiter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeRateLimiter(const MergeRateLimiter& obj) : ::org::apache::lucene::store::RateLimiter(obj) {}

          MergeRateLimiter(const ::org::apache::lucene::index::MergePolicy$OneMergeProgress &);

          jdouble getMBPerSec() const;
          jlong getMinPauseCheckBytes() const;
          jlong getTotalBytesWritten() const;
          jlong getTotalPausedNS() const;
          jlong getTotalStoppedNS() const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergeRateLimiter);
        extern PyTypeObject *PY_TYPE(MergeRateLimiter);

        class t_MergeRateLimiter {
        public:
          PyObject_HEAD
          MergeRateLimiter object;
          static PyObject *wrap_Object(const MergeRateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
