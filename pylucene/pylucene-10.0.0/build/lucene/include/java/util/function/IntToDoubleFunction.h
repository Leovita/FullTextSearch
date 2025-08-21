#ifndef java_util_function_IntToDoubleFunction_H
#define java_util_function_IntToDoubleFunction_H

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

      class IntToDoubleFunction : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsDouble_788f636887bfcb79,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntToDoubleFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntToDoubleFunction(const IntToDoubleFunction& obj) : ::java::lang::Object(obj) {}

        jdouble applyAsDouble(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntToDoubleFunction);
      extern PyTypeObject *PY_TYPE(IntToDoubleFunction);

      class t_IntToDoubleFunction {
      public:
        PyObject_HEAD
        IntToDoubleFunction object;
        static PyObject *wrap_Object(const IntToDoubleFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
