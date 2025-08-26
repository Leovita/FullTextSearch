#ifndef org_apache_lucene_index_MergePolicy_H
#define org_apache_lucene_index_MergePolicy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class CodecReader;
        class MergePolicy$MergeContext;
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
            mid_findForcedDeletesMerges_cd4e6143b01cb9a0,
            mid_findForcedMerges_b54ded85c2bde575,
            mid_findFullFlushMerges_6813602a04f57061,
            mid_findMerges_4fbbcd7cd7f0ba5c,
            mid_findMerges_6813602a04f57061,
            mid_getMaxCFSSegmentSizeMB_6fb37e123fed7a1f,
            mid_getNoCFSRatio_6fb37e123fed7a1f,
            mid_keepFullyDeletedSegment_c40df34321e09510,
            mid_numDeletesToMerge_3a22811d78d2c37d,
            mid_setMaxCFSSegmentSizeMB_a03f734ddaeb69b4,
            mid_setNoCFSRatio_a03f734ddaeb69b4,
            mid_useCompoundFile_14b1e62c41caff89,
            mid_maxFullFlushMergeSize_0f176418e3e16541,
            mid_assertDelCount_2595125e3f28c66b,
            mid_isMerged_14b1e62c41caff89,
            mid_segString_ebd9889f9ec67039,
            mid_size_4bcc685415af8b2d,
            mid_message_d470a3580a83f698,
            mid_verbose_77f1f11fde407016,
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
