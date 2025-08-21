#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Object;
    namespace constant {
      class DynamicConstantDesc;
    }
    class NumberFormatException;
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
        mid_init$_0d82408c6e55bc30,
        mid_init$_bcdac0a459ff35f6,
        mid_byteValue_847674f430f49e4c,
        mid_compare_f98c890d5a71e1da,
        mid_compareTo_04963373ac25be1e,
        mid_compareUnsigned_f98c890d5a71e1da,
        mid_decode_c1af22adfba184d2,
        mid_describeConstable_d95173840d09a723,
        mid_doubleValue_32caabaad86c508b,
        mid_equals_570b5248a6da3ef6,
        mid_floatValue_9b6c3480dac00edf,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_9e29d85df323014f,
        mid_intValue_20fbf7565993c3d7,
        mid_longValue_16939d9d0a9a9721,
        mid_parseByte_0048728f9019731d,
        mid_parseByte_5437da9a69c9595a,
        mid_shortValue_21ad82099ac5d56c,
        mid_toString_09a7afff1868fc5e,
        mid_toString_1e2bcbc46c0bef09,
        mid_toUnsignedInt_9e29d85df323014f,
        mid_toUnsignedLong_73e5e7ba2580f34e,
        mid_valueOf_c1af22adfba184d2,
        mid_valueOf_4e3388a684815837,
        mid_valueOf_fccff24054726c14,
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
      ::java::util::Optional describeConstable() const;
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
