#ifndef java_util_concurrent_Future$State_H
#define java_util_concurrent_Future$State_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class Future$State;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Future$State : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_aff7a9935c081600,
          mid_values_12a737d6ea9acc48,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Future$State(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Future$State(const Future$State& obj) : ::java::lang::Enum(obj) {}

        static Future$State *CANCELLED;
        static Future$State *FAILED;
        static Future$State *RUNNING;
        static Future$State *SUCCESS;

        static Future$State valueOf(const ::java::lang::String &);
        static JArray< Future$State > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Future$State);
      extern PyTypeObject *PY_TYPE(Future$State);

      class t_Future$State {
      public:
        PyObject_HEAD
        Future$State object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Future$State *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Future$State&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Future$State&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
