#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Object;
    class Float;
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

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_a03f734ddaeb69b4,
        mid_init$_675f4cb9a2529ee0,
        mid_byteValue_1456044a01a5c9bf,
        mid_compare_249020806c128f06,
        mid_compareTo_08914652463e681e,
        mid_describeConstable_9a972c66ccbfd657,
        mid_doubleValue_6fb37e123fed7a1f,
        mid_equals_00d17418847797d4,
        mid_float16ToFloat_3671622f8b147461,
        mid_floatToFloat16_597bbb88fa9d7b92,
        mid_floatToIntBits_96b611d51a3ba940,
        mid_floatToRawIntBits_96b611d51a3ba940,
        mid_floatValue_8b62236f0e4d0dbc,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_96b611d51a3ba940,
        mid_intBitsToFloat_5873a23b935a9d49,
        mid_intValue_bd89ce15dad49192,
        mid_isFinite_bf47f881a09da8d2,
        mid_isInfinite_9aa4f33e82ea333f,
        mid_isInfinite_bf47f881a09da8d2,
        mid_isNaN_9aa4f33e82ea333f,
        mid_isNaN_bf47f881a09da8d2,
        mid_longValue_0f176418e3e16541,
        mid_max_ab52dff7447e3c87,
        mid_min_ab52dff7447e3c87,
        mid_parseFloat_c9ceb0cdfa78b404,
        mid_shortValue_ae7a5bcb127748fd,
        mid_sum_ab52dff7447e3c87,
        mid_toHexString_8b9e33693229fd01,
        mid_toString_e7df854526d67fa3,
        mid_toString_8b9e33693229fd01,
        mid_valueOf_fb277d56eb0a3445,
        mid_valueOf_e650505b6f3d93d2,
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
