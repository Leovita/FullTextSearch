#ifndef org_apache_lucene_index_LogByteSizeMergePolicy_H
#define org_apache_lucene_index_LogByteSizeMergePolicy_H

#include "org/apache/lucene/index/LogMergePolicy.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LogByteSizeMergePolicy : public ::org::apache::lucene::index::LogMergePolicy {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_getMaxMergeMB_32caabaad86c508b,
            mid_getMaxMergeMBForForcedMerge_32caabaad86c508b,
            mid_getMinMergeMB_32caabaad86c508b,
            mid_setMaxMergeMB_b5bc1a2fb9ff9e90,
            mid_setMaxMergeMBForForcedMerge_b5bc1a2fb9ff9e90,
            mid_setMinMergeMB_b5bc1a2fb9ff9e90,
            mid_size_df03ba0154b74836,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogByteSizeMergePolicy(jobject obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogByteSizeMergePolicy(const LogByteSizeMergePolicy& obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {}

          static jdouble DEFAULT_MAX_MERGE_MB;
          static jdouble DEFAULT_MAX_MERGE_MB_FOR_FORCED_MERGE;
          static jdouble DEFAULT_MIN_MERGE_MB;

          LogByteSizeMergePolicy();

          jdouble getMaxMergeMB() const;
          jdouble getMaxMergeMBForForcedMerge() const;
          jdouble getMinMergeMB() const;
          void setMaxMergeMB(jdouble) const;
          void setMaxMergeMBForForcedMerge(jdouble) const;
          void setMinMergeMB(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LogByteSizeMergePolicy);
        extern PyTypeObject *PY_TYPE(LogByteSizeMergePolicy);

        class t_LogByteSizeMergePolicy {
        public:
          PyObject_HEAD
          LogByteSizeMergePolicy object;
          static PyObject *wrap_Object(const LogByteSizeMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
