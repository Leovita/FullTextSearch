#ifndef java_util_function_DoubleBinaryOperator_H
#define java_util_function_DoubleBinaryOperator_H

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

      class DoubleBinaryOperator : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsDouble_9314817161e40a7e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DoubleBinaryOperator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DoubleBinaryOperator(const DoubleBinaryOperator& obj) : ::java::lang::Object(obj) {}

        jdouble applyAsDouble(jdouble, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(DoubleBinaryOperator);
      extern PyTypeObject *PY_TYPE(DoubleBinaryOperator);

      class t_DoubleBinaryOperator {
      public:
        PyObject_HEAD
        DoubleBinaryOperator object;
        static PyObject *wrap_Object(const DoubleBinaryOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
