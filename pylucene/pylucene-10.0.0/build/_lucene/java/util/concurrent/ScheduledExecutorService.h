#ifndef java_util_concurrent_ScheduledExecutorService_H
#define java_util_concurrent_ScheduledExecutorService_H

#include "java/util/concurrent/ExecutorService.h"

namespace java {
  namespace lang {
    class Runnable;
    class Object;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class ScheduledFuture;
      class Callable;
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ScheduledExecutorService : public ::java::util::concurrent::ExecutorService {
       public:
        enum {
          mid_schedule_441fc9c931d49ead,
          mid_schedule_064d09a1087e92f7,
          mid_scheduleAtFixedRate_8113dafaa3924983,
          mid_scheduleWithFixedDelay_8113dafaa3924983,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ScheduledExecutorService(jobject obj) : ::java::util::concurrent::ExecutorService(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ScheduledExecutorService(const ScheduledExecutorService& obj) : ::java::util::concurrent::ExecutorService(obj) {}

        ::java::util::concurrent::ScheduledFuture schedule(const ::java::lang::Runnable &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::concurrent::ScheduledFuture schedule(const ::java::util::concurrent::Callable &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::concurrent::ScheduledFuture scheduleAtFixedRate(const ::java::lang::Runnable &, jlong, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::concurrent::ScheduledFuture scheduleWithFixedDelay(const ::java::lang::Runnable &, jlong, jlong, const ::java::util::concurrent::TimeUnit &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(ScheduledExecutorService);
      extern PyTypeObject *PY_TYPE(ScheduledExecutorService);

      class t_ScheduledExecutorService {
      public:
        PyObject_HEAD
        ScheduledExecutorService object;
        static PyObject *wrap_Object(const ScheduledExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
