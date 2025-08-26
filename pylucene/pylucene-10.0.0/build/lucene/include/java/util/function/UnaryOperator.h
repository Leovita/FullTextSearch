#ifndef java_util_function_UnaryOperator_H
#define java_util_function_UnaryOperator_H

#include "java/util/function/Function.h"

namespace java {
  namespace util {
    namespace function {
      class UnaryOperator;
    }
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class UnaryOperator : public ::java::util::function::Function {
       public:
        enum {
          mid_identity_7f696c6ce7dc2f5a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnaryOperator(jobject obj) : ::java::util::function::Function(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnaryOperator(const UnaryOperator& obj) : ::java::util::function::Function(obj) {}

        static UnaryOperator identity();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(UnaryOperator);
      extern PyTypeObject *PY_TYPE(UnaryOperator);

      class t_UnaryOperator {
      public:
        PyObject_HEAD
        UnaryOperator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_UnaryOperator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const UnaryOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const UnaryOperator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
