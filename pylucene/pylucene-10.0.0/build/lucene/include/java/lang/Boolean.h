#ifndef java_lang_Boolean_H
#define java_lang_Boolean_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Boolean;
    class Class;
    class Comparable;
  }
  namespace util {
    class Optional;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Boolean : public ::java::lang::Object {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_f5dd97eebf6a215a,
        mid_booleanValue_9aa4f33e82ea333f,
        mid_compare_8e9b75d9404e2d90,
        mid_compareTo_ca4e4f1c0d685206,
        mid_equals_00d17418847797d4,
        mid_getBoolean_94f7e759d94961b0,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_34394399396c7e21,
        mid_logicalAnd_a2a97ad651c8c02f,
        mid_logicalOr_a2a97ad651c8c02f,
        mid_logicalXor_a2a97ad651c8c02f,
        mid_parseBoolean_94f7e759d94961b0,
        mid_toString_e7df854526d67fa3,
        mid_toString_e446331928d0b1c5,
        mid_valueOf_89085fe4f63f0599,
        mid_valueOf_0c647b67e9ae0738,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Boolean(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Boolean(const Boolean& obj) : ::java::lang::Object(obj) {}

      static Boolean *FALSE;
      static Boolean *TRUE;
      static ::java::lang::Class *TYPE;

      Boolean(const ::java::lang::String &);
      Boolean(jboolean);

      jboolean booleanValue() const;
      static jint compare(jboolean, jboolean);
      jint compareTo(const Boolean &) const;
      jboolean equals(const ::java::lang::Object &) const;
      static jboolean getBoolean(const ::java::lang::String &);
      jint hashCode() const;
      static jint hashCode(jboolean);
      static jboolean logicalAnd(jboolean, jboolean);
      static jboolean logicalOr(jboolean, jboolean);
      static jboolean logicalXor(jboolean, jboolean);
      static jboolean parseBoolean(const ::java::lang::String &);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jboolean);
      static Boolean valueOf(const ::java::lang::String &);
      static Boolean valueOf(jboolean);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Boolean);
    extern PyTypeObject *PY_TYPE(Boolean);

    class t_Boolean {
    public:
      PyObject_HEAD
      Boolean object;
      static PyObject *wrap_Object(const Boolean&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
