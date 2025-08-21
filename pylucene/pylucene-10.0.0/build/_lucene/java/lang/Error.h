#ifndef java_lang_Error_H
#define java_lang_Error_H

#include "java/lang/Throwable.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Error : public ::java::lang::Throwable {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_4b71a6d99b73f7d1,
        mid_init$_ea9871c48698171a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Error(jobject obj) : ::java::lang::Throwable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Error(const Error& obj) : ::java::lang::Throwable(obj) {}

      Error();
      Error(const ::java::lang::String &);
      Error(const ::java::lang::Throwable &);
      Error(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Error);
    extern PyTypeObject *PY_TYPE(Error);

    class t_Error {
    public:
      PyObject_HEAD
      Error object;
      static PyObject *wrap_Object(const Error&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
