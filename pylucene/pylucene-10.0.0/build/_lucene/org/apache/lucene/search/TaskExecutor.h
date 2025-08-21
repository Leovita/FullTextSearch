#ifndef org_apache_lucene_search_TaskExecutor_H
#define org_apache_lucene_search_TaskExecutor_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class List;
    namespace concurrent {
      class Executor;
      class Callable;
    }
  }
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
      namespace search {

        class TaskExecutor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4c5f70bd027afb51,
            mid_invokeAll_93d4f44cee5de8eb,
            mid_toString_09a7afff1868fc5e,
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
