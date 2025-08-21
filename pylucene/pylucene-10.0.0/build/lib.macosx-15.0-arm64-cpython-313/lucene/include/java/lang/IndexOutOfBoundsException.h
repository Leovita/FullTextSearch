#ifndef java_lang_IndexOutOfBoundsException_H
#define java_lang_IndexOutOfBoundsException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class IndexOutOfBoundsException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_540b2b23d51b1efd,
        mid_init$_8b3d46852b435a94,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IndexOutOfBoundsException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IndexOutOfBoundsException(const IndexOutOfBoundsException& obj) : ::java::lang::RuntimeException(obj) {}

      IndexOutOfBoundsException();
      IndexOutOfBoundsException(const ::java::lang::String &);
      IndexOutOfBoundsException(jint);
      IndexOutOfBoundsException(jlong);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(IndexOutOfBoundsException);
    extern PyTypeObject *PY_TYPE(IndexOutOfBoundsException);

    class t_IndexOutOfBoundsException {
    public:
      PyObject_HEAD
      IndexOutOfBoundsException object;
      static PyObject *wrap_Object(const IndexOutOfBoundsException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
