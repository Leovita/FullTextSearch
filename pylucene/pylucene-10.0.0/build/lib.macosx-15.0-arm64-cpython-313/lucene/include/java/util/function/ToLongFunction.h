#ifndef java_util_function_ToLongFunction_H
#define java_util_function_ToLongFunction_H

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

      class ToLongFunction : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsLong_eed3c4edb9cd98e2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ToLongFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ToLongFunction(const ToLongFunction& obj) : ::java::lang::Object(obj) {}

        jlong applyAsLong(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(ToLongFunction);
      extern PyTypeObject *PY_TYPE(ToLongFunction);

      class t_ToLongFunction {
      public:
        PyObject_HEAD
        ToLongFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ToLongFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ToLongFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ToLongFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
