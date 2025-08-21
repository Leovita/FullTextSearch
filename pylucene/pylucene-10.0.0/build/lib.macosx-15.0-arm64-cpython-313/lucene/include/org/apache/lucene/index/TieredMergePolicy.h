#ifndef org_apache_lucene_index_TieredMergePolicy_H
#define org_apache_lucene_index_TieredMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class SegmentCommitInfo;
        class TieredMergePolicy;
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
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TieredMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_findForcedDeletesMerges_7bfc14af8b38e726,
            mid_findForcedMerges_d4963384c8456639,
            mid_findMerges_0275979aa5326fa2,
            mid_getDeletesPctAllowed_32caabaad86c508b,
            mid_getFloorSegmentMB_32caabaad86c508b,
            mid_getForceMergeDeletesPctAllowed_32caabaad86c508b,
            mid_getMaxMergeAtOnce_20fbf7565993c3d7,
            mid_getMaxMergedSegmentMB_32caabaad86c508b,
            mid_getSegmentsPerTier_32caabaad86c508b,
            mid_getTargetSearchConcurrency_20fbf7565993c3d7,
            mid_setDeletesPctAllowed_c3bd230df380abe9,
            mid_setFloorSegmentMB_c3bd230df380abe9,
            mid_setForceMergeDeletesPctAllowed_c3bd230df380abe9,
            mid_setMaxMergeAtOnce_18409a05d16d6a8e,
            mid_setMaxMergedSegmentMB_c3bd230df380abe9,
            mid_setSegmentsPerTier_c3bd230df380abe9,
            mid_setTargetSearchConcurrency_18409a05d16d6a8e,
            mid_toString_09a7afff1868fc5e,
            mid_score_71d541ec9bca8638,
            mid_maxFullFlushMergeSize_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TieredMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TieredMergePolicy(const TieredMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jdouble DEFAULT_NO_CFS_RATIO;

          TieredMergePolicy();

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jdouble getDeletesPctAllowed() const;
          jdouble getFloorSegmentMB() const;
          jdouble getForceMergeDeletesPctAllowed() const;
          jint getMaxMergeAtOnce() const;
          jdouble getMaxMergedSegmentMB() const;
          jdouble getSegmentsPerTier() const;
          jint getTargetSearchConcurrency() const;
          TieredMergePolicy setDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setFloorSegmentMB(jdouble) const;
          TieredMergePolicy setForceMergeDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setMaxMergeAtOnce(jint) const;
          TieredMergePolicy setMaxMergedSegmentMB(jdouble) const;
          TieredMergePolicy setSegmentsPerTier(jdouble) const;
          TieredMergePolicy setTargetSearchConcurrency(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TieredMergePolicy);
        extern PyTypeObject *PY_TYPE(TieredMergePolicy);

        class t_TieredMergePolicy {
        public:
          PyObject_HEAD
          TieredMergePolicy object;
          static PyObject *wrap_Object(const TieredMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
