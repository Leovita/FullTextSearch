#ifndef java_lang_Void_H
#define java_lang_Void_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Void;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Void : public ::java::lang::Object {
     public:

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Void(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Void(const Void& obj) : ::java::lang::Object(obj) {}

      static ::java::lang::Class *TYPE;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Void);
    extern PyTypeObject *PY_TYPE(Void);

    class t_Void {
    public:
      PyObject_HEAD
      Void object;
      static PyObject *wrap_Object(const Void&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
