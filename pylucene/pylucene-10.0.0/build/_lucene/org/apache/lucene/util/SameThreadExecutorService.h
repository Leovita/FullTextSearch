#ifndef org_apache_lucene_util_SameThreadExecutorService_H
#define org_apache_lucene_util_SameThreadExecutorService_H

#include "java/util/concurrent/AbstractExecutorService.h"

namespace java {
  namespace lang {
    class Class;
    class Runnable;
    class InterruptedException;
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
            mid_init$_3720c61b0679eb3e,
            mid_awaitTermination_e992b4908961e96e,
            mid_execute_5f8e9a753ad746d2,
            mid_isShutdown_947277eca0748c4e,
            mid_isTerminated_947277eca0748c4e,
            mid_shutdown_3720c61b0679eb3e,
            mid_shutdownNow_36830460e10839eb,
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
