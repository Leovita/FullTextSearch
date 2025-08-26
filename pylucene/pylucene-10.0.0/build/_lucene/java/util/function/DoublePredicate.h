#ifndef java_util_function_DoublePredicate_H
#define java_util_function_DoublePredicate_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class DoublePredicate;
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

      class DoublePredicate : public ::java::lang::Object {
       public:
        enum {
          mid_and_e5c94689d68b9721,
          mid_negate_80973ea7c9771707,
          mid_or_e5c94689d68b9721,
          mid_test_38862de998abbf87,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DoublePredicate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DoublePredicate(const DoublePredicate& obj) : ::java::lang::Object(obj) {}

        DoublePredicate and$(const DoublePredicate &) const;
        DoublePredicate negate() const;
        DoublePredicate or$(const DoublePredicate &) const;
        jboolean test(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(DoublePredicate);
      extern PyTypeObject *PY_TYPE(DoublePredicate);

      class t_DoublePredicate {
      public:
        PyObject_HEAD
        DoublePredicate object;
        static PyObject *wrap_Object(const DoublePredicate&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
