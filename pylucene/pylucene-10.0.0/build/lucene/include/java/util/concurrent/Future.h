#ifndef java_util_concurrent_Future_H
#define java_util_concurrent_Future_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace concurrent {
      class ExecutionException;
      class TimeUnit;
      class TimeoutException;
      class Future$State;
    }
  }
  namespace lang {
    class Class;
    class InterruptedException;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Future : public ::java::lang::Object {
       public:
        enum {
          mid_cancel_6a2c1000a9889653,
          mid_exceptionNow_d175b950df78251e,
          mid_get_5655ed8670534604,
          mid_get_261f2550fa3ae634,
          mid_isCancelled_947277eca0748c4e,
          mid_isDone_947277eca0748c4e,
          mid_resultNow_5655ed8670534604,
          mid_state_3d0516f37f4dccff,
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
