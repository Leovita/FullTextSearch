#ifndef java_util_function_BooleanSupplier_H
#define java_util_function_BooleanSupplier_H

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

      class BooleanSupplier : public ::java::lang::Object {
       public:
        enum {
          mid_getAsBoolean_9aa4f33e82ea333f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BooleanSupplier(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BooleanSupplier(const BooleanSupplier& obj) : ::java::lang::Object(obj) {}

        jboolean getAsBoolean() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(BooleanSupplier);
      extern PyTypeObject *PY_TYPE(BooleanSupplier);

      class t_BooleanSupplier {
      public:
        PyObject_HEAD
        BooleanSupplier object;
        static PyObject *wrap_Object(const BooleanSupplier&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
