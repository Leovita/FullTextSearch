#ifndef org_apache_lucene_index_TwoPhaseCommitTool_H
#define org_apache_lucene_index_TwoPhaseCommitTool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TwoPhaseCommit;
        class TwoPhaseCommitTool$CommitFailException;
        class TwoPhaseCommitTool$PrepareCommitFailException;
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
      namespace index {

        class TwoPhaseCommitTool : public ::java::lang::Object {
         public:
          enum {
            mid_execute_f51934e2d712b34d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TwoPhaseCommitTool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TwoPhaseCommitTool(const TwoPhaseCommitTool& obj) : ::java::lang::Object(obj) {}

          static void execute(const JArray< ::org::apache::lucene::index::TwoPhaseCommit > &);
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
        extern PyType_Def PY_TYPE_DEF(TwoPhaseCommitTool);
        extern PyTypeObject *PY_TYPE(TwoPhaseCommitTool);

        class t_TwoPhaseCommitTool {
        public:
          PyObject_HEAD
          TwoPhaseCommitTool object;
          static PyObject *wrap_Object(const TwoPhaseCommitTool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
