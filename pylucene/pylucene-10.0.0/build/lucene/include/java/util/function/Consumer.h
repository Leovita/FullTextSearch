#ifndef java_util_function_Consumer_H
#define java_util_function_Consumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Consumer;
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

      class Consumer : public ::java::lang::Object {
       public:
        enum {
          mid_accept_501c3eb890ff6d79,
          mid_andThen_b382f48e9f30387d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Consumer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Consumer(const Consumer& obj) : ::java::lang::Object(obj) {}

        void accept(const ::java::lang::Object &) const;
        Consumer andThen(const Consumer &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(Consumer);
      extern PyTypeObject *PY_TYPE(Consumer);

      class t_Consumer {
      public:
        PyObject_HEAD
        Consumer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Consumer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Consumer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Consumer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
