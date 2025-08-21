#ifndef java_util_function_BiPredicate_H
#define java_util_function_BiPredicate_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class BiPredicate;
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

      class BiPredicate : public ::java::lang::Object {
       public:
        enum {
          mid_and_6b95e6f4de1d7779,
          mid_negate_b23c6d5e50c9300a,
          mid_or_6b95e6f4de1d7779,
          mid_test_6810d3c479f60a43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BiPredicate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BiPredicate(const BiPredicate& obj) : ::java::lang::Object(obj) {}

        BiPredicate and$(const BiPredicate &) const;
        BiPredicate negate() const;
        BiPredicate or$(const BiPredicate &) const;
        jboolean test(const ::java::lang::Object &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(BiPredicate);
      extern PyTypeObject *PY_TYPE(BiPredicate);

      class t_BiPredicate {
      public:
        PyObject_HEAD
        BiPredicate object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_BiPredicate *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BiPredicate&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BiPredicate&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
