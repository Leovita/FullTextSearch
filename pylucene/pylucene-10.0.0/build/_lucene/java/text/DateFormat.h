#ifndef java_text_DateFormat_H
#define java_text_DateFormat_H

#include "java/text/Format.h"

namespace java {
  namespace text {
    class DateFormat;
    class NumberFormat;
  }
  namespace lang {
    class Object;
    class Class;
    class StringBuffer;
    class String;
  }
  namespace util {
    class TimeZone;
    class Calendar;
    class Date;
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DateFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_4819806f62f1360a,
        mid_equals_00d17418847797d4,
        mid_format_7bbd627d8305531a,
        mid_getAvailableLocales_0daa090ed7228b3c,
        mid_getCalendar_8ef7c49dee6fc64b,
        mid_getDateInstance_b86251f405a3f3c2,
        mid_getDateInstance_82f9da20dd43cdae,
        mid_getDateInstance_a6252423eb93015b,
        mid_getDateTimeInstance_b86251f405a3f3c2,
        mid_getDateTimeInstance_be3378ec0ad11e19,
        mid_getDateTimeInstance_4f98c3e670a2510b,
        mid_getInstance_b86251f405a3f3c2,
        mid_getNumberFormat_cae2d46e75202e5c,
        mid_getTimeInstance_b86251f405a3f3c2,
        mid_getTimeInstance_82f9da20dd43cdae,
        mid_getTimeInstance_a6252423eb93015b,
        mid_getTimeZone_f0ab2fb84439b1af,
        mid_hashCode_bd89ce15dad49192,
        mid_isLenient_9aa4f33e82ea333f,
        mid_parse_89d3a451a60180c0,
        mid_setCalendar_85726a939d696ed2,
        mid_setLenient_f5dd97eebf6a215a,
        mid_setNumberFormat_72e1e9475236c1c8,
        mid_setTimeZone_6bae4ff1843f5310,
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
