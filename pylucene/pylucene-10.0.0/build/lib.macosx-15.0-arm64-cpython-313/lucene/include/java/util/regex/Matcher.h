#ifndef java_util_regex_Matcher_H
#define java_util_regex_Matcher_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
    class CharSequence;
    class StringBuffer;
    class StringBuilder;
  }
  namespace util {
    class Map;
    namespace regex {
      class MatchResult;
      class Matcher;
      class Pattern;
    }
    namespace function {
      class Function;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Matcher : public ::java::lang::Object {
       public:
        enum {
          mid_appendReplacement_6768cbd48d4308c5,
          mid_appendReplacement_b570cfb95bdd2440,
          mid_appendTail_40e42e8f2152fd45,
          mid_appendTail_ca543ab3a5860e70,
          mid_end_20fbf7565993c3d7,
          mid_end_3f230d713d7fd2b0,
          mid_end_3c9bba330f083871,
          mid_find_947277eca0748c4e,
          mid_find_ae22d3a856ad56f1,
          mid_group_09a7afff1868fc5e,
          mid_group_cb0eb1432185fc94,
          mid_group_cd8436557ab831f9,
          mid_groupCount_20fbf7565993c3d7,
          mid_hasAnchoringBounds_947277eca0748c4e,
          mid_hasMatch_947277eca0748c4e,
          mid_hasTransparentBounds_947277eca0748c4e,
          mid_hitEnd_947277eca0748c4e,
          mid_lookingAt_947277eca0748c4e,
          mid_matches_947277eca0748c4e,
          mid_namedGroups_f125f26c07a7bec8,
          mid_pattern_fbba0baa64190115,
          mid_quoteReplacement_cb0eb1432185fc94,
          mid_region_fbbc813f920b81d2,
          mid_regionEnd_20fbf7565993c3d7,
          mid_regionStart_20fbf7565993c3d7,
          mid_replaceAll_cb0eb1432185fc94,
          mid_replaceAll_774126d1a38fa926,
          mid_replaceFirst_cb0eb1432185fc94,
          mid_replaceFirst_774126d1a38fa926,
          mid_requireEnd_947277eca0748c4e,
          mid_reset_920c899571b0dcfb,
          mid_reset_e5e520b19b5b43f2,
          mid_start_20fbf7565993c3d7,
          mid_start_3f230d713d7fd2b0,
          mid_start_3c9bba330f083871,
          mid_toMatchResult_695d87f98db91a62,
          mid_toString_09a7afff1868fc5e,
          mid_useAnchoringBounds_8c6d9e53f22c1d26,
          mid_usePattern_60e71b059d0fcf1f,
          mid_useTransparentBounds_8c6d9e53f22c1d26,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Matcher(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Matcher(const Matcher& obj) : ::java::lang::Object(obj) {}

        Matcher appendReplacement(const ::java::lang::StringBuffer &, const ::java::lang::String &) const;
        Matcher appendReplacement(const ::java::lang::StringBuilder &, const ::java::lang::String &) const;
        ::java::lang::StringBuffer appendTail(const ::java::lang::StringBuffer &) const;
        ::java::lang::StringBuilder appendTail(const ::java::lang::StringBuilder &) const;
        jint end() const;
        jint end(const ::java::lang::String &) const;
        jint end(jint) const;
        jboolean find() const;
        jboolean find(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(const ::java::lang::String &) const;
        ::java::lang::String group(jint) const;
        jint groupCount() const;
        jboolean hasAnchoringBounds() const;
        jboolean hasMatch() const;
        jboolean hasTransparentBounds() const;
        jboolean hitEnd() const;
        jboolean lookingAt() const;
        jboolean matches() const;
        ::java::util::Map namedGroups() const;
        ::java::util::regex::Pattern pattern() const;
        static ::java::lang::String quoteReplacement(const ::java::lang::String &);
        Matcher region(jint, jint) const;
        jint regionEnd() const;
        jint regionStart() const;
        ::java::lang::String replaceAll(const ::java::lang::String &) const;
        ::java::lang::String replaceAll(const ::java::util::function::Function &) const;
        ::java::lang::String replaceFirst(const ::java::lang::String &) const;
        ::java::lang::String replaceFirst(const ::java::util::function::Function &) const;
        jboolean requireEnd() const;
        Matcher reset() const;
        Matcher reset(const ::java::lang::CharSequence &) const;
        jint start() const;
        jint start(const ::java::lang::String &) const;
        jint start(jint) const;
        ::java::util::regex::MatchResult toMatchResult() const;
        ::java::lang::String toString() const;
        Matcher useAnchoringBounds(jboolean) const;
        Matcher usePattern(const ::java::util::regex::Pattern &) const;
        Matcher useTransparentBounds(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(Matcher);
      extern PyTypeObject *PY_TYPE(Matcher);

      class t_Matcher {
      public:
        PyObject_HEAD
        Matcher object;
        static PyObject *wrap_Object(const Matcher&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
