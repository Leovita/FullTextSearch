#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Appendable;
    class AbstractStringBuilder;
    class Class;
    class CharSequence;
    class String;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AbstractStringBuilder : public ::java::lang::Object {
     public:
      enum {
        mid_append_dfaed6bd245082bb,
        mid_append_e6432ce80530eeb0,
        mid_append_aee08df59a7f08ae,
        mid_append_91aee2489324b580,
        mid_append_e116faeac7c1bfdb,
        mid_append_f968c2c0402ce0fd,
        mid_append_2513bb2eb8b83b38,
        mid_append_ebecaa46c700500a,
        mid_append_63dc631726be7f2a,
        mid_append_190985e0601dabf1,
        mid_append_7dedbd0a20ef9f4c,
        mid_append_96b2d3c3c764cbd7,
        mid_append_1496a1d56bffa632,
        mid_appendCodePoint_ebecaa46c700500a,
        mid_capacity_20fbf7565993c3d7,
        mid_charAt_92a13ce4196a7e69,
        mid_codePointAt_3c9bba330f083871,
        mid_codePointBefore_3c9bba330f083871,
        mid_codePointCount_7f733b5d08bb5ec4,
        mid_delete_56c84409f4e3c5c5,
        mid_deleteCharAt_ebecaa46c700500a,
        mid_ensureCapacity_540b2b23d51b1efd,
        mid_getChars_c3957ae89c87bac9,
        mid_indexOf_3f230d713d7fd2b0,
        mid_indexOf_8d709462afbd628d,
        mid_insert_aa67e926ee7c3e89,
        mid_insert_cbb6c7cd8ebae68b,
        mid_insert_637a03688d68d4a3,
        mid_insert_afcbfce8b90d00df,
        mid_insert_7bc1a735d41f4c97,
        mid_insert_16f72b53505e5b76,
        mid_insert_56c84409f4e3c5c5,
        mid_insert_12234a35d911351f,
        mid_insert_109e746a52451ff6,
        mid_insert_1fe2224cd1efd4de,
        mid_insert_55400a4e0a1ca35e,
        mid_insert_cdb46828883becbe,
        mid_lastIndexOf_3f230d713d7fd2b0,
        mid_lastIndexOf_8d709462afbd628d,
        mid_length_20fbf7565993c3d7,
        mid_offsetByCodePoints_7f733b5d08bb5ec4,
        mid_repeat_56c84409f4e3c5c5,
        mid_repeat_bfebd477a436555b,
        mid_replace_400443f175877dda,
        mid_reverse_1e6c37049be42ab9,
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

      explicit AbstractStringBuilder(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractStringBuilder(const AbstractStringBuilder& obj) : ::java::lang::Object(obj) {}

      AbstractStringBuilder append(const ::java::lang::StringBuffer &) const;
      AbstractStringBuilder append(const JArray< jchar > &) const;
      AbstractStringBuilder append(const ::java::lang::String &) const;
      AbstractStringBuilder append(jboolean) const;
      AbstractStringBuilder append(jchar) const;
      AbstractStringBuilder append(jdouble) const;
      AbstractStringBuilder append(jfloat) const;
      AbstractStringBuilder append(jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &) const;
      AbstractStringBuilder append(const ::java::lang::Object &) const;
      AbstractStringBuilder append(jlong) const;
      AbstractStringBuilder append(const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      AbstractStringBuilder appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      AbstractStringBuilder delete$(jint, jint) const;
      AbstractStringBuilder deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::String &) const;
      AbstractStringBuilder insert(jint, jboolean) const;
      AbstractStringBuilder insert(jint, jchar) const;
      AbstractStringBuilder insert(jint, jdouble) const;
      AbstractStringBuilder insert(jint, jfloat) const;
      AbstractStringBuilder insert(jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::Object &) const;
      AbstractStringBuilder insert(jint, jlong) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      AbstractStringBuilder repeat(jint, jint) const;
      AbstractStringBuilder repeat(const ::java::lang::CharSequence &, jint) const;
      AbstractStringBuilder replace(jint, jint, const ::java::lang::String &) const;
      AbstractStringBuilder reverse() const;
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
    extern PyType_Def PY_TYPE_DEF(AbstractStringBuilder);
    extern PyTypeObject *PY_TYPE(AbstractStringBuilder);

    class t_AbstractStringBuilder {
    public:
      PyObject_HEAD
      AbstractStringBuilder object;
      static PyObject *wrap_Object(const AbstractStringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
