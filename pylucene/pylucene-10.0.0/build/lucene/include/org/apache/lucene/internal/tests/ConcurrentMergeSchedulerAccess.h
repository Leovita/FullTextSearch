#ifndef org_apache_lucene_internal_tests_ConcurrentMergeSchedulerAccess_H
#define org_apache_lucene_internal_tests_ConcurrentMergeSchedulerAccess_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ConcurrentMergeScheduler;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {

          class ConcurrentMergeSchedulerAccess : public ::java::lang::Object {
           public:
            enum {
              mid_setSuppressExceptions_39e3b82762c60fa8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcurrentMergeSchedulerAccess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcurrentMergeSchedulerAccess(const ConcurrentMergeSchedulerAccess& obj) : ::java::lang::Object(obj) {}

            void setSuppressExceptions(const ::org::apache::lucene::index::ConcurrentMergeScheduler &) const;
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(ConcurrentMergeSchedulerAccess);
          extern PyTypeObject *PY_TYPE(ConcurrentMergeSchedulerAccess);

          class t_ConcurrentMergeSchedulerAccess {
          public:
            PyObject_HEAD
            ConcurrentMergeSchedulerAccess object;
            static PyObject *wrap_Object(const ConcurrentMergeSchedulerAccess&);
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
