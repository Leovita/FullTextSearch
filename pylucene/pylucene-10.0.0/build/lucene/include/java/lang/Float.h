#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Float;
    class Class;
    class String;
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

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_b5bc1a2fb9ff9e90,
        mid_init$_c771a95b0227fb6a,
        mid_byteValue_847674f430f49e4c,
        mid_compare_d159f927f1b3eb03,
        mid_compareTo_0eb251c6652b7e0e,
        mid_describeConstable_d95173840d09a723,
        mid_doubleValue_32caabaad86c508b,
        mid_equals_570b5248a6da3ef6,
        mid_float16ToFloat_b676884bea1176d7,
        mid_floatToFloat16_6bdf05613323e5cd,
        mid_floatToIntBits_739cf609cad4f3fa,
        mid_floatToRawIntBits_739cf609cad4f3fa,
        mid_floatValue_9b6c3480dac00edf,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_739cf609cad4f3fa,
        mid_intBitsToFloat_29cfa01aaad92564,
        mid_intValue_20fbf7565993c3d7,
        mid_isFinite_ed8290af1db6b7df,
        mid_isInfinite_947277eca0748c4e,
        mid_isInfinite_ed8290af1db6b7df,
        mid_isNaN_947277eca0748c4e,
        mid_isNaN_ed8290af1db6b7df,
        mid_longValue_16939d9d0a9a9721,
        mid_max_b249dbf8c9984535,
        mid_min_b249dbf8c9984535,
        mid_parseFloat_90f35ea9447eb9e0,
        mid_shortValue_21ad82099ac5d56c,
        mid_sum_b249dbf8c9984535,
        mid_toHexString_e06c794ac7bb9991,
        mid_toString_09a7afff1868fc5e,
        mid_toString_e06c794ac7bb9991,
        mid_valueOf_bb994ceb5b5215f6,
        mid_valueOf_fd82fe5233244695,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Float(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Float(const Float& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jfloat MAX_VALUE;
      static jint MIN_EXPONENT;
      static jfloat MIN_NORMAL;
      static jfloat MIN_VALUE;
      static jfloat NEGATIVE_INFINITY;
      static jfloat NaN;
      static jfloat POSITIVE_INFINITY;
      static jint PRECISION;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Float(const ::java::lang::String &);
      Float(jdouble);
      Float(jfloat);

      jbyte byteValue() const;
      static jint compare(jfloat, jfloat);
      jint compareTo(const Float &) const;
      ::java::util::Optional describeConstable() const;
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jfloat float16ToFloat(jshort);
      static jshort floatToFloat16(jfloat);
      static jint floatToIntBits(jfloat);
      static jint floatToRawIntBits(jfloat);
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jfloat);
      static jfloat intBitsToFloat(jint);
      jint intValue() const;
      static jboolean isFinite(jfloat);
      jboolean isInfinite() const;
      static jboolean isInfinite(jfloat);
      jboolean isNaN() const;
      static jboolean isNaN(jfloat);
      jlong longValue() const;
      static jfloat max$(jfloat, jfloat);
      static jfloat min$(jfloat, jfloat);
      static jfloat parseFloat(const ::java::lang::String &);
      jshort shortValue() const;
      static jfloat sum(jfloat, jfloat);
      static ::java::lang::String toHexString(jfloat);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jfloat);
      static Float valueOf(const ::java::lang::String &);
      static Float valueOf(jfloat);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Float);
    extern PyTypeObject *PY_TYPE(Float);

    class t_Float {
    public:
      PyObject_HEAD
      Float object;
      static PyObject *wrap_Object(const Float&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
