#ifndef java_text_DateFormat_H
#define java_text_DateFormat_H

#include "java/text/Format.h"

namespace java {
  namespace text {
    class DateFormat;
    class NumberFormat;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
    class StringBuffer;
  }
  namespace util {
    class Calendar;
    class Date;
    class TimeZone;
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DateFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_5655ed8670534604,
        mid_equals_570b5248a6da3ef6,
        mid_format_6872fafc13c061e8,
        mid_getAvailableLocales_3d06acbf6689fb6c,
        mid_getCalendar_68b1de69c25d64fe,
        mid_getDateInstance_81e71a68dca4ecea,
        mid_getDateInstance_aab7d128d73722b2,
        mid_getDateInstance_8adeeb5dd776311f,
        mid_getDateTimeInstance_81e71a68dca4ecea,
        mid_getDateTimeInstance_b3877a751b8f54e1,
        mid_getDateTimeInstance_628d4e33b77da134,
        mid_getInstance_81e71a68dca4ecea,
        mid_getNumberFormat_98badc23d3190d40,
        mid_getTimeInstance_81e71a68dca4ecea,
        mid_getTimeInstance_aab7d128d73722b2,
        mid_getTimeInstance_8adeeb5dd776311f,
        mid_getTimeZone_1559a29f5a26b141,
        mid_hashCode_20fbf7565993c3d7,
        mid_isLenient_947277eca0748c4e,
        mid_parse_4c0075e034f5faf2,
        mid_setCalendar_d3c8d765c49819d7,
        mid_setLenient_b110fc3a58c081ab,
        mid_setNumberFormat_810368e518bc5e16,
        mid_setTimeZone_1bdebe6495070eda,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DateFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DateFormat(const DateFormat& obj) : ::java::text::Format(obj) {}

      static jint AM_PM_FIELD;
      static jint DATE_FIELD;
      static jint DAY_OF_WEEK_FIELD;
      static jint DAY_OF_WEEK_IN_MONTH_FIELD;
      static jint DAY_OF_YEAR_FIELD;
      static jint DEFAULT;
      static jint ERA_FIELD;
      static jint FULL;
      static jint HOUR0_FIELD;
      static jint HOUR1_FIELD;
      static jint HOUR_OF_DAY0_FIELD;
      static jint HOUR_OF_DAY1_FIELD;
      static jint LONG;
      static jint MEDIUM;
      static jint MILLISECOND_FIELD;
      static jint MINUTE_FIELD;
      static jint MONTH_FIELD;
      static jint SECOND_FIELD;
      static jint SHORT;
      static jint TIMEZONE_FIELD;
      static jint WEEK_OF_MONTH_FIELD;
      static jint WEEK_OF_YEAR_FIELD;
      static jint YEAR_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(const ::java::util::Date &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Calendar getCalendar() const;
      static DateFormat getDateInstance();
      static DateFormat getDateInstance(jint);
      static DateFormat getDateInstance(jint, const ::java::util::Locale &);
      static DateFormat getDateTimeInstance();
      static DateFormat getDateTimeInstance(jint, jint);
      static DateFormat getDateTimeInstance(jint, jint, const ::java::util::Locale &);
      static DateFormat getInstance();
      ::java::text::NumberFormat getNumberFormat() const;
      static DateFormat getTimeInstance();
      static DateFormat getTimeInstance(jint);
      static DateFormat getTimeInstance(jint, const ::java::util::Locale &);
      ::java::util::TimeZone getTimeZone() const;
      jint hashCode() const;
      jboolean isLenient() const;
      ::java::util::Date parse(const ::java::lang::String &) const;
      void setCalendar(const ::java::util::Calendar &) const;
      void setLenient(jboolean) const;
      void setNumberFormat(const ::java::text::NumberFormat &) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DateFormat);
    extern PyTypeObject *PY_TYPE(DateFormat);

    class t_DateFormat {
    public:
      PyObject_HEAD
      DateFormat object;
      static PyObject *wrap_Object(const DateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
