#ifndef java_util_function_IntToLongFunction_H
#define java_util_function_IntToLongFunction_H

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

      class IntToLongFunction : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsLong_49af390f180d8ee7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntToLongFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntToLongFunction(const IntToLongFunction& obj) : ::java::lang::Object(obj) {}

        jlong applyAsLong(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntToLongFunction);
      extern PyTypeObject *PY_TYPE(IntToLongFunction);

      class t_IntToLongFunction {
      public:
        PyObject_HEAD
        IntToLongFunction object;
        static PyObject *wrap_Object(const IntToLongFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
