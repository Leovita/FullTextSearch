#ifndef org_apache_lucene_index_LogMergePolicy_H
#define org_apache_lucene_index_LogMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Boolean;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LogMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_findForcedDeletesMerges_cd4e6143b01cb9a0,
            mid_findForcedMerges_b54ded85c2bde575,
            mid_findMerges_6813602a04f57061,
            mid_getCalibrateSizeByDeletes_9aa4f33e82ea333f,
            mid_getMaxMergeDocs_bd89ce15dad49192,
            mid_getMergeFactor_bd89ce15dad49192,
            mid_getTargetSearchConcurrency_bd89ce15dad49192,
            mid_setCalibrateSizeByDeletes_f5dd97eebf6a215a,
            mid_setMaxMergeDocs_8226bd0b0fc13dba,
            mid_setMergeFactor_8226bd0b0fc13dba,
            mid_setTargetSearchConcurrency_8226bd0b0fc13dba,
            mid_toString_e7df854526d67fa3,
            mid_maxFullFlushMergeSize_0f176418e3e16541,
            mid_isMerged_f230ff768e39db5a,
            mid_sizeBytes_4bcc685415af8b2d,
            mid_sizeDocs_4bcc685415af8b2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogMergePolicy(const LogMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jint DEFAULT_MAX_MERGE_DOCS;
          static jint DEFAULT_MERGE_FACTOR;
          static jdouble DEFAULT_NO_CFS_RATIO;
          static jdouble LEVEL_LOG_SPAN;

          LogMergePolicy();

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jboolean getCalibrateSizeByDeletes() const;
          jint getMaxMergeDocs() const;
          jint getMergeFactor() const;
          jint getTargetSearchConcurrency() const;
          void setCalibrateSizeByDeletes(jboolean) const;
          void setMaxMergeDocs(jint) const;
          void setMergeFactor(jint) const;
          void setTargetSearchConcurrency(jint) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(LogMergePolicy);
        extern PyTypeObject *PY_TYPE(LogMergePolicy);

        class t_LogMergePolicy {
        public:
          PyObject_HEAD
          LogMergePolicy object;
          static PyObject *wrap_Object(const LogMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
