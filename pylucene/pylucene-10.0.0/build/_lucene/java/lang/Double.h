#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Object;
    class Class;
    class Double;
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

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_a03f734ddaeb69b4,
        mid_byteValue_1456044a01a5c9bf,
        mid_compare_3f44398ac407093e,
        mid_compareTo_b2ecc2776aafe435,
        mid_describeConstable_9a972c66ccbfd657,
        mid_doubleToLongBits_67f9dea4fed56fc8,
        mid_doubleToRawLongBits_67f9dea4fed56fc8,
        mid_doubleValue_6fb37e123fed7a1f,
        mid_equals_00d17418847797d4,
        mid_floatValue_8b62236f0e4d0dbc,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_3f0c00a187968ea1,
        mid_intValue_bd89ce15dad49192,
        mid_isFinite_38862de998abbf87,
        mid_isInfinite_9aa4f33e82ea333f,
        mid_isInfinite_38862de998abbf87,
        mid_isNaN_9aa4f33e82ea333f,
        mid_isNaN_38862de998abbf87,
        mid_longBitsToDouble_1f153cac77223155,
        mid_longValue_0f176418e3e16541,
        mid_max_9314817161e40a7e,
        mid_min_9314817161e40a7e,
        mid_parseDouble_168823f4bbdbe3fd,
        mid_shortValue_ae7a5bcb127748fd,
        mid_sum_9314817161e40a7e,
        mid_toHexString_cddd216549402f17,
        mid_toString_e7df854526d67fa3,
        mid_toString_cddd216549402f17,
        mid_valueOf_c1bd9f6d85aa3365,
        mid_valueOf_fc6e3afca5fb08bc,
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
