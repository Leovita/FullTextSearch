#ifndef org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H
#define org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H

#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
        class IndexCommit;
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
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PersistentSnapshotDeletionPolicy : public ::org::apache::lucene::index::SnapshotDeletionPolicy {
         public:
          enum {
            mid_init$_89059ce984771846,
            mid_init$_324996cf6bfe70a8,
            mid_getLastSaveFile_09a7afff1868fc5e,
            mid_release_2b1e61274f0bac24,
            mid_release_8b3d46852b435a94,
            mid_snapshot_271a09cc45c80524,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PersistentSnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PersistentSnapshotDeletionPolicy(const PersistentSnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {}

          static ::java::lang::String *SNAPSHOTS_PREFIX;

          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &);
          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);

          ::java::lang::String getLastSaveFile() const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
          void release(jlong) const;
          ::org::apache::lucene::index::IndexCommit snapshot() const;
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
        extern PyType_Def PY_TYPE_DEF(PersistentSnapshotDeletionPolicy);
        extern PyTypeObject *PY_TYPE(PersistentSnapshotDeletionPolicy);

        class t_PersistentSnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          PersistentSnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const PersistentSnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
