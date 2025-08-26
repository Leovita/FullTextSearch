#ifndef java_util_concurrent_Future_H
#define java_util_concurrent_Future_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
    class Throwable;
  }
  namespace util {
    namespace concurrent {
      class Future$State;
      class TimeoutException;
      class ExecutionException;
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Future : public ::java::lang::Object {
       public:
        enum {
          mid_cancel_7c42d16ca5eaa145,
          mid_exceptionNow_76f90963e923fefa,
          mid_get_4819806f62f1360a,
          mid_get_ad1b8b5e28a7cd43,
          mid_isCancelled_9aa4f33e82ea333f,
          mid_isDone_9aa4f33e82ea333f,
          mid_resultNow_4819806f62f1360a,
          mid_state_033a0f97d9c62181,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Future(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Future(const Future& obj) : ::java::lang::Object(obj) {}

        jboolean cancel(jboolean) const;
        ::java::lang::Throwable exceptionNow() const;
        ::java::lang::Object get() const;
        ::java::lang::Object get(jlong, const ::java::util::concurrent::TimeUnit &) const;
        jboolean isCancelled() const;
        jboolean isDone() const;
        ::java::lang::Object resultNow() const;
        ::java::util::concurrent::Future$State state() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Future);
      extern PyTypeObject *PY_TYPE(Future);

      class t_Future {
      public:
        PyObject_HEAD
        Future object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Future *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Future&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Future&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
