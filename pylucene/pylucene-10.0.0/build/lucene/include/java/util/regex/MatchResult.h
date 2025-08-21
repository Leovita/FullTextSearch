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
          mid_end_20fbf7565993c3d7,
          mid_end_3f230d713d7fd2b0,
          mid_end_3c9bba330f083871,
          mid_group_09a7afff1868fc5e,
          mid_group_cb0eb1432185fc94,
          mid_group_cd8436557ab831f9,
          mid_groupCount_20fbf7565993c3d7,
          mid_hasMatch_947277eca0748c4e,
          mid_namedGroups_f125f26c07a7bec8,
          mid_start_20fbf7565993c3d7,
          mid_start_3f230d713d7fd2b0,
          mid_start_3c9bba330f083871,
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
