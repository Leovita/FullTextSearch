#ifndef org_apache_lucene_index_MergePolicy_H
#define org_apache_lucene_index_MergePolicy_H

#include "java/lang/Object.h"

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

        class MergePolicy : public ::java::lang::Object {
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
            mid_useCompoundFile_97d5f0f86c190956,
            mid_maxFullFlushMergeSize_16939d9d0a9a9721,
            mid_assertDelCount_01be1b923251e768,
            mid_isMerged_97d5f0f86c190956,
            mid_segString_36bfe4082cfecff6,
            mid_size_df03ba0154b74836,
            mid_message_c1c0aeef574d361a,
            mid_verbose_8952296e4fc73294,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy(const MergePolicy& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MergePolicy);
        extern PyTypeObject *PY_TYPE(MergePolicy);

        class t_MergePolicy {
        public:
          PyObject_HEAD
          MergePolicy object;
          static PyObject *wrap_Object(const MergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
