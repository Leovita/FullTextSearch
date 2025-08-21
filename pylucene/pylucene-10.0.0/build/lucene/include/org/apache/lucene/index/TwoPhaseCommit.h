#ifndef org_apache_lucene_index_TwoPhaseCommit_H
#define org_apache_lucene_index_TwoPhaseCommit_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
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

        class TwoPhaseCommit : public ::java::lang::Object {
         public:
          enum {
            mid_commit_16939d9d0a9a9721,
            mid_prepareCommit_16939d9d0a9a9721,
            mid_rollback_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TwoPhaseCommit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TwoPhaseCommit(const TwoPhaseCommit& obj) : ::java::lang::Object(obj) {}

          jlong commit() const;
          jlong prepareCommit() const;
          void rollback() const;
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
        extern PyType_Def PY_TYPE_DEF(TwoPhaseCommit);
        extern PyTypeObject *PY_TYPE(TwoPhaseCommit);

        class t_TwoPhaseCommit {
        public:
          PyObject_HEAD
          TwoPhaseCommit object;
          static PyObject *wrap_Object(const TwoPhaseCommit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
