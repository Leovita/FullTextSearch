#ifndef org_apache_lucene_sandbox_index_MergeOnFlushMergePolicy_H
#define org_apache_lucene_sandbox_index_MergeOnFlushMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy;
        class MergePolicy$MergeSpecification;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergeTrigger;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace index {

          class MergeOnFlushMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
           public:
            enum {
              mid_init$_ca149660d3a98b53,
              mid_findFullFlushMerges_6813602a04f57061,
              mid_getSmallSegmentThresholdMB_6fb37e123fed7a1f,
              mid_setSmallSegmentThresholdMB_a03f734ddaeb69b4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MergeOnFlushMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MergeOnFlushMergePolicy(const MergeOnFlushMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

            MergeOnFlushMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

            ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
            jdouble getSmallSegmentThresholdMB() const;
            void setSmallSegmentThresholdMB(jdouble) const;
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
      namespace sandbox {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(MergeOnFlushMergePolicy);
          extern PyTypeObject *PY_TYPE(MergeOnFlushMergePolicy);

          class t_MergeOnFlushMergePolicy {
          public:
            PyObject_HEAD
            MergeOnFlushMergePolicy object;
            static PyObject *wrap_Object(const MergeOnFlushMergePolicy&);
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
