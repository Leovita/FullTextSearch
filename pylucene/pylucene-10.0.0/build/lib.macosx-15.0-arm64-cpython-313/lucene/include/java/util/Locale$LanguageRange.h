#ifndef java_util_Locale$LanguageRange_H
#define java_util_Locale$LanguageRange_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Locale$LanguageRange;
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$LanguageRange : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_8c2de08a6e50677a,
        mid_equals_570b5248a6da3ef6,
        mid_getRange_09a7afff1868fc5e,
        mid_getWeight_32caabaad86c508b,
        mid_hashCode_20fbf7565993c3d7,
        mid_mapEquivalents_2c0cc6d9d32f8d13,
        mid_parse_8eaa545bb5a79de3,
        mid_parse_ed146b476e1c55d3,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale$LanguageRange(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale$LanguageRange(const Locale$LanguageRange& obj) : ::java::lang::Object(obj) {}

      static jdouble MAX_WEIGHT;
      static jdouble MIN_WEIGHT;

      Locale$LanguageRange(const ::java::lang::String &);
      Locale$LanguageRange(const ::java::lang::String &, jdouble);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getRange() const;
      jdouble getWeight() const;
      jint hashCode() const;
      static ::java::util::List mapEquivalents(const ::java::util::List &, const ::java::util::Map &);
      static ::java::util::List parse(const ::java::lang::String &);
      static ::java::util::List parse(const ::java::lang::String &, const ::java::util::Map &);
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale$LanguageRange);
    extern PyTypeObject *PY_TYPE(Locale$LanguageRange);

    class t_Locale$LanguageRange {
    public:
      PyObject_HEAD
      Locale$LanguageRange object;
      static PyObject *wrap_Object(const Locale$LanguageRange&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
