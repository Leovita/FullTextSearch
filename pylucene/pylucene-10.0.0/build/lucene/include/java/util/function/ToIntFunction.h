#ifndef java_util_function_ToIntFunction_H
#define java_util_function_ToIntFunction_H

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

      class ToIntFunction : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsInt_3b738b91667a06c2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ToIntFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ToIntFunction(const ToIntFunction& obj) : ::java::lang::Object(obj) {}

        jint applyAsInt(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(ToIntFunction);
      extern PyTypeObject *PY_TYPE(ToIntFunction);

      class t_ToIntFunction {
      public:
        PyObject_HEAD
        ToIntFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ToIntFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ToIntFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ToIntFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
