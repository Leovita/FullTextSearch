#ifndef org_apache_lucene_util_SameThreadExecutorService_H
#define org_apache_lucene_util_SameThreadExecutorService_H

#include "java/util/concurrent/AbstractExecutorService.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Runnable;
    class Class;
  }
  namespace util {
    class List;
    namespace concurrent {
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SameThreadExecutorService : public ::java::util::concurrent::AbstractExecutorService {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_awaitTermination_67710f08bc0014c8,
            mid_execute_b278873deffbc02b,
            mid_isShutdown_9aa4f33e82ea333f,
            mid_isTerminated_9aa4f33e82ea333f,
            mid_shutdown_e7bdbe105ce1bafb,
            mid_shutdownNow_1387e1e2702ac173,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SameThreadExecutorService(jobject obj) : ::java::util::concurrent::AbstractExecutorService(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SameThreadExecutorService(const SameThreadExecutorService& obj) : ::java::util::concurrent::AbstractExecutorService(obj) {}

          SameThreadExecutorService();

          jboolean awaitTermination(jlong, const ::java::util::concurrent::TimeUnit &) const;
          void execute(const ::java::lang::Runnable &) const;
          jboolean isShutdown() const;
          jboolean isTerminated() const;
          void shutdown() const;
          ::java::util::List shutdownNow() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(SameThreadExecutorService);
        extern PyTypeObject *PY_TYPE(SameThreadExecutorService);

        class t_SameThreadExecutorService {
        public:
          PyObject_HEAD
          SameThreadExecutorService object;
          static PyObject *wrap_Object(const SameThreadExecutorService&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
