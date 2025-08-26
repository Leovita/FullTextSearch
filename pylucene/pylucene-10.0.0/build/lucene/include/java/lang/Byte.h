#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Object;
    class Class;
    class String;
    class Comparable;
    class Byte;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Byte : public ::java::lang::Number {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_a5d0ad9e85e76a64,
        mid_byteValue_1456044a01a5c9bf,
        mid_compare_eaefbee714f0937b,
        mid_compareTo_fb6bce23dfc278d9,
        mid_compareUnsigned_eaefbee714f0937b,
        mid_decode_f1bfa1bbcb26835c,
        mid_doubleValue_6fb37e123fed7a1f,
        mid_equals_00d17418847797d4,
        mid_floatValue_8b62236f0e4d0dbc,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_a06f8b67893a843a,
        mid_intValue_bd89ce15dad49192,
        mid_longValue_0f176418e3e16541,
        mid_parseByte_3c48362581bf518f,
        mid_parseByte_3726946798915f17,
        mid_shortValue_ae7a5bcb127748fd,
        mid_toString_e7df854526d67fa3,
        mid_toString_e53e9f832ff4d9ce,
        mid_toUnsignedInt_a06f8b67893a843a,
        mid_toUnsignedLong_42ec6c2f1cf9f243,
        mid_valueOf_f1bfa1bbcb26835c,
        mid_valueOf_c9fdd1bad87452fb,
        mid_valueOf_b3f72ab0fc585608,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Byte(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Byte(const Byte& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jbyte MAX_VALUE;
      static jbyte MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Byte(const ::java::lang::String &);
      Byte(jbyte);

      jbyte byteValue() const;
      static jint compare(jbyte, jbyte);
      jint compareTo(const Byte &) const;
      static jint compareUnsigned(jbyte, jbyte);
      static Byte decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jbyte);
      jint intValue() const;
      jlong longValue() const;
      static jbyte parseByte(const ::java::lang::String &);
      static jbyte parseByte(const ::java::lang::String &, jint);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jbyte);
      static jint toUnsignedInt(jbyte);
      static jlong toUnsignedLong(jbyte);
      static Byte valueOf(const ::java::lang::String &);
      static Byte valueOf(jbyte);
      static Byte valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Byte);
    extern PyTypeObject *PY_TYPE(Byte);

    class t_Byte {
    public:
      PyObject_HEAD
      Byte object;
      static PyObject *wrap_Object(const Byte&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
