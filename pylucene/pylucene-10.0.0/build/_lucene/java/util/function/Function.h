#ifndef java_util_function_Function_H
#define java_util_function_Function_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Function;
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

      class Function : public ::java::lang::Object {
       public:
        enum {
          mid_andThen_56c87770707defd2,
          mid_apply_5fd81664d2d475e1,
          mid_compose_56c87770707defd2,
          mid_identity_7df97dd5f147bf9f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Function(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Function(const Function& obj) : ::java::lang::Object(obj) {}

        Function andThen(const Function &) const;
        ::java::lang::Object apply(const ::java::lang::Object &) const;
        Function compose(const Function &) const;
        static Function identity();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(Function);
      extern PyTypeObject *PY_TYPE(Function);

      class t_Function {
      public:
        PyObject_HEAD
        Function object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_Function *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Function&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Function&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
