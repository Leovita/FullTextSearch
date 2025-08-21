#ifndef java_util_regex_Pattern_H
#define java_util_regex_Pattern_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class CharSequence;
    class String;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    namespace regex {
      class Pattern;
      class Matcher;
    }
    namespace function {
      class Predicate;
    }
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Pattern : public ::java::lang::Object {
       public:
        enum {
          mid_asMatchPredicate_318ca0ecdce1a7dd,
          mid_asPredicate_318ca0ecdce1a7dd,
          mid_compile_cf4fb26bb648413d,
          mid_compile_0fcf29889a2e1675,
          mid_flags_20fbf7565993c3d7,
          mid_matcher_e5e520b19b5b43f2,
          mid_matches_0461d033ec410ffa,
          mid_namedGroups_f125f26c07a7bec8,
          mid_pattern_09a7afff1868fc5e,
          mid_quote_cb0eb1432185fc94,
          mid_split_257fbbf7cd228645,
          mid_split_622a9223fa621c56,
          mid_splitWithDelimiters_622a9223fa621c56,
          mid_toString_09a7afff1868fc5e,
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
