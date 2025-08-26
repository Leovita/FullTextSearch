#ifndef org_apache_lucene_index_TieredMergePolicy_H
#define org_apache_lucene_index_TieredMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy$MergeSpecification;
        class TieredMergePolicy;
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

        class TieredMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_findForcedDeletesMerges_cd4e6143b01cb9a0,
            mid_findForcedMerges_b54ded85c2bde575,
            mid_findMerges_6813602a04f57061,
            mid_getDeletesPctAllowed_6fb37e123fed7a1f,
            mid_getFloorSegmentMB_6fb37e123fed7a1f,
            mid_getForceMergeDeletesPctAllowed_6fb37e123fed7a1f,
            mid_getMaxMergeAtOnce_bd89ce15dad49192,
            mid_getMaxMergedSegmentMB_6fb37e123fed7a1f,
            mid_getSegmentsPerTier_6fb37e123fed7a1f,
            mid_getTargetSearchConcurrency_bd89ce15dad49192,
            mid_setDeletesPctAllowed_8f78ea8d655b804b,
            mid_setFloorSegmentMB_8f78ea8d655b804b,
            mid_setForceMergeDeletesPctAllowed_8f78ea8d655b804b,
            mid_setMaxMergeAtOnce_be2b18add377122f,
            mid_setMaxMergedSegmentMB_8f78ea8d655b804b,
            mid_setSegmentsPerTier_8f78ea8d655b804b,
            mid_setTargetSearchConcurrency_be2b18add377122f,
            mid_toString_e7df854526d67fa3,
            mid_maxFullFlushMergeSize_0f176418e3e16541,
            mid_score_b306d6ef7021d62b,
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
