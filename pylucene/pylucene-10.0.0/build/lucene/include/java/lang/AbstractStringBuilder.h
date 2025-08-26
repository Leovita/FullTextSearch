#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Appendable;
    class Class;
    class StringBuffer;
    class AbstractStringBuilder;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AbstractStringBuilder : public ::java::lang::Object {
     public:
      enum {
        mid_append_dba35afef629f8b2,
        mid_append_7de6a111551415e3,
        mid_append_fad53683e13c8851,
        mid_append_08f2134a93bd99d2,
        mid_append_7d4bbb5130fb2f8e,
        mid_append_58d0c93bf6508b30,
        mid_append_07b444f314e510b9,
        mid_append_998bb8adb481e207,
        mid_append_5bd64cf73a5601fb,
        mid_append_723f6051bfb18f84,
        mid_append_55996fa509db1838,
        mid_append_167b3c57138201e4,
        mid_append_cf374c44f8bb0d24,
        mid_appendCodePoint_998bb8adb481e207,
        mid_capacity_bd89ce15dad49192,
        mid_charAt_bc94dd98365f92fb,
        mid_codePointAt_a3904e10f5bb9437,
        mid_codePointBefore_a3904e10f5bb9437,
        mid_codePointCount_7f27cf81a85a97e9,
        mid_delete_d656fb2ba4b3bf06,
        mid_deleteCharAt_998bb8adb481e207,
        mid_ensureCapacity_8226bd0b0fc13dba,
        mid_getChars_9b6865b054cfaa53,
        mid_indexOf_fa2a6f298bd618ab,
        mid_indexOf_3c8becdb59ed9edb,
        mid_insert_65ffa15047a87c0b,
        mid_insert_cf636c5c6b02abc7,
        mid_insert_cea69040a08cbd0b,
        mid_insert_c86bb9fc49149d0c,
        mid_insert_7477f5cb73354781,
        mid_insert_f877d1054e82e1ad,
        mid_insert_d656fb2ba4b3bf06,
        mid_insert_f1f92fc765454390,
        mid_insert_2c3b0b473de24f2a,
        mid_insert_a401288425a0ed74,
        mid_insert_4ac6bfb414258e27,
        mid_insert_96e0fa0a24f244ed,
        mid_lastIndexOf_fa2a6f298bd618ab,
        mid_lastIndexOf_3c8becdb59ed9edb,
        mid_length_bd89ce15dad49192,
        mid_offsetByCodePoints_7f27cf81a85a97e9,
        mid_repeat_d656fb2ba4b3bf06,
        mid_repeat_5e08615e57c350f6,
        mid_replace_94d4faf1fb161dde,
        mid_reverse_0e677fa1318bd5eb,
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
