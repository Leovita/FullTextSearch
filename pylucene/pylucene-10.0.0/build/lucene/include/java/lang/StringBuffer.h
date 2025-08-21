#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class CharSequence;
    class String;
    class Object;
    class StringBuffer;
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
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_540b2b23d51b1efd,
        mid_init$_5ed8eb2e3024c663,
        mid_append_40e42e8f2152fd45,
        mid_append_70cc9c62de21c136,
        mid_append_3e5098306bc1246b,
        mid_append_bcaf5e959eff9d20,
        mid_append_6d8f922dbc26d5bf,
        mid_append_f02a41c930075c59,
        mid_append_cf7453b06ef91cf3,
        mid_append_97360603702d4cf3,
        mid_append_2f1e9d754cb712e5,
        mid_append_dea69521296bf8ef,
        mid_append_5d2525a713c80fa1,
        mid_append_7519790902c13845,
        mid_append_40c49d98b9378e9f,
        mid_appendCodePoint_97360603702d4cf3,
        mid_capacity_20fbf7565993c3d7,
        mid_charAt_92a13ce4196a7e69,
        mid_codePointAt_3c9bba330f083871,
        mid_codePointBefore_3c9bba330f083871,
        mid_codePointCount_7f733b5d08bb5ec4,
        mid_compareTo_8377f13d50e546ed,
        mid_delete_d25033a8b7e1f8d9,
        mid_deleteCharAt_97360603702d4cf3,
        mid_ensureCapacity_540b2b23d51b1efd,
        mid_getChars_c3957ae89c87bac9,
        mid_indexOf_3f230d713d7fd2b0,
        mid_indexOf_8d709462afbd628d,
        mid_insert_4a32d589ba4f3814,
        mid_insert_0d2fa0da39eb5852,
        mid_insert_c40d634f4cb7b9e3,
        mid_insert_dcd7e4eb8bcdc7bb,
        mid_insert_1615858c36bc3960,
        mid_insert_308b4fd47a8c64b4,
        mid_insert_d25033a8b7e1f8d9,
        mid_insert_423d92b27cdbd66d,
        mid_insert_98ba555a4c4fad62,
        mid_insert_f708ac0f045822de,
        mid_insert_0b4dd1bad672cbbc,
        mid_insert_39c5caac96b73af6,
        mid_lastIndexOf_3f230d713d7fd2b0,
        mid_lastIndexOf_8d709462afbd628d,
        mid_length_20fbf7565993c3d7,
        mid_offsetByCodePoints_7f733b5d08bb5ec4,
        mid_repeat_d25033a8b7e1f8d9,
        mid_repeat_cf5554a20df5a3db,
        mid_replace_f8e9fdd8ed63f53b,
        mid_reverse_f9f076bdddc266c4,
        mid_setCharAt_931c9794de74ba08,
        mid_setLength_540b2b23d51b1efd,
        mid_subSequence_3202de35bfd622a0,
        mid_substring_cd8436557ab831f9,
        mid_substring_d88eb6f875791809,
        mid_toString_09a7afff1868fc5e,
        mid_trimToSize_3720c61b0679eb3e,
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
