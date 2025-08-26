#ifndef org_apache_lucene_index_KeepOnlyLastCommitDeletionPolicy_H
#define org_apache_lucene_index_KeepOnlyLastCommitDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class KeepOnlyLastCommitDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_onCommit_acbb405b60a30822,
            mid_onInit_acbb405b60a30822,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KeepOnlyLastCommitDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KeepOnlyLastCommitDeletionPolicy(const KeepOnlyLastCommitDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          KeepOnlyLastCommitDeletionPolicy();

          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(KeepOnlyLastCommitDeletionPolicy);
        extern PyTypeObject *PY_TYPE(KeepOnlyLastCommitDeletionPolicy);

        class t_KeepOnlyLastCommitDeletionPolicy {
        public:
          PyObject_HEAD
          KeepOnlyLastCommitDeletionPolicy object;
          static PyObject *wrap_Object(const KeepOnlyLastCommitDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
