#ifndef org_apache_lucene_index_LogMergePolicy_H
#define org_apache_lucene_index_LogMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class SegmentCommitInfo;
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
            mid_init$_3720c61b0679eb3e,
            mid_findForcedDeletesMerges_7bfc14af8b38e726,
            mid_findForcedMerges_d4963384c8456639,
            mid_findMerges_0275979aa5326fa2,
            mid_getCalibrateSizeByDeletes_947277eca0748c4e,
            mid_getMaxMergeDocs_20fbf7565993c3d7,
            mid_getMergeFactor_20fbf7565993c3d7,
            mid_getTargetSearchConcurrency_20fbf7565993c3d7,
            mid_setCalibrateSizeByDeletes_b110fc3a58c081ab,
            mid_setMaxMergeDocs_540b2b23d51b1efd,
            mid_setMergeFactor_540b2b23d51b1efd,
            mid_setTargetSearchConcurrency_540b2b23d51b1efd,
            mid_toString_09a7afff1868fc5e,
            mid_sizeDocs_df03ba0154b74836,
            mid_maxFullFlushMergeSize_16939d9d0a9a9721,
            mid_isMerged_e90ff6fca1cc0b2f,
            mid_sizeBytes_df03ba0154b74836,
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
