#ifndef java_util_Locale$LanguageRange_H
#define java_util_Locale$LanguageRange_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Locale$LanguageRange;
    class List;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$LanguageRange : public ::java::lang::Object {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_dbeaa7d1faf6f28f,
        mid_equals_00d17418847797d4,
        mid_getRange_e7df854526d67fa3,
        mid_getWeight_6fb37e123fed7a1f,
        mid_hashCode_bd89ce15dad49192,
        mid_mapEquivalents_d0985dbb3cbb545d,
        mid_parse_49920ced44282529,
        mid_parse_c33a1e6288ea2f25,
        mid_toString_e7df854526d67fa3,
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
