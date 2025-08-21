#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class CharSequence;
    class String;
    class Object;
    class StringBuffer;
    class StringBuilder;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StringBuilder : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_540b2b23d51b1efd,
        mid_init$_5ed8eb2e3024c663,
        mid_append_48b6de916538e13f,
        mid_append_ceb776d90fd8f41f,
        mid_append_6cb940ccadfc8e0b,
        mid_append_3d1d873069275cd7,
        mid_append_b60ed3d688a8ca86,
        mid_append_441409ddf268988f,
        mid_append_93a3ccd863ea6d04,
        mid_append_04454a05351e74ea,
        mid_append_060d02c19b7b0ef0,
        mid_append_6272036dd34015d5,
        mid_append_1e995b0325304cc1,
        mid_append_cb1511d2fa2040b4,
        mid_append_1a3081c1b53eb2d1,
        mid_appendCodePoint_04454a05351e74ea,
        mid_compareTo_f7953e7ec8c024e4,
        mid_delete_06b50f5ba1f1b629,
        mid_deleteCharAt_04454a05351e74ea,
        mid_indexOf_3f230d713d7fd2b0,
        mid_indexOf_8d709462afbd628d,
        mid_insert_dd468ad714956a8d,
        mid_insert_d5f38aa9eda86ef9,
        mid_insert_7e5e32eedea8e44f,
        mid_insert_98bee7146d32db66,
        mid_insert_155cb7888457b98f,
        mid_insert_0806711c16f50c29,
        mid_insert_06b50f5ba1f1b629,
        mid_insert_fef819f8a132724b,
        mid_insert_8de9075faf2e4732,
        mid_insert_1ee4eac6c9c22f76,
        mid_insert_f6a55d6d975c6e1c,
        mid_insert_7ac391ab70a27bb3,
        mid_lastIndexOf_3f230d713d7fd2b0,
        mid_lastIndexOf_8d709462afbd628d,
        mid_repeat_06b50f5ba1f1b629,
        mid_repeat_99cb2368e0ddb480,
        mid_replace_5b1528a1163981fb,
        mid_reverse_3d090b496042df8d,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuilder(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuilder(const StringBuilder& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuilder();
      StringBuilder(const ::java::lang::String &);
      StringBuilder(jint);
      StringBuilder(const ::java::lang::CharSequence &);

      StringBuilder append(const ::java::lang::StringBuffer &) const;
      StringBuilder append(const JArray< jchar > &) const;
      StringBuilder append(const ::java::lang::String &) const;
      StringBuilder append(jboolean) const;
      StringBuilder append(jchar) const;
      StringBuilder append(jdouble) const;
      StringBuilder append(jfloat) const;
      StringBuilder append(jint) const;
      StringBuilder append(const ::java::lang::CharSequence &) const;
      StringBuilder append(const ::java::lang::Object &) const;
      StringBuilder append(jlong) const;
      StringBuilder append(const JArray< jchar > &, jint, jint) const;
      StringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuilder appendCodePoint(jint) const;
      jint compareTo(const StringBuilder &) const;
      StringBuilder delete$(jint, jint) const;
      StringBuilder deleteCharAt(jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuilder insert(jint, const JArray< jchar > &) const;
      StringBuilder insert(jint, const ::java::lang::String &) const;
      StringBuilder insert(jint, jboolean) const;
      StringBuilder insert(jint, jchar) const;
      StringBuilder insert(jint, jdouble) const;
      StringBuilder insert(jint, jfloat) const;
      StringBuilder insert(jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      StringBuilder insert(jint, const ::java::lang::Object &) const;
      StringBuilder insert(jint, jlong) const;
      StringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      StringBuilder repeat(jint, jint) const;
      StringBuilder repeat(const ::java::lang::CharSequence &, jint) const;
      StringBuilder replace(jint, jint, const ::java::lang::String &) const;
      StringBuilder reverse() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuilder);
    extern PyTypeObject *PY_TYPE(StringBuilder);

    class t_StringBuilder {
    public:
      PyObject_HEAD
      StringBuilder object;
      static PyObject *wrap_Object(const StringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
