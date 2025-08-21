#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Double;
    class Object;
    class NumberFormatException;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_b5bc1a2fb9ff9e90,
        mid_byteValue_847674f430f49e4c,
        mid_compare_a9d909ca5afca54b,
        mid_compareTo_39b3bb0008e9b89b,
        mid_describeConstable_d95173840d09a723,
        mid_doubleToLongBits_f3afe967d000867c,
        mid_doubleToRawLongBits_f3afe967d000867c,
        mid_doubleValue_32caabaad86c508b,
        mid_equals_570b5248a6da3ef6,
        mid_floatValue_9b6c3480dac00edf,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_03c0863338a48004,
        mid_intValue_20fbf7565993c3d7,
        mid_isFinite_9c3aeb3f8504878d,
        mid_isInfinite_947277eca0748c4e,
        mid_isInfinite_9c3aeb3f8504878d,
        mid_isNaN_947277eca0748c4e,
        mid_isNaN_9c3aeb3f8504878d,
        mid_longBitsToDouble_212c665780cd8e77,
        mid_longValue_16939d9d0a9a9721,
        mid_max_351e9c3c9f2fa814,
        mid_min_351e9c3c9f2fa814,
        mid_parseDouble_571a8151e18df9b7,
        mid_shortValue_21ad82099ac5d56c,
        mid_sum_351e9c3c9f2fa814,
        mid_toHexString_4822cf3d793bd8b0,
        mid_toString_09a7afff1868fc5e,
        mid_toString_4822cf3d793bd8b0,
        mid_valueOf_2cd2bbb26a76ce60,
        mid_valueOf_88d5fa9d15b62a0e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Double(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Double(const Double& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jdouble MAX_VALUE;
      static jint MIN_EXPONENT;
      static jdouble MIN_NORMAL;
      static jdouble MIN_VALUE;
      static jdouble NEGATIVE_INFINITY;
      static jdouble NaN;
      static jdouble POSITIVE_INFINITY;
      static jint PRECISION;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Double(const ::java::lang::String &);
      Double(jdouble);

      jbyte byteValue() const;
      static jint compare(jdouble, jdouble);
      jint compareTo(const Double &) const;
      ::java::util::Optional describeConstable() const;
      static jlong doubleToLongBits(jdouble);
      static jlong doubleToRawLongBits(jdouble);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jdouble);
      jint intValue() const;
      static jboolean isFinite(jdouble);
      jboolean isInfinite() const;
      static jboolean isInfinite(jdouble);
      jboolean isNaN() const;
      static jboolean isNaN(jdouble);
      static jdouble longBitsToDouble(jlong);
      jlong longValue() const;
      static jdouble max$(jdouble, jdouble);
      static jdouble min$(jdouble, jdouble);
      static jdouble parseDouble(const ::java::lang::String &);
      jshort shortValue() const;
      static jdouble sum(jdouble, jdouble);
      static ::java::lang::String toHexString(jdouble);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jdouble);
      static Double valueOf(const ::java::lang::String &);
      static Double valueOf(jdouble);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Double);
    extern PyTypeObject *PY_TYPE(Double);

    class t_Double {
    public:
      PyObject_HEAD
      Double object;
      static PyObject *wrap_Object(const Double&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
