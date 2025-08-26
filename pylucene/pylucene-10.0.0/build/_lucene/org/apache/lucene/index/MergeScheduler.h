#ifndef org_apache_lucene_index_MergeScheduler_H
#define org_apache_lucene_index_MergeScheduler_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class MergeScheduler$MergeSource;
        class MergePolicy$OneMerge;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
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

        class MergeScheduler : public ::java::lang::Object {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_getIntraMergeExecutor_194c3f7bd1dfc463,
            mid_merge_256e955b9cf4fc16,
            mid_wrapForMerge_a59e5ec3e050adb9,
            mid_message_ee46a189998009d6,
            mid_verbose_9aa4f33e82ea333f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeScheduler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeScheduler(const MergeScheduler& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MergeScheduler);
        extern PyTypeObject *PY_TYPE(MergeScheduler);

        class t_MergeScheduler {
        public:
          PyObject_HEAD
          MergeScheduler object;
          static PyObject *wrap_Object(const MergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
