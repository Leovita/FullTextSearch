#ifndef java_util_NoSuchElementException_H
#define java_util_NoSuchElementException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NoSuchElementException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_init$_9b649326a1df01c3,
        mid_init$_95082f1abe6d9712,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NoSuchElementException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NoSuchElementException(const NoSuchElementException& obj) : ::java::lang::RuntimeException(obj) {}

      NoSuchElementException();
      NoSuchElementException(const ::java::lang::String &);
      NoSuchElementException(const ::java::lang::Throwable &);
      NoSuchElementException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NoSuchElementException);
    extern PyTypeObject *PY_TYPE(NoSuchElementException);

    class t_NoSuchElementException {
    public:
      PyObject_HEAD
      NoSuchElementException object;
      static PyObject *wrap_Object(const NoSuchElementException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
