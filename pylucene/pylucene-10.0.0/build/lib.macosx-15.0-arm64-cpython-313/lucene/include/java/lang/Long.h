#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class CharSequence;
    class Object;
    class Long;
    class NumberFormatException;
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
        mid_init$_0d82408c6e55bc30,
        mid_init$_8b3d46852b435a94,
        mid_bitCount_35c872f03f347c10,
        mid_byteValue_847674f430f49e4c,
        mid_compare_40ef5a5aa6bfa711,
        mid_compareTo_671609a3f44fa9d4,
        mid_compareUnsigned_40ef5a5aa6bfa711,
        mid_compress_bcea5161e8951fae,
        mid_decode_a6b77ae744e963a7,
        mid_describeConstable_d95173840d09a723,
        mid_divideUnsigned_bcea5161e8951fae,
        mid_doubleValue_32caabaad86c508b,
        mid_equals_570b5248a6da3ef6,
        mid_expand_bcea5161e8951fae,
        mid_floatValue_9b6c3480dac00edf,
        mid_getLong_a6b77ae744e963a7,
        mid_getLong_828c0e0f3b06272f,
        mid_getLong_667f9439de8e1989,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_35c872f03f347c10,
        mid_highestOneBit_91d66fa3ea476cea,
        mid_intValue_20fbf7565993c3d7,
        mid_longValue_16939d9d0a9a9721,
        mid_lowestOneBit_91d66fa3ea476cea,
        mid_max_bcea5161e8951fae,
        mid_min_bcea5161e8951fae,
        mid_numberOfLeadingZeros_35c872f03f347c10,
        mid_numberOfTrailingZeros_35c872f03f347c10,
        mid_parseLong_e942a6f864c95ca0,
        mid_parseLong_5605f7ed34401659,
        mid_parseLong_1b767f57b19a0b6d,
        mid_parseUnsignedLong_e942a6f864c95ca0,
        mid_parseUnsignedLong_5605f7ed34401659,
        mid_parseUnsignedLong_1b767f57b19a0b6d,
        mid_remainderUnsigned_bcea5161e8951fae,
        mid_reverse_91d66fa3ea476cea,
        mid_reverseBytes_91d66fa3ea476cea,
        mid_rotateLeft_53e8a647d71c2269,
        mid_rotateRight_53e8a647d71c2269,
        mid_shortValue_21ad82099ac5d56c,
        mid_signum_35c872f03f347c10,
        mid_sum_bcea5161e8951fae,
        mid_toBinaryString_f0c925499cca37b2,
        mid_toHexString_f0c925499cca37b2,
        mid_toOctalString_f0c925499cca37b2,
        mid_toString_09a7afff1868fc5e,
        mid_toString_f0c925499cca37b2,
        mid_toString_4a173b751ee64a71,
        mid_toUnsignedString_f0c925499cca37b2,
        mid_toUnsignedString_4a173b751ee64a71,
        mid_valueOf_a6b77ae744e963a7,
        mid_valueOf_d61b9f0cccefe16a,
        mid_valueOf_9c70f92504f25357,
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
