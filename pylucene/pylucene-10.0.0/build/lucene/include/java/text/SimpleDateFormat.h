#ifndef java_text_SimpleDateFormat_H
#define java_text_SimpleDateFormat_H

#include "java/text/DateFormat.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class StringBuffer;
    class String;
  }
  namespace util {
    class Date;
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class SimpleDateFormat : public ::java::text::DateFormat {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_init$_b47155e534e0cae9,
        mid_applyLocalizedPattern_ee46a189998009d6,
        mid_applyPattern_ee46a189998009d6,
        mid_clone_4819806f62f1360a,
        mid_equals_00d17418847797d4,
        mid_get2DigitYearStart_249cf4b57f672fa8,
        mid_hashCode_bd89ce15dad49192,
        mid_set2DigitYearStart_f2e9215b4fe15a2c,
        mid_toLocalizedPattern_e7df854526d67fa3,
        mid_toPattern_e7df854526d67fa3,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SimpleDateFormat(jobject obj) : ::java::text::DateFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SimpleDateFormat(const SimpleDateFormat& obj) : ::java::text::DateFormat(obj) {}

      SimpleDateFormat();
      SimpleDateFormat(const ::java::lang::String &);
      SimpleDateFormat(const ::java::lang::String &, const ::java::util::Locale &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Date get2DigitYearStart() const;
      jint hashCode() const;
      void set2DigitYearStart(const ::java::util::Date &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(SimpleDateFormat);
    extern PyTypeObject *PY_TYPE(SimpleDateFormat);

    class t_SimpleDateFormat {
    public:
      PyObject_HEAD
      SimpleDateFormat object;
      static PyObject *wrap_Object(const SimpleDateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
