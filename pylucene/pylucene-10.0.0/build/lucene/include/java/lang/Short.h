#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Short;
    class NumberFormatException;
    class Object;
    class Class;
    class String;
    class Comparable;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_19904c0bd37f0d7f,
        mid_byteValue_1456044a01a5c9bf,
        mid_compare_83efd00970ee3237,
        mid_compareTo_ff484cbfc836eaa9,
        mid_compareUnsigned_83efd00970ee3237,
        mid_decode_8b327c5fb2733493,
        mid_doubleValue_6fb37e123fed7a1f,
        mid_equals_00d17418847797d4,
        mid_floatValue_8b62236f0e4d0dbc,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_2220ba279dc28466,
        mid_intValue_bd89ce15dad49192,
        mid_longValue_0f176418e3e16541,
        mid_parseShort_8a56447c199387ef,
        mid_parseShort_4846d3e73550033c,
        mid_reverseBytes_ada1dbb0fa925c4f,
        mid_shortValue_ae7a5bcb127748fd,
        mid_toString_e7df854526d67fa3,
        mid_toString_0e171acd5da9ea7e,
        mid_toUnsignedInt_2220ba279dc28466,
        mid_toUnsignedLong_bca0b6753df14736,
        mid_valueOf_8b327c5fb2733493,
        mid_valueOf_0a3e08c1d6bd93d1,
        mid_valueOf_4d34f38be5d3f448,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Short(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Short(const Short& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jshort MAX_VALUE;
      static jshort MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Short(const ::java::lang::String &);
      Short(jshort);

      jbyte byteValue() const;
      static jint compare(jshort, jshort);
      jint compareTo(const Short &) const;
      static jint compareUnsigned(jshort, jshort);
      static Short decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jshort);
      jint intValue() const;
      jlong longValue() const;
      static jshort parseShort(const ::java::lang::String &);
      static jshort parseShort(const ::java::lang::String &, jint);
      static jshort reverseBytes(jshort);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jshort);
      static jint toUnsignedInt(jshort);
      static jlong toUnsignedLong(jshort);
      static Short valueOf(const ::java::lang::String &);
      static Short valueOf(jshort);
      static Short valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Short);
    extern PyTypeObject *PY_TYPE(Short);

    class t_Short {
    public:
      PyObject_HEAD
      Short object;
      static PyObject *wrap_Object(const Short&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
