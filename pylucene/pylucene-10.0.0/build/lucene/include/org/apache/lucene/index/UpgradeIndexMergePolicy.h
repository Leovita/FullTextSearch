#ifndef org_apache_lucene_index_UpgradeIndexMergePolicy_H
#define org_apache_lucene_index_UpgradeIndexMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy;
        class MergePolicy$MergeSpecification;
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

        class UpgradeIndexMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
         public:
          enum {
            mid_init$_ca149660d3a98b53,
            mid_findForcedMerges_b54ded85c2bde575,
            mid_findMerges_6813602a04f57061,
            mid_shouldUpgradeSegment_c9718ef738158846,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UpgradeIndexMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UpgradeIndexMergePolicy(const UpgradeIndexMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

          UpgradeIndexMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(UpgradeIndexMergePolicy);
        extern PyTypeObject *PY_TYPE(UpgradeIndexMergePolicy);

        class t_UpgradeIndexMergePolicy {
        public:
          PyObject_HEAD
          UpgradeIndexMergePolicy object;
          static PyObject *wrap_Object(const UpgradeIndexMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
