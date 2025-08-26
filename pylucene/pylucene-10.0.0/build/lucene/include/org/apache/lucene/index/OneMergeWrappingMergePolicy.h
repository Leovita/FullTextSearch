#ifndef org_apache_lucene_index_OneMergeWrappingMergePolicy_H
#define org_apache_lucene_index_OneMergeWrappingMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace java {
  namespace util {
    namespace function {
      class UnaryOperator;
    }
    class Map;
  }
  namespace lang {
    class Class;
    class Boolean;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy;
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergePolicy$OneMerge;
        class MergeTrigger;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class OneMergeWrappingMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
         public:
          enum {
            mid_init$_6d27c6cbb602d713,
            mid_findForcedDeletesMerges_cd4e6143b01cb9a0,
            mid_findForcedMerges_b54ded85c2bde575,
            mid_findFullFlushMerges_6813602a04f57061,
            mid_findMerges_6813602a04f57061,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OneMergeWrappingMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OneMergeWrappingMergePolicy(const OneMergeWrappingMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

          OneMergeWrappingMergePolicy(const ::org::apache::lucene::index::MergePolicy &, const ::java::util::function::UnaryOperator &);

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(OneMergeWrappingMergePolicy);
        extern PyTypeObject *PY_TYPE(OneMergeWrappingMergePolicy);

        class t_OneMergeWrappingMergePolicy {
        public:
          PyObject_HEAD
          OneMergeWrappingMergePolicy object;
          static PyObject *wrap_Object(const OneMergeWrappingMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
