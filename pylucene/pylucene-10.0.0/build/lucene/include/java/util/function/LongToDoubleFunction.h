#ifndef java_util_function_LongToDoubleFunction_H
#define java_util_function_LongToDoubleFunction_H

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

      class LongToDoubleFunction : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsDouble_212c665780cd8e77,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LongToDoubleFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LongToDoubleFunction(const LongToDoubleFunction& obj) : ::java::lang::Object(obj) {}

        jdouble applyAsDouble(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(LongToDoubleFunction);
      extern PyTypeObject *PY_TYPE(LongToDoubleFunction);

      class t_LongToDoubleFunction {
      public:
        PyObject_HEAD
        LongToDoubleFunction object;
        static PyObject *wrap_Object(const LongToDoubleFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
