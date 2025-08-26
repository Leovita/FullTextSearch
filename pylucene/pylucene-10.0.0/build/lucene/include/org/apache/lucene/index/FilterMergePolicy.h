#ifndef org_apache_lucene_index_FilterMergePolicy_H
#define org_apache_lucene_index_FilterMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Unwrappable;
        class IOSupplier;
      }
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy$MergeSpecification;
        class CodecReader;
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

        class FilterMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_ca149660d3a98b53,
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
            mid_toString_e7df854526d67fa3,
            mid_unwrap_1fcb76658e81d877,
            mid_useCompoundFile_14b1e62c41caff89,
            mid_maxFullFlushMergeSize_0f176418e3e16541,
            mid_size_4bcc685415af8b2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterMergePolicy(const FilterMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          FilterMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

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
          ::org::apache::lucene::index::MergePolicy unwrap() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterMergePolicy);
        extern PyTypeObject *PY_TYPE(FilterMergePolicy);

        class t_FilterMergePolicy {
        public:
          PyObject_HEAD
          FilterMergePolicy object;
          static PyObject *wrap_Object(const FilterMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
