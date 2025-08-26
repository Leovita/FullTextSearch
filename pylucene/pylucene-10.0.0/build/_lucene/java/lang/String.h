#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Class;
    class StringBuilder;
    class StringBuffer;
    class Iterable;
    class CharSequence;
  }
  namespace util {
    namespace function {
      class Function;
    }
    class Optional;
    class Comparator;
    class Locale;
  }
  namespace io {
    class UnsupportedEncodingException;
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_b8a92626680c1dbd,
        mid_init$_5dd6a2d608961d5f,
        mid_init$_a4d4f283481182e8,
        mid_init$_ae4452529cb9c0dd,
        mid_init$_956a1bdd3a9c3aa9,
        mid_init$_31e2e931f3bb1000,
        mid_init$_116f7fcb5bff0f39,
        mid_init$_186bb5d1c1aec30c,
        mid_init$_57da58ead958e473,
        mid_init$_7454f2e6cd13d922,
        mid_init$_86726f2924b10ee4,
        mid_charAt_bc94dd98365f92fb,
        mid_codePointAt_a3904e10f5bb9437,
        mid_codePointBefore_a3904e10f5bb9437,
        mid_codePointCount_7f27cf81a85a97e9,
        mid_compareTo_fa2a6f298bd618ab,
        mid_compareToIgnoreCase_fa2a6f298bd618ab,
        mid_concat_fef9c036acf290a9,
        mid_contains_966cbeda474fd26b,
        mid_contentEquals_c982d00b025bcef0,
        mid_contentEquals_966cbeda474fd26b,
        mid_copyValueOf_73a8d57a48f9dd63,
        mid_copyValueOf_bcae9d4249f45852,
        mid_describeConstable_9a972c66ccbfd657,
        mid_endsWith_94f7e759d94961b0,
        mid_equals_00d17418847797d4,
        mid_equalsIgnoreCase_94f7e759d94961b0,
        mid_format_c89cb40ab473441a,
        mid_format_20bc3f8873845d3f,
        mid_formatted_29a154f79fc91e5a,
        mid_getBytes_44e916dc40fc04cb,
        mid_getBytes_aa37a0e1a43a8ce2,
        mid_getBytes_c1c04034fb619375,
        mid_getChars_9b6865b054cfaa53,
        mid_hashCode_bd89ce15dad49192,
        mid_indent_0da8f0b89b1e9a22,
        mid_indexOf_fa2a6f298bd618ab,
        mid_indexOf_a3904e10f5bb9437,
        mid_indexOf_3c8becdb59ed9edb,
        mid_indexOf_7f27cf81a85a97e9,
        mid_indexOf_b65712386d5f7fab,
        mid_indexOf_1a01472680f9fc97,
        mid_intern_e7df854526d67fa3,
        mid_isBlank_9aa4f33e82ea333f,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_join_98c9858b19280aa2,
        mid_join_c92fc013d200b9a2,
        mid_lastIndexOf_fa2a6f298bd618ab,
        mid_lastIndexOf_a3904e10f5bb9437,
        mid_lastIndexOf_3c8becdb59ed9edb,
        mid_lastIndexOf_7f27cf81a85a97e9,
        mid_length_bd89ce15dad49192,
        mid_matches_94f7e759d94961b0,
        mid_offsetByCodePoints_7f27cf81a85a97e9,
        mid_regionMatches_e8eba73ebf059758,
        mid_regionMatches_3fb88ad9dc11677c,
        mid_repeat_0da8f0b89b1e9a22,
        mid_replace_2981df811cd61b45,
        mid_replace_8c8a02b694d91f28,
        mid_replaceAll_3bdb499546f6bd60,
        mid_replaceFirst_3bdb499546f6bd60,
        mid_split_7b34cb521ce5d8ff,
        mid_split_9ecbefcf978f48ac,
        mid_splitWithDelimiters_9ecbefcf978f48ac,
        mid_startsWith_94f7e759d94961b0,
        mid_startsWith_45021515793eeaf7,
        mid_strip_e7df854526d67fa3,
        mid_stripIndent_e7df854526d67fa3,
        mid_stripLeading_e7df854526d67fa3,
        mid_stripTrailing_e7df854526d67fa3,
        mid_subSequence_e78c175a32c9e667,
        mid_substring_0da8f0b89b1e9a22,
        mid_substring_84bcadd536b77189,
        mid_toCharArray_e5926045e1917c62,
        mid_toLowerCase_e7df854526d67fa3,
        mid_toLowerCase_dce821ed97c0e930,
        mid_toString_e7df854526d67fa3,
        mid_toUpperCase_e7df854526d67fa3,
        mid_toUpperCase_dce821ed97c0e930,
        mid_transform_7ed4cf782c95126c,
        mid_translateEscapes_e7df854526d67fa3,
        mid_trim_e7df854526d67fa3,
        mid_valueOf_73a8d57a48f9dd63,
        mid_valueOf_e446331928d0b1c5,
        mid_valueOf_6923855d95beafa0,
        mid_valueOf_cddd216549402f17,
        mid_valueOf_8b9e33693229fd01,
        mid_valueOf_0da8f0b89b1e9a22,
        mid_valueOf_5f92096499c6603e,
        mid_valueOf_229c7997533c8554,
        mid_valueOf_bcae9d4249f45852,
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
