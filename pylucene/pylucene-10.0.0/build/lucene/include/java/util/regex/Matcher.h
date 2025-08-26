#ifndef java_util_regex_Matcher_H
#define java_util_regex_Matcher_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace regex {
      class Pattern;
      class MatchResult;
      class Matcher;
    }
    namespace function {
      class Function;
    }
    class Map;
  }
  namespace lang {
    class Class;
    class Integer;
    class StringBuilder;
    class StringBuffer;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Matcher : public ::java::lang::Object {
       public:
        enum {
          mid_appendReplacement_99955ab0c5af1eab,
          mid_appendReplacement_91c412f478551ec7,
          mid_appendTail_76fc42b08f085b47,
          mid_appendTail_bd631ed635644f83,
          mid_end_bd89ce15dad49192,
          mid_end_fa2a6f298bd618ab,
          mid_end_a3904e10f5bb9437,
          mid_find_9aa4f33e82ea333f,
          mid_find_a8281eb3b9d9672d,
          mid_group_e7df854526d67fa3,
          mid_group_fef9c036acf290a9,
          mid_group_0da8f0b89b1e9a22,
          mid_groupCount_bd89ce15dad49192,
          mid_hasAnchoringBounds_9aa4f33e82ea333f,
          mid_hasMatch_9aa4f33e82ea333f,
          mid_hasTransparentBounds_9aa4f33e82ea333f,
          mid_hitEnd_9aa4f33e82ea333f,
          mid_lookingAt_9aa4f33e82ea333f,
          mid_matches_9aa4f33e82ea333f,
          mid_namedGroups_5004bdf19ed33453,
          mid_pattern_9bea244ff732f2bf,
          mid_quoteReplacement_fef9c036acf290a9,
          mid_region_4a95211ba4c7f3ac,
          mid_regionEnd_bd89ce15dad49192,
          mid_regionStart_bd89ce15dad49192,
          mid_replaceAll_fef9c036acf290a9,
          mid_replaceAll_098d889549d98309,
          mid_replaceFirst_fef9c036acf290a9,
          mid_replaceFirst_098d889549d98309,
          mid_requireEnd_9aa4f33e82ea333f,
          mid_reset_9aeaf75b1f29e4b6,
          mid_reset_72bbaf25449cb62b,
          mid_start_bd89ce15dad49192,
          mid_start_fa2a6f298bd618ab,
          mid_start_a3904e10f5bb9437,
          mid_toMatchResult_1c9d053b2e35bd7f,
          mid_toString_e7df854526d67fa3,
          mid_useAnchoringBounds_9cb24e1fca8cd422,
          mid_usePattern_f22cdcd3ec6aa84c,
          mid_useTransparentBounds_9cb24e1fca8cd422,
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
