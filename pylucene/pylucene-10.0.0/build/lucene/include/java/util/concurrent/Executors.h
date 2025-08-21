#ifndef java_util_concurrent_Executors_H
#define java_util_concurrent_Executors_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Runnable;
  }
  namespace util {
    namespace concurrent {
      class ScheduledExecutorService;
      class ExecutorService;
      class ThreadFactory;
      class Callable;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Executors : public ::java::lang::Object {
       public:
        enum {
          mid_callable_65b38de82e8bfc12,
          mid_callable_510a1f98ca28742f,
          mid_defaultThreadFactory_e2e07c8857a89752,
          mid_newCachedThreadPool_c4bef0fbb7bfa425,
          mid_newCachedThreadPool_6fe08c5f09286bf9,
          mid_newFixedThreadPool_55ea6f1f709d36c4,
          mid_newFixedThreadPool_2befc4e515c0eec9,
          mid_newScheduledThreadPool_b20e3a51527965e2,
          mid_newScheduledThreadPool_81aca88b1df67eb4,
          mid_newSingleThreadExecutor_c4bef0fbb7bfa425,
          mid_newSingleThreadExecutor_6fe08c5f09286bf9,
          mid_newSingleThreadScheduledExecutor_d1c9a0ccba899a6f,
          mid_newSingleThreadScheduledExecutor_e9fe55e924c86b2b,
          mid_newThreadPerTaskExecutor_6fe08c5f09286bf9,
          mid_newVirtualThreadPerTaskExecutor_c4bef0fbb7bfa425,
          mid_newWorkStealingPool_c4bef0fbb7bfa425,
          mid_newWorkStealingPool_55ea6f1f709d36c4,
          mid_privilegedCallable_0b73a589723790b7,
          mid_privilegedCallableUsingCurrentClassLoader_0b73a589723790b7,
          mid_privilegedThreadFactory_e2e07c8857a89752,
          mid_unconfigurableExecutorService_29e077f830498b12,
          mid_unconfigurableScheduledExecutorService_96910f531edccc88,
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
