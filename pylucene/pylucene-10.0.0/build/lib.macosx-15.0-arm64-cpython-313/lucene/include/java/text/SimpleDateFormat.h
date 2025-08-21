#ifndef java_text_SimpleDateFormat_H
#define java_text_SimpleDateFormat_H

#include "java/text/DateFormat.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
    class StringBuffer;
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
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_736dcd11e1324201,
        mid_applyLocalizedPattern_0d82408c6e55bc30,
        mid_applyPattern_0d82408c6e55bc30,
        mid_clone_5655ed8670534604,
        mid_equals_570b5248a6da3ef6,
        mid_get2DigitYearStart_b1a29ae88bce8845,
        mid_hashCode_20fbf7565993c3d7,
        mid_set2DigitYearStart_73ec58a0e10908e8,
        mid_toLocalizedPattern_09a7afff1868fc5e,
        mid_toPattern_09a7afff1868fc5e,
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
