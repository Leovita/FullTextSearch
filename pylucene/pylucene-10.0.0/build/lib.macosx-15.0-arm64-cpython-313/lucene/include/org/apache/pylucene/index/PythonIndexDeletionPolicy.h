#ifndef org_apache_pylucene_index_PythonIndexDeletionPolicy_H
#define org_apache_pylucene_index_PythonIndexDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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
    namespace pylucene {
      namespace index {

        class PythonIndexDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_onCommit_9425cd4f62c94bce,
            mid_onInit_9425cd4f62c94bce,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexDeletionPolicy(const PythonIndexDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          PythonIndexDeletionPolicy();

          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PythonIndexDeletionPolicy);
        extern PyTypeObject *PY_TYPE(PythonIndexDeletionPolicy);

        class t_PythonIndexDeletionPolicy {
        public:
          PyObject_HEAD
          PythonIndexDeletionPolicy object;
          static PyObject *wrap_Object(const PythonIndexDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
