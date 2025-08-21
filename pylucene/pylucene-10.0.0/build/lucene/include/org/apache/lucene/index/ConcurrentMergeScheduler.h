#ifndef org_apache_lucene_index_ConcurrentMergeScheduler_H
#define org_apache_lucene_index_ConcurrentMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeScheduler$MergeSource;
        class MergePolicy$OneMerge;
        class MergeTrigger;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class Executor;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ConcurrentMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_disableAutoIOThrottle_3720c61b0679eb3e,
            mid_enableAutoIOThrottle_3720c61b0679eb3e,
            mid_getAutoIOThrottle_947277eca0748c4e,
            mid_getForceMergeMBPerSec_32caabaad86c508b,
            mid_getIORateLimitMBPerSec_32caabaad86c508b,
            mid_getIntraMergeExecutor_0678b9dde6ccd395,
            mid_getMaxMergeCount_20fbf7565993c3d7,
            mid_getMaxThreadCount_20fbf7565993c3d7,
            mid_merge_d9d4a2a45897a889,
            mid_mergeThreadCount_20fbf7565993c3d7,
            mid_setDefaultMaxMergesAndThreads_b110fc3a58c081ab,
            mid_setForceMergeMBPerSec_b5bc1a2fb9ff9e90,
            mid_setMaxMergesAndThreads_e13cff512ebda969,
            mid_sync_3720c61b0679eb3e,
            mid_toString_09a7afff1868fc5e,
            mid_wrapForMerge_8bef5abc6563f83d,
            mid_updateMergeThreads_3720c61b0679eb3e,
            mid_maybeStall_5ca3a880b314dce9,
            mid_getMergeThread_2f391a4e461e058c,
            mid_doStall_3720c61b0679eb3e,
            mid_targetMBPerSecChanged_3720c61b0679eb3e,
            mid_doMerge_c30235496316397e,
            mid_handleMergeException_4b71a6d99b73f7d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConcurrentMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConcurrentMergeScheduler(const ConcurrentMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static jint AUTO_DETECT_MERGES_AND_THREADS;
          static ::java::lang::String *DEFAULT_CPU_CORE_COUNT_PROPERTY;

          ConcurrentMergeScheduler();

          void close() const;
          void disableAutoIOThrottle() const;
          void enableAutoIOThrottle() const;
          jboolean getAutoIOThrottle() const;
          jdouble getForceMergeMBPerSec() const;
          jdouble getIORateLimitMBPerSec() const;
          ::java::util::concurrent::Executor getIntraMergeExecutor(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          jint getMaxMergeCount() const;
          jint getMaxThreadCount() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
          jint mergeThreadCount() const;
          void setDefaultMaxMergesAndThreads(jboolean) const;
          void setForceMergeMBPerSec(jdouble) const;
          void setMaxMergesAndThreads(jint, jint) const;
          void sync() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::store::Directory wrapForMerge(const ::org::apache::lucene::index::MergePolicy$OneMerge &, const ::org::apache::lucene::store::Directory &) const;
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
        extern PyType_Def PY_TYPE_DEF(ConcurrentMergeScheduler);
        extern PyTypeObject *PY_TYPE(ConcurrentMergeScheduler);

        class t_ConcurrentMergeScheduler {
        public:
          PyObject_HEAD
          ConcurrentMergeScheduler object;
          static PyObject *wrap_Object(const ConcurrentMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
