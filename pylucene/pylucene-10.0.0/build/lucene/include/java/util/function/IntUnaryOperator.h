#ifndef java_util_function_IntUnaryOperator_H
#define java_util_function_IntUnaryOperator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class IntUnaryOperator;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class IntUnaryOperator : public ::java::lang::Object {
       public:
        enum {
          mid_andThen_890acb6797db50e5,
          mid_applyAsInt_3c9bba330f083871,
          mid_compose_890acb6797db50e5,
          mid_identity_3700a9ae74ccc750,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntUnaryOperator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntUnaryOperator(const IntUnaryOperator& obj) : ::java::lang::Object(obj) {}

        IntUnaryOperator andThen(const IntUnaryOperator &) const;
        jint applyAsInt(jint) const;
        IntUnaryOperator compose(const IntUnaryOperator &) const;
        static IntUnaryOperator identity();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntUnaryOperator);
      extern PyTypeObject *PY_TYPE(IntUnaryOperator);

      class t_IntUnaryOperator {
      public:
        PyObject_HEAD
        IntUnaryOperator object;
        static PyObject *wrap_Object(const IntUnaryOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
