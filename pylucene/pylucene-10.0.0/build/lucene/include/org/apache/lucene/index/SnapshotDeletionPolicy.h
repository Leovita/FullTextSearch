#ifndef org_apache_lucene_index_SnapshotDeletionPolicy_H
#define org_apache_lucene_index_SnapshotDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SnapshotDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_d4028a7ecf18dc21,
            mid_getIndexCommit_2acc70b53501640b,
            mid_getSnapshotCount_bd89ce15dad49192,
            mid_getSnapshots_1387e1e2702ac173,
            mid_onCommit_acbb405b60a30822,
            mid_onInit_acbb405b60a30822,
            mid_release_8fc5926f74e4489e,
            mid_snapshot_3f5d748efdffe9e0,
            mid_releaseGen_1d3149fac12f2af3,
            mid_incRef_8fc5926f74e4489e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SnapshotDeletionPolicy(const SnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          SnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &);

          ::org::apache::lucene::index::IndexCommit getIndexCommit(jlong) const;
          jint getSnapshotCount() const;
          ::java::util::List getSnapshots() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
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
        extern PyType_Def PY_TYPE_DEF(SnapshotDeletionPolicy);
        extern PyTypeObject *PY_TYPE(SnapshotDeletionPolicy);

        class t_SnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          SnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const SnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
