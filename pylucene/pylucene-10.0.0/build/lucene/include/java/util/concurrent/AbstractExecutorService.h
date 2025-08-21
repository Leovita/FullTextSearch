#ifndef java_util_concurrent_AbstractExecutorService_H
#define java_util_concurrent_AbstractExecutorService_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace concurrent {
      class ExecutionException;
      class ExecutorService;
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
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class AbstractExecutorService : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3720c61b0679eb3e,
          mid_invokeAll_93d4f44cee5de8eb,
          mid_invokeAll_dda83133fda1a808,
          mid_invokeAny_826559913eb50402,
          mid_invokeAny_088e5f4306bab0bb,
          mid_submit_c9ea5bd72484906f,
          mid_submit_26650fb8d35ea96b,
          mid_submit_2a23a8b5cd6f3414,
          mid_newTaskFor_f49b41824a1b1541,
          mid_newTaskFor_fce0422604201c6b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractExecutorService(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractExecutorService(const AbstractExecutorService& obj) : ::java::lang::Object(obj) {}

        AbstractExecutorService();

        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
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
      extern PyType_Def PY_TYPE_DEF(AbstractExecutorService);
      extern PyTypeObject *PY_TYPE(AbstractExecutorService);

      class t_AbstractExecutorService {
      public:
        PyObject_HEAD
        AbstractExecutorService object;
        static PyObject *wrap_Object(const AbstractExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
