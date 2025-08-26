#ifndef java_util_regex_Pattern_H
#define java_util_regex_Pattern_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    namespace regex {
      class Pattern;
      class Matcher;
    }
    class Map;
  }
  namespace lang {
    class String;
    class Class;
    class Integer;
    class CharSequence;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Pattern : public ::java::lang::Object {
       public:
        enum {
          mid_asMatchPredicate_e9ff27faf5d76fa6,
          mid_asPredicate_e9ff27faf5d76fa6,
          mid_compile_9ad9e44a0990c28d,
          mid_compile_d03ec2a162831e51,
          mid_flags_bd89ce15dad49192,
          mid_matcher_72bbaf25449cb62b,
          mid_matches_9bacd1fcaa09edd8,
          mid_namedGroups_5004bdf19ed33453,
          mid_pattern_e7df854526d67fa3,
          mid_quote_fef9c036acf290a9,
          mid_split_16a02646833e8c71,
          mid_split_436384155516ccac,
          mid_splitWithDelimiters_436384155516ccac,
          mid_toString_e7df854526d67fa3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Pattern(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Pattern(const Pattern& obj) : ::java::lang::Object(obj) {}

        static jint CANON_EQ;
        static jint CASE_INSENSITIVE;
        static jint COMMENTS;
        static jint DOTALL;
        static jint LITERAL;
        static jint MULTILINE;
        static jint UNICODE_CASE;
        static jint UNICODE_CHARACTER_CLASS;
        static jint UNIX_LINES;

        ::java::util::function::Predicate asMatchPredicate() const;
        ::java::util::function::Predicate asPredicate() const;
        static Pattern compile(const ::java::lang::String &);
        static Pattern compile(const ::java::lang::String &, jint);
        jint flags() const;
        ::java::util::regex::Matcher matcher(const ::java::lang::CharSequence &) const;
        static jboolean matches(const ::java::lang::String &, const ::java::lang::CharSequence &);
        ::java::util::Map namedGroups() const;
        ::java::lang::String pattern() const;
        static ::java::lang::String quote(const ::java::lang::String &);
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &, jint) const;
        JArray< ::java::lang::String > splitWithDelimiters(const ::java::lang::CharSequence &, jint) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(Pattern);
      extern PyTypeObject *PY_TYPE(Pattern);

      class t_Pattern {
      public:
        PyObject_HEAD
        Pattern object;
        static PyObject *wrap_Object(const Pattern&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
