#ifndef org_apache_lucene_index_MergeScheduler_H
#define org_apache_lucene_index_MergeScheduler_H

#include "java/lang/Object.h"

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
  namespace io {
    class IOException;
    class Closeable;
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
            mid_close_3720c61b0679eb3e,
            mid_getIntraMergeExecutor_0678b9dde6ccd395,
            mid_merge_d9d4a2a45897a889,
            mid_wrapForMerge_8bef5abc6563f83d,
            mid_message_0d82408c6e55bc30,
            mid_verbose_947277eca0748c4e,
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
