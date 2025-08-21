#ifndef java_util_function_LongBinaryOperator_H
#define java_util_function_LongBinaryOperator_H

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

      class LongBinaryOperator : public ::java::lang::Object {
       public:
        enum {
          mid_applyAsLong_bcea5161e8951fae,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LongBinaryOperator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LongBinaryOperator(const LongBinaryOperator& obj) : ::java::lang::Object(obj) {}

        jlong applyAsLong(jlong, jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(LongBinaryOperator);
      extern PyTypeObject *PY_TYPE(LongBinaryOperator);

      class t_LongBinaryOperator {
      public:
        PyObject_HEAD
        LongBinaryOperator object;
        static PyObject *wrap_Object(const LongBinaryOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
