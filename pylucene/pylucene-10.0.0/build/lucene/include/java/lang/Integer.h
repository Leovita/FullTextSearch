#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Object;
    class Integer;
    class Class;
    class CharSequence;
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

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_8226bd0b0fc13dba,
        mid_bitCount_a3904e10f5bb9437,
        mid_byteValue_1456044a01a5c9bf,
        mid_compare_7f27cf81a85a97e9,
        mid_compareTo_570e85ce002d3cc0,
        mid_compareUnsigned_7f27cf81a85a97e9,
        mid_compress_7f27cf81a85a97e9,
        mid_decode_7462b7b2a159ef2e,
        mid_describeConstable_9a972c66ccbfd657,
        mid_divideUnsigned_7f27cf81a85a97e9,
        mid_doubleValue_6fb37e123fed7a1f,
        mid_equals_00d17418847797d4,
        mid_expand_7f27cf81a85a97e9,
        mid_floatValue_8b62236f0e4d0dbc,
        mid_getInteger_7462b7b2a159ef2e,
        mid_getInteger_750c137a3168da80,
        mid_getInteger_06c2f550e83faa3e,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_a3904e10f5bb9437,
        mid_highestOneBit_a3904e10f5bb9437,
        mid_intValue_bd89ce15dad49192,
        mid_longValue_0f176418e3e16541,
        mid_lowestOneBit_a3904e10f5bb9437,
        mid_max_7f27cf81a85a97e9,
        mid_min_7f27cf81a85a97e9,
        mid_numberOfLeadingZeros_a3904e10f5bb9437,
        mid_numberOfTrailingZeros_a3904e10f5bb9437,
        mid_parseInt_fa2a6f298bd618ab,
        mid_parseInt_3c8becdb59ed9edb,
        mid_parseInt_db9a2330814263ef,
        mid_parseUnsignedInt_fa2a6f298bd618ab,
        mid_parseUnsignedInt_3c8becdb59ed9edb,
        mid_parseUnsignedInt_db9a2330814263ef,
        mid_remainderUnsigned_7f27cf81a85a97e9,
        mid_reverse_a3904e10f5bb9437,
        mid_reverseBytes_a3904e10f5bb9437,
        mid_rotateLeft_7f27cf81a85a97e9,
        mid_rotateRight_7f27cf81a85a97e9,
        mid_shortValue_ae7a5bcb127748fd,
        mid_signum_a3904e10f5bb9437,
        mid_sum_7f27cf81a85a97e9,
        mid_toBinaryString_0da8f0b89b1e9a22,
        mid_toHexString_0da8f0b89b1e9a22,
        mid_toOctalString_0da8f0b89b1e9a22,
        mid_toString_e7df854526d67fa3,
        mid_toString_0da8f0b89b1e9a22,
        mid_toString_84bcadd536b77189,
        mid_toUnsignedLong_49af390f180d8ee7,
        mid_toUnsignedString_0da8f0b89b1e9a22,
        mid_toUnsignedString_84bcadd536b77189,
        mid_valueOf_7462b7b2a159ef2e,
        mid_valueOf_557ffba2870d3111,
        mid_valueOf_06c2f550e83faa3e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Integer(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Integer(const Integer& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_VALUE;
      static jint MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Integer(const ::java::lang::String &);
      Integer(jint);

      static jint bitCount(jint);
      jbyte byteValue() const;
      static jint compare(jint, jint);
      jint compareTo(const Integer &) const;
      static jint compareUnsigned(jint, jint);
      static jint compress(jint, jint);
      static Integer decode(const ::java::lang::String &);
      ::java::util::Optional describeConstable() const;
      static jint divideUnsigned(jint, jint);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jint expand(jint, jint);
      jfloat floatValue() const;
      static Integer getInteger(const ::java::lang::String &);
      static Integer getInteger(const ::java::lang::String &, const Integer &);
      static Integer getInteger(const ::java::lang::String &, jint);
      jint hashCode() const;
      static jint hashCode(jint);
      static jint highestOneBit(jint);
      jint intValue() const;
      jlong longValue() const;
      static jint lowestOneBit(jint);
      static jint max$(jint, jint);
      static jint min$(jint, jint);
      static jint numberOfLeadingZeros(jint);
      static jint numberOfTrailingZeros(jint);
      static jint parseInt(const ::java::lang::String &);
      static jint parseInt(const ::java::lang::String &, jint);
      static jint parseInt(const ::java::lang::CharSequence &, jint, jint, jint);
      static jint parseUnsignedInt(const ::java::lang::String &);
      static jint parseUnsignedInt(const ::java::lang::String &, jint);
      static jint parseUnsignedInt(const ::java::lang::CharSequence &, jint, jint, jint);
      static jint remainderUnsigned(jint, jint);
      static jint reverse(jint);
      static jint reverseBytes(jint);
      static jint rotateLeft(jint, jint);
      static jint rotateRight(jint, jint);
      jshort shortValue() const;
      static jint signum(jint);
      static jint sum(jint, jint);
      static ::java::lang::String toBinaryString(jint);
      static ::java::lang::String toHexString(jint);
      static ::java::lang::String toOctalString(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jint);
      static ::java::lang::String toString(jint, jint);
      static jlong toUnsignedLong(jint);
      static ::java::lang::String toUnsignedString(jint);
      static ::java::lang::String toUnsignedString(jint, jint);
      static Integer valueOf(const ::java::lang::String &);
      static Integer valueOf(jint);
      static Integer valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Integer);
    extern PyTypeObject *PY_TYPE(Integer);

    class t_Integer {
    public:
      PyObject_HEAD
      Integer object;
      static PyObject *wrap_Object(const Integer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
