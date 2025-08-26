#ifndef java_util_function_ToDoubleFunction_H
#define java_util_function_ToDoubleFunction_H

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

      class ToDoubleFunction : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsDouble_6a8a269f1356bb63,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ToDoubleFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ToDoubleFunction(const ToDoubleFunction& obj) : ::java::lang::Object(obj) {}

        jdouble applyAsDouble(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(ToDoubleFunction);
      extern PyTypeObject *PY_TYPE(ToDoubleFunction);

      class t_ToDoubleFunction {
      public:
        PyObject_HEAD
        ToDoubleFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ToDoubleFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ToDoubleFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ToDoubleFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
