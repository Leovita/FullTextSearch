#ifndef java_util_function_BiFunction_H
#define java_util_function_BiFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Function;
      class BiFunction;
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

      class BiFunction : public ::java::lang::Object {
       public:
        enum {
          mid_andThen_5e35d2e2bdb50422,
          mid_apply_243089e4ee289db6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BiFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BiFunction(const BiFunction& obj) : ::java::lang::Object(obj) {}

        BiFunction andThen(const ::java::util::function::Function &) const;
        ::java::lang::Object apply(const ::java::lang::Object &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(BiFunction);
      extern PyTypeObject *PY_TYPE(BiFunction);

      class t_BiFunction {
      public:
        PyObject_HEAD
        BiFunction object;
        PyTypeObject *parameters[3];
        static PyTypeObject **parameters_(t_BiFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BiFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BiFunction&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
