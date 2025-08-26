#ifndef java_util_concurrent_ExecutorService_H
#define java_util_concurrent_ExecutorService_H

#include "java/util/concurrent/Executor.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Runnable;
    class AutoCloseable;
    class Object;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class TimeoutException;
      class Future;
      class ExecutionException;
      class Callable;
      class TimeUnit;
    }
    class Collection;
    class List;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ExecutorService : public ::java::util::concurrent::Executor {
       public:
        enum {
          mid_awaitTermination_67710f08bc0014c8,
          mid_close_e7bdbe105ce1bafb,
          mid_invokeAll_edc76bb8b84c2b2b,
          mid_invokeAll_b2062f35bed0498c,
          mid_invokeAny_f351d27a1d611522,
          mid_invokeAny_ac04a621f274d657,
          mid_isShutdown_9aa4f33e82ea333f,
          mid_isTerminated_9aa4f33e82ea333f,
          mid_shutdown_e7bdbe105ce1bafb,
          mid_shutdownNow_1387e1e2702ac173,
          mid_submit_10f56ee933c03a40,
          mid_submit_aadcd45c37e94498,
          mid_submit_e7bb37debec0815f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExecutorService(jobject obj) : ::java::util::concurrent::Executor(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExecutorService(const ExecutorService& obj) : ::java::util::concurrent::Executor(obj) {}

        jboolean awaitTermination(jlong, const ::java::util::concurrent::TimeUnit &) const;
        void close() const;
        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        jboolean isShutdown() const;
        jboolean isTerminated() const;
        void shutdown() const;
        ::java::util::List shutdownNow() const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &) const;
        ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable &) const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(ExecutorService);
      extern PyTypeObject *PY_TYPE(ExecutorService);

      class t_ExecutorService {
      public:
        PyObject_HEAD
        ExecutorService object;
        static PyObject *wrap_Object(const ExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
