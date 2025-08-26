#ifndef org_apache_lucene_search_TaskExecutor_H
#define org_apache_lucene_search_TaskExecutor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
    class List;
    namespace concurrent {
      class Callable;
      class Executor;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TaskExecutor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_285b215785016c8a,
            mid_invokeAll_edc76bb8b84c2b2b,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TaskExecutor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TaskExecutor(const TaskExecutor& obj) : ::java::lang::Object(obj) {}

          TaskExecutor(const ::java::util::concurrent::Executor &);

          ::java::util::List invokeAll(const ::java::util::Collection &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TaskExecutor);
        extern PyTypeObject *PY_TYPE(TaskExecutor);

        class t_TaskExecutor {
        public:
          PyObject_HEAD
          TaskExecutor object;
          static PyObject *wrap_Object(const TaskExecutor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
