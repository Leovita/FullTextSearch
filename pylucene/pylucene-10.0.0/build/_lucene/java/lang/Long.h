#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Object;
    class Class;
    class CharSequence;
    class Long;
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

    class Long : public ::java::lang::Number {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_1d3149fac12f2af3,
        mid_bitCount_7af44747c1921bd4,
        mid_byteValue_1456044a01a5c9bf,
        mid_compare_698e639027d9e1e9,
        mid_compareTo_f0f02e3aab2dfec8,
        mid_compareUnsigned_698e639027d9e1e9,
        mid_compress_5804bd1c01b59205,
        mid_decode_292b67fe102fe444,
        mid_describeConstable_9a972c66ccbfd657,
        mid_divideUnsigned_5804bd1c01b59205,
        mid_doubleValue_6fb37e123fed7a1f,
        mid_equals_00d17418847797d4,
        mid_expand_5804bd1c01b59205,
        mid_floatValue_8b62236f0e4d0dbc,
        mid_getLong_292b67fe102fe444,
        mid_getLong_37da2bb99b26808d,
        mid_getLong_33fde3a5fae69ef4,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_7af44747c1921bd4,
        mid_highestOneBit_3dc1c6e3a5a0baf0,
        mid_intValue_bd89ce15dad49192,
        mid_longValue_0f176418e3e16541,
        mid_lowestOneBit_3dc1c6e3a5a0baf0,
        mid_max_5804bd1c01b59205,
        mid_min_5804bd1c01b59205,
        mid_numberOfLeadingZeros_7af44747c1921bd4,
        mid_numberOfTrailingZeros_7af44747c1921bd4,
        mid_parseLong_490f1686ea1cfda6,
        mid_parseLong_5fbf3d3169ad44a7,
        mid_parseLong_50d5cacc47ec7aa0,
        mid_parseUnsignedLong_490f1686ea1cfda6,
        mid_parseUnsignedLong_5fbf3d3169ad44a7,
        mid_parseUnsignedLong_50d5cacc47ec7aa0,
        mid_remainderUnsigned_5804bd1c01b59205,
        mid_reverse_3dc1c6e3a5a0baf0,
        mid_reverseBytes_3dc1c6e3a5a0baf0,
        mid_rotateLeft_02cc005e28960326,
        mid_rotateRight_02cc005e28960326,
        mid_shortValue_ae7a5bcb127748fd,
        mid_signum_7af44747c1921bd4,
        mid_sum_5804bd1c01b59205,
        mid_toBinaryString_229c7997533c8554,
        mid_toHexString_229c7997533c8554,
        mid_toOctalString_229c7997533c8554,
        mid_toString_e7df854526d67fa3,
        mid_toString_229c7997533c8554,
        mid_toString_609915521c823f7e,
        mid_toUnsignedString_229c7997533c8554,
        mid_toUnsignedString_609915521c823f7e,
        mid_valueOf_292b67fe102fe444,
        mid_valueOf_4edfa53b3afa7fb6,
        mid_valueOf_665118010cb1c560,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Long(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Long(const Long& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jlong MAX_VALUE;
      static jlong MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Long(const ::java::lang::String &);
      Long(jlong);

      static jint bitCount(jlong);
      jbyte byteValue() const;
      static jint compare(jlong, jlong);
      jint compareTo(const Long &) const;
      static jint compareUnsigned(jlong, jlong);
      static jlong compress(jlong, jlong);
      static Long decode(const ::java::lang::String &);
      ::java::util::Optional describeConstable() const;
      static jlong divideUnsigned(jlong, jlong);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jlong expand(jlong, jlong);
      jfloat floatValue() const;
      static Long getLong(const ::java::lang::String &);
      static Long getLong(const ::java::lang::String &, const Long &);
      static Long getLong(const ::java::lang::String &, jlong);
      jint hashCode() const;
      static jint hashCode(jlong);
      static jlong highestOneBit(jlong);
      jint intValue() const;
      jlong longValue() const;
      static jlong lowestOneBit(jlong);
      static jlong max$(jlong, jlong);
      static jlong min$(jlong, jlong);
      static jint numberOfLeadingZeros(jlong);
      static jint numberOfTrailingZeros(jlong);
      static jlong parseLong(const ::java::lang::String &);
      static jlong parseLong(const ::java::lang::String &, jint);
      static jlong parseLong(const ::java::lang::CharSequence &, jint, jint, jint);
      static jlong parseUnsignedLong(const ::java::lang::String &);
      static jlong parseUnsignedLong(const ::java::lang::String &, jint);
      static jlong parseUnsignedLong(const ::java::lang::CharSequence &, jint, jint, jint);
      static jlong remainderUnsigned(jlong, jlong);
      static jlong reverse(jlong);
      static jlong reverseBytes(jlong);
      static jlong rotateLeft(jlong, jint);
      static jlong rotateRight(jlong, jint);
      jshort shortValue() const;
      static jint signum(jlong);
      static jlong sum(jlong, jlong);
      static ::java::lang::String toBinaryString(jlong);
      static ::java::lang::String toHexString(jlong);
      static ::java::lang::String toOctalString(jlong);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jlong);
      static ::java::lang::String toString(jlong, jint);
      static ::java::lang::String toUnsignedString(jlong);
      static ::java::lang::String toUnsignedString(jlong, jint);
      static Long valueOf(const ::java::lang::String &);
      static Long valueOf(jlong);
      static Long valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Long);
    extern PyTypeObject *PY_TYPE(Long);

    class t_Long {
    public:
      PyObject_HEAD
      Long object;
      static PyObject *wrap_Object(const Long&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
