#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Object;
    class Class;
    class StringBuilder;
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

    class StringBuilder : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_init$_8226bd0b0fc13dba,
        mid_init$_fe2ab7d27aa3fe1a,
        mid_append_fd709330181527f2,
        mid_append_c4cc4e0c4f214393,
        mid_append_a503faa36b65b12a,
        mid_append_5b509e9e0dd81b85,
        mid_append_491a6399ffb3873c,
        mid_append_e17525c3eb5d409a,
        mid_append_fa4b874460a763a1,
        mid_append_355df0471556a714,
        mid_append_7063dc13fdb1d628,
        mid_append_bb3975eeadf31b49,
        mid_append_941e397e6c510467,
        mid_append_aeccab4a5c8413d4,
        mid_append_2275329a7d99bba0,
        mid_appendCodePoint_355df0471556a714,
        mid_compareTo_f23d3d96179ca830,
        mid_delete_c56c68c793d17cf4,
        mid_deleteCharAt_355df0471556a714,
        mid_indexOf_fa2a6f298bd618ab,
        mid_indexOf_3c8becdb59ed9edb,
        mid_insert_26f50597298c3a31,
        mid_insert_84a9ebd51103bcb1,
        mid_insert_f06f75f57d9b4112,
        mid_insert_c180dcd95f62698e,
        mid_insert_3bf0ee8a2af9eef3,
        mid_insert_fad5c871f9b80573,
        mid_insert_c56c68c793d17cf4,
        mid_insert_61e52e9cd2fa236e,
        mid_insert_fd98ad2c88de5a33,
        mid_insert_9f47b1967df18930,
        mid_insert_6ce1b9b996ff8ba0,
        mid_insert_d1544ec143b04273,
        mid_lastIndexOf_fa2a6f298bd618ab,
        mid_lastIndexOf_3c8becdb59ed9edb,
        mid_repeat_c56c68c793d17cf4,
        mid_repeat_e42b3eefb10157e5,
        mid_replace_6d703859d40cd197,
        mid_reverse_f636e801192e8b55,
        mid_toString_e7df854526d67fa3,
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
