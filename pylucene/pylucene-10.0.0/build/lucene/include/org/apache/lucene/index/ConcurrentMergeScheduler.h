#ifndef org_apache_lucene_index_ConcurrentMergeScheduler_H
#define org_apache_lucene_index_ConcurrentMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class MergeScheduler$MergeSource;
        class MergePolicy$OneMerge;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_disableAutoIOThrottle_e7bdbe105ce1bafb,
            mid_enableAutoIOThrottle_e7bdbe105ce1bafb,
            mid_getAutoIOThrottle_9aa4f33e82ea333f,
            mid_getForceMergeMBPerSec_6fb37e123fed7a1f,
            mid_getIORateLimitMBPerSec_6fb37e123fed7a1f,
            mid_getIntraMergeExecutor_194c3f7bd1dfc463,
            mid_getMaxMergeCount_bd89ce15dad49192,
            mid_getMaxThreadCount_bd89ce15dad49192,
            mid_merge_256e955b9cf4fc16,
            mid_mergeThreadCount_bd89ce15dad49192,
            mid_setDefaultMaxMergesAndThreads_f5dd97eebf6a215a,
            mid_setForceMergeMBPerSec_a03f734ddaeb69b4,
            mid_setMaxMergesAndThreads_645c25455f5b9b1c,
            mid_sync_e7bdbe105ce1bafb,
            mid_toString_e7df854526d67fa3,
            mid_wrapForMerge_a59e5ec3e050adb9,
            mid_updateMergeThreads_e7bdbe105ce1bafb,
            mid_maybeStall_13640fa3faac8fe9,
            mid_getMergeThread_34b2ab3bde04acd1,
            mid_doStall_e7bdbe105ce1bafb,
            mid_targetMBPerSecChanged_e7bdbe105ce1bafb,
            mid_doMerge_4b4860aa588caba7,
            mid_handleMergeException_9b649326a1df01c3,
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
