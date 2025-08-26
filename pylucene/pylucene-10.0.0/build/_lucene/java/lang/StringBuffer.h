#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Object;
    class Class;
    class StringBuffer;
    class CharSequence;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StringBuffer : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_init$_8226bd0b0fc13dba,
        mid_init$_fe2ab7d27aa3fe1a,
        mid_append_76fc42b08f085b47,
        mid_append_8a87cd196fad1d8a,
        mid_append_7f8d3e26b96b7205,
        mid_append_f41ed63bd342b99a,
        mid_append_67c9b37013d535de,
        mid_append_93158446528f243a,
        mid_append_2ab1a6fb0870693f,
        mid_append_a9cdac552b961d83,
        mid_append_4e065bfb12eb9d89,
        mid_append_8411c385065b6184,
        mid_append_4683a2ad1f32ded3,
        mid_append_69a58a29ec0a3118,
        mid_append_3bf8c000ae47def7,
        mid_appendCodePoint_a9cdac552b961d83,
        mid_capacity_bd89ce15dad49192,
        mid_charAt_bc94dd98365f92fb,
        mid_codePointAt_a3904e10f5bb9437,
        mid_codePointBefore_a3904e10f5bb9437,
        mid_codePointCount_7f27cf81a85a97e9,
        mid_compareTo_756183ec8d5ed3b3,
        mid_delete_187c424ea8fe4ef5,
        mid_deleteCharAt_a9cdac552b961d83,
        mid_ensureCapacity_8226bd0b0fc13dba,
        mid_getChars_9b6865b054cfaa53,
        mid_indexOf_fa2a6f298bd618ab,
        mid_indexOf_3c8becdb59ed9edb,
        mid_insert_6a6a94d73266422b,
        mid_insert_3e97d6396b128272,
        mid_insert_09ca131caa463cd5,
        mid_insert_49c8a448ea89ddbe,
        mid_insert_7c1b96a4045fa64f,
        mid_insert_c9d939c378c86979,
        mid_insert_187c424ea8fe4ef5,
        mid_insert_a5f57349d7164230,
        mid_insert_0dbb8a7b49445dfd,
        mid_insert_4715eb0039437f46,
        mid_insert_0a09e01d9a090d48,
        mid_insert_9395559a5e1ca781,
        mid_lastIndexOf_fa2a6f298bd618ab,
        mid_lastIndexOf_3c8becdb59ed9edb,
        mid_length_bd89ce15dad49192,
        mid_offsetByCodePoints_7f27cf81a85a97e9,
        mid_repeat_187c424ea8fe4ef5,
        mid_repeat_bdb49caeab0ad949,
        mid_replace_26b3c51f55c03605,
        mid_reverse_a1814e978bf76f8c,
        mid_setCharAt_53f645c50443c1f0,
        mid_setLength_8226bd0b0fc13dba,
        mid_subSequence_e78c175a32c9e667,
        mid_substring_0da8f0b89b1e9a22,
        mid_substring_84bcadd536b77189,
        mid_toString_e7df854526d67fa3,
        mid_trimToSize_e7bdbe105ce1bafb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuffer(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuffer(const StringBuffer& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuffer();
      StringBuffer(const ::java::lang::String &);
      StringBuffer(jint);
      StringBuffer(const ::java::lang::CharSequence &);

      StringBuffer append(const StringBuffer &) const;
      StringBuffer append(const JArray< jchar > &) const;
      StringBuffer append(const ::java::lang::String &) const;
      StringBuffer append(jboolean) const;
      StringBuffer append(jchar) const;
      StringBuffer append(jdouble) const;
      StringBuffer append(jfloat) const;
      StringBuffer append(jint) const;
      StringBuffer append(const ::java::lang::CharSequence &) const;
      StringBuffer append(const ::java::lang::Object &) const;
      StringBuffer append(jlong) const;
      StringBuffer append(const JArray< jchar > &, jint, jint) const;
      StringBuffer append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuffer appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const StringBuffer &) const;
      StringBuffer delete$(jint, jint) const;
      StringBuffer deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuffer insert(jint, const JArray< jchar > &) const;
      StringBuffer insert(jint, const ::java::lang::String &) const;
      StringBuffer insert(jint, jboolean) const;
      StringBuffer insert(jint, jchar) const;
      StringBuffer insert(jint, jdouble) const;
      StringBuffer insert(jint, jfloat) const;
      StringBuffer insert(jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &) const;
      StringBuffer insert(jint, const ::java::lang::Object &) const;
      StringBuffer insert(jint, jlong) const;
      StringBuffer insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      StringBuffer repeat(jint, jint) const;
      StringBuffer repeat(const ::java::lang::CharSequence &, jint) const;
      StringBuffer replace(jint, jint, const ::java::lang::String &) const;
      StringBuffer reverse() const;
      void setCharAt(jint, jchar) const;
      void setLength(jint) const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      ::java::lang::String substring(jint) const;
      ::java::lang::String substring(jint, jint) const;
      ::java::lang::String toString() const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuffer);
    extern PyTypeObject *PY_TYPE(StringBuffer);

    class t_StringBuffer {
    public:
      PyObject_HEAD
      StringBuffer object;
      static PyObject *wrap_Object(const StringBuffer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
