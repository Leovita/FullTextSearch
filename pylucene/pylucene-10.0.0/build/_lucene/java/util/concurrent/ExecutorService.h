#ifndef java_util_concurrent_ExecutorService_H
#define java_util_concurrent_ExecutorService_H

#include "java/util/concurrent/Executor.h"

namespace java {
  namespace util {
    namespace concurrent {
      class ExecutionException;
      class TimeUnit;
      class TimeoutException;
      class Callable;
      class Future;
    }
    class Collection;
    class List;
  }
  namespace lang {
    class Class;
    class Runnable;
    class InterruptedException;
    class Object;
    class AutoCloseable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ExecutorService : public ::java::util::concurrent::Executor {
       public:
        enum {
          mid_awaitTermination_e992b4908961e96e,
          mid_close_3720c61b0679eb3e,
          mid_invokeAll_93d4f44cee5de8eb,
          mid_invokeAll_dda83133fda1a808,
          mid_invokeAny_826559913eb50402,
          mid_invokeAny_088e5f4306bab0bb,
          mid_isShutdown_947277eca0748c4e,
          mid_isTerminated_947277eca0748c4e,
          mid_shutdown_3720c61b0679eb3e,
          mid_shutdownNow_36830460e10839eb,
          mid_submit_c9ea5bd72484906f,
          mid_submit_26650fb8d35ea96b,
          mid_submit_2a23a8b5cd6f3414,
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
