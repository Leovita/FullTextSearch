#ifndef java_lang_NoSuchFieldException_H
#define java_lang_NoSuchFieldException_H

#include "java/lang/ReflectiveOperationException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class NoSuchFieldException : public ::java::lang::ReflectiveOperationException {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NoSuchFieldException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NoSuchFieldException(const NoSuchFieldException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      NoSuchFieldException();
      NoSuchFieldException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(NoSuchFieldException);
    extern PyTypeObject *PY_TYPE(NoSuchFieldException);

    class t_NoSuchFieldException {
    public:
      PyObject_HEAD
      NoSuchFieldException object;
      static PyObject *wrap_Object(const NoSuchFieldException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
