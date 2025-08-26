#ifndef java_util_function_BinaryOperator_H
#define java_util_function_BinaryOperator_H

#include "java/util/function/BiFunction.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    namespace function {
      class BinaryOperator;
    }
    class Comparator;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class BinaryOperator : public ::java::util::function::BiFunction {
       public:
        enum {
          mid_maxBy_91559caaeee3fc0c,
          mid_minBy_91559caaeee3fc0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BinaryOperator(jobject obj) : ::java::util::function::BiFunction(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BinaryOperator(const BinaryOperator& obj) : ::java::util::function::BiFunction(obj) {}

        static BinaryOperator maxBy(const ::java::util::Comparator &);
        static BinaryOperator minBy(const ::java::util::Comparator &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(BinaryOperator);
      extern PyTypeObject *PY_TYPE(BinaryOperator);

      class t_BinaryOperator {
      public:
        PyObject_HEAD
        BinaryOperator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_BinaryOperator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BinaryOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BinaryOperator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
