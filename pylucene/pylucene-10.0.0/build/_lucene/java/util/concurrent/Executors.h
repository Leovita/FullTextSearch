#ifndef java_util_concurrent_Executors_H
#define java_util_concurrent_Executors_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace concurrent {
      class ThreadFactory;
      class ScheduledExecutorService;
      class ExecutorService;
      class Callable;
    }
  }
  namespace lang {
    class Runnable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Executors : public ::java::lang::Object {
       public:
        enum {
          mid_callable_e6a94bbe0074f428,
          mid_callable_6ddf67f78b35c9eb,
          mid_defaultThreadFactory_5a599cf6c7f00f1e,
          mid_newCachedThreadPool_2f27d22d9c4c8538,
          mid_newCachedThreadPool_7c207395706e3715,
          mid_newFixedThreadPool_ef576ea3debd6792,
          mid_newFixedThreadPool_a22d3f32126e25eb,
          mid_newScheduledThreadPool_140aa94794707a55,
          mid_newScheduledThreadPool_c583760abca3645f,
          mid_newSingleThreadExecutor_2f27d22d9c4c8538,
          mid_newSingleThreadExecutor_7c207395706e3715,
          mid_newSingleThreadScheduledExecutor_fe64a3e3ae93064d,
          mid_newSingleThreadScheduledExecutor_47f02dff1b4ceed7,
          mid_newThreadPerTaskExecutor_7c207395706e3715,
          mid_newVirtualThreadPerTaskExecutor_2f27d22d9c4c8538,
          mid_newWorkStealingPool_2f27d22d9c4c8538,
          mid_newWorkStealingPool_ef576ea3debd6792,
          mid_privilegedCallable_f83c08a3fc95808e,
          mid_privilegedCallableUsingCurrentClassLoader_f83c08a3fc95808e,
          mid_privilegedThreadFactory_5a599cf6c7f00f1e,
          mid_unconfigurableExecutorService_cee2900a0324a64e,
          mid_unconfigurableScheduledExecutorService_7cd46880e0ac381a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Executors(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Executors(const Executors& obj) : ::java::lang::Object(obj) {}

        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &);
        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &, const ::java::lang::Object &);
        static ::java::util::concurrent::ThreadFactory defaultThreadFactory();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor();
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor();
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newThreadPerTaskExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newVirtualThreadPerTaskExecutor();
        static ::java::util::concurrent::ExecutorService newWorkStealingPool();
        static ::java::util::concurrent::ExecutorService newWorkStealingPool(jint);
        static ::java::util::concurrent::Callable privilegedCallable(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::Callable privilegedCallableUsingCurrentClassLoader(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::ThreadFactory privilegedThreadFactory();
        static ::java::util::concurrent::ExecutorService unconfigurableExecutorService(const ::java::util::concurrent::ExecutorService &);
        static ::java::util::concurrent::ScheduledExecutorService unconfigurableScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Executors);
      extern PyTypeObject *PY_TYPE(Executors);

      class t_Executors {
      public:
        PyObject_HEAD
        Executors object;
        static PyObject *wrap_Object(const Executors&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
