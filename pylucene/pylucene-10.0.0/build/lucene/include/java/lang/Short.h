#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Short;
    class Class;
    class String;
    class Object;
    namespace constant {
      class DynamicConstantDesc;
    }
    class NumberFormatException;
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
        mid_init$_0d82408c6e55bc30,
        mid_init$_13ddeb599c553531,
        mid_byteValue_847674f430f49e4c,
        mid_compare_c1c9c6cb484aa7e5,
        mid_compareTo_d2966e38cfdf2e34,
        mid_compareUnsigned_c1c9c6cb484aa7e5,
        mid_decode_eee2b2fedfbe22a5,
        mid_describeConstable_d95173840d09a723,
        mid_doubleValue_32caabaad86c508b,
        mid_equals_570b5248a6da3ef6,
        mid_floatValue_9b6c3480dac00edf,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_5b696a917598fdf2,
        mid_intValue_20fbf7565993c3d7,
        mid_longValue_16939d9d0a9a9721,
        mid_parseShort_1d0271f6d1254c2b,
        mid_parseShort_b19e670cf8ffb1f4,
        mid_reverseBytes_822b9dafbb44b130,
        mid_shortValue_21ad82099ac5d56c,
        mid_toString_09a7afff1868fc5e,
        mid_toString_c8a51730b11810b6,
        mid_toUnsignedInt_5b696a917598fdf2,
        mid_toUnsignedLong_d90ea18fc211d222,
        mid_valueOf_eee2b2fedfbe22a5,
        mid_valueOf_4f210688d50ec548,
        mid_valueOf_8397c71106e6b0dd,
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
      ::java::util::Optional describeConstable() const;
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
