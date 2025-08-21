#ifndef java_lang_Number_H
#define java_lang_Number_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Number : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_byteValue_847674f430f49e4c,
        mid_doubleValue_32caabaad86c508b,
        mid_floatValue_9b6c3480dac00edf,
        mid_intValue_20fbf7565993c3d7,
        mid_longValue_16939d9d0a9a9721,
        mid_shortValue_21ad82099ac5d56c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Number(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Number(const Number& obj) : ::java::lang::Object(obj) {}

      Number();

      jbyte byteValue() const;
      jdouble doubleValue() const;
      jfloat floatValue() const;
      jint intValue() const;
      jlong longValue() const;
      jshort shortValue() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Number);
    extern PyTypeObject *PY_TYPE(Number);

    class t_Number {
    public:
      PyObject_HEAD
      Number object;
      static PyObject *wrap_Object(const Number&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
