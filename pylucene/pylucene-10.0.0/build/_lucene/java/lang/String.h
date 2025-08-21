#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class CharSequence;
    class String;
    class Iterable;
    class StringBuffer;
    class StringBuilder;
  }
  namespace io {
    class Serializable;
    class UnsupportedEncodingException;
  }
  namespace util {
    class Comparator;
    class Optional;
    class Locale;
    namespace function {
      class Function;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_e0f5dcb408172905,
        mid_init$_86d6edf9953c2f53,
        mid_init$_3ce1e597fb62ac79,
        mid_init$_cc40ee25f19f0868,
        mid_init$_b2fa34ff9904ddeb,
        mid_init$_3f6ea74fc0096aaa,
        mid_init$_5fdd5da9426708e6,
        mid_init$_fc9be2ded8ee801f,
        mid_init$_ad090cb6070ea6a2,
        mid_init$_4db2e1fbf967f92f,
        mid_init$_55f2d1b678730677,
        mid_charAt_92a13ce4196a7e69,
        mid_codePointAt_3c9bba330f083871,
        mid_codePointBefore_3c9bba330f083871,
        mid_codePointCount_7f733b5d08bb5ec4,
        mid_compareTo_3f230d713d7fd2b0,
        mid_compareToIgnoreCase_3f230d713d7fd2b0,
        mid_concat_cb0eb1432185fc94,
        mid_contains_7fa88c8af67956ed,
        mid_contentEquals_606538799ab4d0e1,
        mid_contentEquals_7fa88c8af67956ed,
        mid_copyValueOf_27d93aaabc4fd510,
        mid_copyValueOf_00ae5713071ab988,
        mid_describeConstable_d95173840d09a723,
        mid_endsWith_4a13a663b5c11133,
        mid_equals_570b5248a6da3ef6,
        mid_equalsIgnoreCase_4a13a663b5c11133,
        mid_format_da2198b2b95de815,
        mid_format_21f2166218c85488,
        mid_formatted_9552bd4e03f991d8,
        mid_getBytes_5560da88fc44aa82,
        mid_getBytes_94782b3e74df6c16,
        mid_getBytes_62871f0464f10111,
        mid_getChars_c3957ae89c87bac9,
        mid_hashCode_20fbf7565993c3d7,
        mid_indent_cd8436557ab831f9,
        mid_indexOf_3f230d713d7fd2b0,
        mid_indexOf_3c9bba330f083871,
        mid_indexOf_8d709462afbd628d,
        mid_indexOf_7f733b5d08bb5ec4,
        mid_indexOf_11d12bcf1a21f3a5,
        mid_indexOf_527fe3c890b0f1b1,
        mid_intern_09a7afff1868fc5e,
        mid_isBlank_947277eca0748c4e,
        mid_isEmpty_947277eca0748c4e,
        mid_join_fcfbca1cc55c1398,
        mid_join_df45ae68538e3678,
        mid_lastIndexOf_3f230d713d7fd2b0,
        mid_lastIndexOf_3c9bba330f083871,
        mid_lastIndexOf_8d709462afbd628d,
        mid_lastIndexOf_7f733b5d08bb5ec4,
        mid_length_20fbf7565993c3d7,
        mid_matches_4a13a663b5c11133,
        mid_offsetByCodePoints_7f733b5d08bb5ec4,
        mid_regionMatches_77ff1675a8f326d9,
        mid_regionMatches_cde46a41bef2d329,
        mid_repeat_cd8436557ab831f9,
        mid_replace_93b4aaa12b02ec6c,
        mid_replace_342e16cdd055afe6,
        mid_replaceAll_6829292399b85216,
        mid_replaceFirst_6829292399b85216,
        mid_split_a06e92f371939b0b,
        mid_split_4d63ef154ee63a81,
        mid_splitWithDelimiters_4d63ef154ee63a81,
        mid_startsWith_4a13a663b5c11133,
        mid_startsWith_d51cf5980c769206,
        mid_strip_09a7afff1868fc5e,
        mid_stripIndent_09a7afff1868fc5e,
        mid_stripLeading_09a7afff1868fc5e,
        mid_stripTrailing_09a7afff1868fc5e,
        mid_subSequence_3202de35bfd622a0,
        mid_substring_cd8436557ab831f9,
        mid_substring_d88eb6f875791809,
        mid_toCharArray_77d52ded526199de,
        mid_toLowerCase_09a7afff1868fc5e,
        mid_toLowerCase_d2a6991e8d2aa45a,
        mid_toString_09a7afff1868fc5e,
        mid_toUpperCase_09a7afff1868fc5e,
        mid_toUpperCase_d2a6991e8d2aa45a,
        mid_transform_5913ef54a0a88f4d,
        mid_translateEscapes_09a7afff1868fc5e,
        mid_trim_09a7afff1868fc5e,
        mid_valueOf_27d93aaabc4fd510,
        mid_valueOf_648fb915d73c5399,
        mid_valueOf_a72e49fe21aa75fa,
        mid_valueOf_4822cf3d793bd8b0,
        mid_valueOf_e06c794ac7bb9991,
        mid_valueOf_cd8436557ab831f9,
        mid_valueOf_a6472d0c4a2d4dc6,
        mid_valueOf_f0c925499cca37b2,
        mid_valueOf_00ae5713071ab988,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit String(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      String(const String& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Comparator *CASE_INSENSITIVE_ORDER;

      String();
      String(const ::java::lang::StringBuffer &);
      String(const ::java::lang::StringBuilder &);
      String(const JArray< jbyte > &);
      String(const JArray< jchar > &);
      String(const JArray< jbyte > &, const String &);
      String(const JArray< jbyte > &, jint);
      String(const JArray< jbyte > &, jint, jint);
      String(const JArray< jchar > &, jint, jint);
      String(const JArray< jint > &, jint, jint);
      String(const JArray< jbyte > &, jint, jint, const String &);
      String(const JArray< jbyte > &, jint, jint, jint);

      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const String &) const;
      jint compareToIgnoreCase(const String &) const;
      String concat(const String &) const;
      jboolean contains(const ::java::lang::CharSequence &) const;
      jboolean contentEquals(const ::java::lang::StringBuffer &) const;
      jboolean contentEquals(const ::java::lang::CharSequence &) const;
      static String copyValueOf(const JArray< jchar > &);
      static String copyValueOf(const JArray< jchar > &, jint, jint);
      ::java::util::Optional describeConstable() const;
      jboolean endsWith(const String &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equalsIgnoreCase(const String &) const;
      static String format(const String &, const JArray< ::java::lang::Object > &);
      static String format(const ::java::util::Locale &, const String &, const JArray< ::java::lang::Object > &);
      String formatted(const JArray< ::java::lang::Object > &) const;
      JArray< jbyte > getBytes() const;
      JArray< jbyte > getBytes(const String &) const;
      void getBytes(jint, jint, const JArray< jbyte > &, jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint hashCode() const;
      String indent(jint) const;
      jint indexOf(const String &) const;
      jint indexOf(jint) const;
      jint indexOf(const String &, jint) const;
      jint indexOf(jint, jint) const;
      jint indexOf(const String &, jint, jint) const;
      jint indexOf(jint, jint, jint) const;
      String intern() const;
      jboolean isBlank() const;
      jboolean isEmpty() const;
      static String join(const ::java::lang::CharSequence &, const JArray< ::java::lang::CharSequence > &);
      static String join(const ::java::lang::CharSequence &, const ::java::lang::Iterable &);
      jint lastIndexOf(const String &) const;
      jint lastIndexOf(jint) const;
      jint lastIndexOf(const String &, jint) const;
      jint lastIndexOf(jint, jint) const;
      jint length() const;
      jboolean matches(const String &) const;
      jint offsetByCodePoints(jint, jint) const;
      jboolean regionMatches(jint, const String &, jint, jint) const;
      jboolean regionMatches(jboolean, jint, const String &, jint, jint) const;
      String repeat(jint) const;
      String replace(jchar, jchar) const;
      String replace(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
      String replaceAll(const String &, const String &) const;
      String replaceFirst(const String &, const String &) const;
      JArray< String > split(const String &) const;
      JArray< String > split(const String &, jint) const;
      JArray< String > splitWithDelimiters(const String &, jint) const;
      jboolean startsWith(const String &) const;
      jboolean startsWith(const String &, jint) const;
      String strip() const;
      String stripIndent() const;
      String stripLeading() const;
      String stripTrailing() const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      String substring(jint) const;
      String substring(jint, jint) const;
      JArray< jchar > toCharArray() const;
      String toLowerCase() const;
      String toLowerCase(const ::java::util::Locale &) const;
      String toString() const;
      String toUpperCase() const;
      String toUpperCase(const ::java::util::Locale &) const;
      ::java::lang::Object transform(const ::java::util::function::Function &) const;
      String translateEscapes() const;
      String trim() const;
      static String valueOf(const JArray< jchar > &);
      static String valueOf(jboolean);
      static String valueOf(jchar);
      static String valueOf(jdouble);
      static String valueOf(jfloat);
      static String valueOf(jint);
      static String valueOf(const ::java::lang::Object &);
      static String valueOf(jlong);
      static String valueOf(const JArray< jchar > &, jint, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(String);
    extern PyTypeObject *PY_TYPE(String);

    class t_String {
    public:
      PyObject_HEAD
      String object;
      static PyObject *wrap_Object(const String&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
