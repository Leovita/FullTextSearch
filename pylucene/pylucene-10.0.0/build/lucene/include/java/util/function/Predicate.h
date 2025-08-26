#ifndef java_util_function_Predicate_H
#define java_util_function_Predicate_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
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

      class Predicate : public ::java::lang::Object {
       public:
        enum {
          mid_and_77fc61a53594d752,
          mid_isEqual_69c1c91bd8d7265b,
          mid_negate_e9ff27faf5d76fa6,
          mid_not_77fc61a53594d752,
          mid_or_77fc61a53594d752,
          mid_test_00d17418847797d4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Predicate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Predicate(const Predicate& obj) : ::java::lang::Object(obj) {}

        Predicate and$(const Predicate &) const;
        static Predicate isEqual(const ::java::lang::Object &);
        Predicate negate() const;
        static Predicate not$(const Predicate &);
        Predicate or$(const Predicate &) const;
        jboolean test(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(Predicate);
      extern PyTypeObject *PY_TYPE(Predicate);

      class t_Predicate {
      public:
        PyObject_HEAD
        Predicate object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Predicate *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Predicate&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Predicate&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
