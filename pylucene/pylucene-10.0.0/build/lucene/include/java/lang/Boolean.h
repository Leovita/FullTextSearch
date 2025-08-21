#ifndef java_lang_Boolean_H
#define java_lang_Boolean_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Boolean;
    class String;
    class Class;
    namespace constant {
      class DynamicConstantDesc;
    }
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Boolean : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_b110fc3a58c081ab,
        mid_booleanValue_947277eca0748c4e,
        mid_compare_5c219f5c80ae3eeb,
        mid_compareTo_f952748139b47208,
        mid_describeConstable_d95173840d09a723,
        mid_equals_570b5248a6da3ef6,
        mid_getBoolean_4a13a663b5c11133,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_42933a2c511fc642,
        mid_logicalAnd_8d00a228c911b713,
        mid_logicalOr_8d00a228c911b713,
        mid_logicalXor_8d00a228c911b713,
        mid_parseBoolean_4a13a663b5c11133,
        mid_toString_09a7afff1868fc5e,
        mid_toString_648fb915d73c5399,
        mid_valueOf_d02358e115a99e63,
        mid_valueOf_e662d6014a6ae232,
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
      ::java::util::Optional describeConstable() const;
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
