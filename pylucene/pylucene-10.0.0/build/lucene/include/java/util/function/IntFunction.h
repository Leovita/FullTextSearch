#ifndef java_util_function_IntFunction_H
#define java_util_function_IntFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class IntFunction : public ::java::lang::Object {
       public:
        enum {
          mid_apply_2a2d7d7b9153274c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntFunction(const IntFunction& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object apply(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntFunction);
      extern PyTypeObject *PY_TYPE(IntFunction);

      class t_IntFunction {
      public:
        PyObject_HEAD
        IntFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_IntFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const IntFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const IntFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
