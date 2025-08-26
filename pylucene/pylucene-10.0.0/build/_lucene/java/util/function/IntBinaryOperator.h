#ifndef java_util_function_IntBinaryOperator_H
#define java_util_function_IntBinaryOperator_H

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

      class IntBinaryOperator : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsInt_7f27cf81a85a97e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntBinaryOperator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntBinaryOperator(const IntBinaryOperator& obj) : ::java::lang::Object(obj) {}

        jint applyAsInt(jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntBinaryOperator);
      extern PyTypeObject *PY_TYPE(IntBinaryOperator);

      class t_IntBinaryOperator {
      public:
        PyObject_HEAD
        IntBinaryOperator object;
        static PyObject *wrap_Object(const IntBinaryOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
