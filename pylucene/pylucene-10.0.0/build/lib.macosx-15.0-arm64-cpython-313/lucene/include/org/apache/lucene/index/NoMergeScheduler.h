#ifndef org_apache_lucene_index_NoMergeScheduler_H
#define org_apache_lucene_index_NoMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeScheduler$MergeSource;
        class MergePolicy$OneMerge;
        class MergeTrigger;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace concurrent {
      class Executor;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class NoMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_clone_1c97911758295bcf,
            mid_close_3720c61b0679eb3e,
            mid_getIntraMergeExecutor_0678b9dde6ccd395,
            mid_merge_d9d4a2a45897a889,
            mid_wrapForMerge_8bef5abc6563f83d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoMergeScheduler(const NoMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static ::org::apache::lucene::index::MergeScheduler *INSTANCE;

          ::org::apache::lucene::index::MergeScheduler clone() const;
          void close() const;
          ::java::util::concurrent::Executor getIntraMergeExecutor(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
          ::org::apache::lucene::store::Directory wrapForMerge(const ::org::apache::lucene::index::MergePolicy$OneMerge &, const ::org::apache::lucene::store::Directory &) const;
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
        extern PyType_Def PY_TYPE_DEF(NoMergeScheduler);
        extern PyTypeObject *PY_TYPE(NoMergeScheduler);

        class t_NoMergeScheduler {
        public:
          PyObject_HEAD
          NoMergeScheduler object;
          static PyObject *wrap_Object(const NoMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
