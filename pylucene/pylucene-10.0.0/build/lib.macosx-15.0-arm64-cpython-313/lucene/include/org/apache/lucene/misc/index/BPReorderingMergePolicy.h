#ifndef org_apache_lucene_misc_index_BPReorderingMergePolicy_H
#define org_apache_lucene_misc_index_BPReorderingMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class SegmentCommitInfo;
        class MergePolicy$MergeContext;
        class CodecReader;
        class MergePolicy;
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
              mid_init$_9146737695fb1891,
              mid_findForcedDeletesMerges_7bfc14af8b38e726,
              mid_findForcedMerges_d4963384c8456639,
              mid_findFullFlushMerges_0275979aa5326fa2,
              mid_findMerges_04bf92eb95442564,
              mid_findMerges_0275979aa5326fa2,
              mid_setMinNaturalMergeNumDocs_540b2b23d51b1efd,
              mid_setMinNaturalMergeRatioFromBiggestSegment_c771a95b0227fb6a,
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
