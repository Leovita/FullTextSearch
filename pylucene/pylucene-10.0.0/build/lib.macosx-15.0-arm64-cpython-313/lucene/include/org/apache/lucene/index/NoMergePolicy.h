#ifndef org_apache_lucene_index_NoMergePolicy_H
#define org_apache_lucene_index_NoMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class SegmentCommitInfo;
        class MergePolicy$MergeContext;
        class CodecReader;
        class MergeTrigger;
      }
      namespace util {
        class IOSupplier;
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

        class NoMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_findForcedDeletesMerges_7bfc14af8b38e726,
            mid_findForcedMerges_d4963384c8456639,
            mid_findFullFlushMerges_0275979aa5326fa2,
            mid_findMerges_04bf92eb95442564,
            mid_findMerges_0275979aa5326fa2,
            mid_getMaxCFSSegmentSizeMB_32caabaad86c508b,
            mid_getNoCFSRatio_32caabaad86c508b,
            mid_keepFullyDeletedSegment_656ba708b162fe3d,
            mid_numDeletesToMerge_764ee08fa6c8b00e,
            mid_setMaxCFSSegmentSizeMB_b5bc1a2fb9ff9e90,
            mid_setNoCFSRatio_b5bc1a2fb9ff9e90,
            mid_toString_09a7afff1868fc5e,
            mid_useCompoundFile_97d5f0f86c190956,
            mid_size_df03ba0154b74836,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoMergePolicy(const NoMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static ::org::apache::lucene::index::MergePolicy *INSTANCE;

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const JArray< ::org::apache::lucene::index::CodecReader > &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jdouble getMaxCFSSegmentSizeMB() const;
          jdouble getNoCFSRatio() const;
          jboolean keepFullyDeletedSegment(const ::org::apache::lucene::util::IOSupplier &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::util::IOSupplier &) const;
          void setMaxCFSSegmentSizeMB(jdouble) const;
          void setNoCFSRatio(jdouble) const;
          ::java::lang::String toString() const;
          jboolean useCompoundFile(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(NoMergePolicy);
        extern PyTypeObject *PY_TYPE(NoMergePolicy);

        class t_NoMergePolicy {
        public:
          PyObject_HEAD
          NoMergePolicy object;
          static PyObject *wrap_Object(const NoMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
