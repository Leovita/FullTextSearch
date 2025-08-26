#ifndef java_util_regex_MatchResult_H
#define java_util_regex_MatchResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Integer;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class MatchResult : public ::java::lang::Object {
       public:
        enum {
          mid_end_bd89ce15dad49192,
          mid_end_fa2a6f298bd618ab,
          mid_end_a3904e10f5bb9437,
          mid_group_e7df854526d67fa3,
          mid_group_fef9c036acf290a9,
          mid_group_0da8f0b89b1e9a22,
          mid_groupCount_bd89ce15dad49192,
          mid_hasMatch_9aa4f33e82ea333f,
          mid_namedGroups_5004bdf19ed33453,
          mid_start_bd89ce15dad49192,
          mid_start_fa2a6f298bd618ab,
          mid_start_a3904e10f5bb9437,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MatchResult(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MatchResult(const MatchResult& obj) : ::java::lang::Object(obj) {}

        jint end() const;
        jint end(const ::java::lang::String &) const;
        jint end(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(const ::java::lang::String &) const;
        ::java::lang::String group(jint) const;
        jint groupCount() const;
        jboolean hasMatch() const;
        ::java::util::Map namedGroups() const;
        jint start() const;
        jint start(const ::java::lang::String &) const;
        jint start(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(MatchResult);
      extern PyTypeObject *PY_TYPE(MatchResult);

      class t_MatchResult {
      public:
        PyObject_HEAD
        MatchResult object;
        static PyObject *wrap_Object(const MatchResult&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
