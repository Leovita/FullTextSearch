#ifndef java_util_function_BiConsumer_H
#define java_util_function_BiConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class BiConsumer;
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

      class BiConsumer : public ::java::lang::Object {
       public:
        enum {
          mid_accept_56b5f443efa9c7d8,
          mid_andThen_9df8c5ac07e21f69,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BiConsumer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BiConsumer(const BiConsumer& obj) : ::java::lang::Object(obj) {}

        void accept(const ::java::lang::Object &, const ::java::lang::Object &) const;
        BiConsumer andThen(const BiConsumer &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(BiConsumer);
      extern PyTypeObject *PY_TYPE(BiConsumer);

      class t_BiConsumer {
      public:
        PyObject_HEAD
        BiConsumer object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_BiConsumer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BiConsumer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BiConsumer&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
