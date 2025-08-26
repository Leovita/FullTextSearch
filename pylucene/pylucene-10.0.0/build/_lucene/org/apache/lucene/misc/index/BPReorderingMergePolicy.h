#ifndef org_apache_lucene_misc_index_BPReorderingMergePolicy_H
#define org_apache_lucene_misc_index_BPReorderingMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy;
        class MergePolicy$MergeSpecification;
        class CodecReader;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergeTrigger;
      }
      namespace misc {
        namespace index {
          class BPIndexReorderer;
        }
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
      namespace misc {
        namespace index {

          class BPReorderingMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
           public:
            enum {
              mid_init$_17699524770b6353,
              mid_findForcedDeletesMerges_cd4e6143b01cb9a0,
              mid_findForcedMerges_b54ded85c2bde575,
              mid_findFullFlushMerges_6813602a04f57061,
              mid_findMerges_4fbbcd7cd7f0ba5c,
              mid_findMerges_6813602a04f57061,
              mid_setMinNaturalMergeNumDocs_8226bd0b0fc13dba,
              mid_setMinNaturalMergeRatioFromBiggestSegment_675f4cb9a2529ee0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BPReorderingMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BPReorderingMergePolicy(const BPReorderingMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

            BPReorderingMergePolicy(const ::org::apache::lucene::index::MergePolicy &, const ::org::apache::lucene::misc::index::BPIndexReorderer &);

            ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
            ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
            ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
            ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const JArray< ::org::apache::lucene::index::CodecReader > &) const;
            ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
            void setMinNaturalMergeNumDocs(jint) const;
            void setMinNaturalMergeRatioFromBiggestSegment(jfloat) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(BPReorderingMergePolicy);
          extern PyTypeObject *PY_TYPE(BPReorderingMergePolicy);

          class t_BPReorderingMergePolicy {
          public:
            PyObject_HEAD
            BPReorderingMergePolicy object;
            static PyObject *wrap_Object(const BPReorderingMergePolicy&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
