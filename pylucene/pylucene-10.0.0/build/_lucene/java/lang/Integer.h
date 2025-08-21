#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Integer;
    class Class;
    class String;
    class CharSequence;
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

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_540b2b23d51b1efd,
        mid_bitCount_3c9bba330f083871,
        mid_byteValue_847674f430f49e4c,
        mid_compare_7f733b5d08bb5ec4,
        mid_compareTo_36835b37e0c10d6c,
        mid_compareUnsigned_7f733b5d08bb5ec4,
        mid_compress_7f733b5d08bb5ec4,
        mid_decode_e4f7d389ac161e3b,
        mid_describeConstable_d95173840d09a723,
        mid_divideUnsigned_7f733b5d08bb5ec4,
        mid_doubleValue_32caabaad86c508b,
        mid_equals_570b5248a6da3ef6,
        mid_expand_7f733b5d08bb5ec4,
        mid_floatValue_9b6c3480dac00edf,
        mid_getInteger_e4f7d389ac161e3b,
        mid_getInteger_380e5afa3189e1cf,
        mid_getInteger_19af111a80a6f74d,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_3c9bba330f083871,
        mid_highestOneBit_3c9bba330f083871,
        mid_intValue_20fbf7565993c3d7,
        mid_longValue_16939d9d0a9a9721,
        mid_lowestOneBit_3c9bba330f083871,
        mid_max_7f733b5d08bb5ec4,
        mid_min_7f733b5d08bb5ec4,
        mid_numberOfLeadingZeros_3c9bba330f083871,
        mid_numberOfTrailingZeros_3c9bba330f083871,
        mid_parseInt_3f230d713d7fd2b0,
        mid_parseInt_8d709462afbd628d,
        mid_parseInt_f4c897b352136df7,
        mid_parseUnsignedInt_3f230d713d7fd2b0,
        mid_parseUnsignedInt_8d709462afbd628d,
        mid_parseUnsignedInt_f4c897b352136df7,
        mid_remainderUnsigned_7f733b5d08bb5ec4,
        mid_reverse_3c9bba330f083871,
        mid_reverseBytes_3c9bba330f083871,
        mid_rotateLeft_7f733b5d08bb5ec4,
        mid_rotateRight_7f733b5d08bb5ec4,
        mid_shortValue_21ad82099ac5d56c,
        mid_signum_3c9bba330f083871,
        mid_sum_7f733b5d08bb5ec4,
        mid_toBinaryString_cd8436557ab831f9,
        mid_toHexString_cd8436557ab831f9,
        mid_toOctalString_cd8436557ab831f9,
        mid_toString_09a7afff1868fc5e,
        mid_toString_cd8436557ab831f9,
        mid_toString_d88eb6f875791809,
        mid_toUnsignedLong_7b22650fccb5d574,
        mid_toUnsignedString_cd8436557ab831f9,
        mid_toUnsignedString_d88eb6f875791809,
        mid_valueOf_e4f7d389ac161e3b,
        mid_valueOf_106c45aea76a783a,
        mid_valueOf_19af111a80a6f74d,
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
