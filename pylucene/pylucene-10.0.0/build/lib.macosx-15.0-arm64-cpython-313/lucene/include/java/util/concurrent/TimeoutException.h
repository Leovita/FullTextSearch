#ifndef java_util_concurrent_TimeoutException_H
#define java_util_concurrent_TimeoutException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class TimeoutException : public ::java::lang::Exception {
       public:
        enum {
          mid_init$_3720c61b0679eb3e,
          mid_init$_0d82408c6e55bc30,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeoutException(jobject obj) : ::java::lang::Exception(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeoutException(const TimeoutException& obj) : ::java::lang::Exception(obj) {}

        TimeoutException();
        TimeoutException(const ::java::lang::String &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(TimeoutException);
      extern PyTypeObject *PY_TYPE(TimeoutException);

      class t_TimeoutException {
      public:
        PyObject_HEAD
        TimeoutException object;
        static PyObject *wrap_Object(const TimeoutException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
