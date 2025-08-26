#ifndef java_util_Calendar_H
#define java_util_Calendar_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class Integer;
    class Comparable;
  }
  namespace util {
    class Calendar;
    class TimeZone;
    class Set;
    class Map;
    class Date;
    class Locale;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Calendar : public ::java::lang::Object {
     public:
      enum {
        mid_add_645c25455f5b9b1c,
        mid_after_00d17418847797d4,
        mid_before_00d17418847797d4,
        mid_clear_e7bdbe105ce1bafb,
        mid_clear_8226bd0b0fc13dba,
        mid_clone_4819806f62f1360a,
        mid_compareTo_57091670b677b572,
        mid_equals_00d17418847797d4,
        mid_get_a3904e10f5bb9437,
        mid_getActualMaximum_a3904e10f5bb9437,
        mid_getActualMinimum_a3904e10f5bb9437,
        mid_getAvailableCalendarTypes_79131c6bbcf08916,
        mid_getAvailableLocales_0daa090ed7228b3c,
        mid_getCalendarType_e7df854526d67fa3,
        mid_getDisplayName_78024c093619088e,
        mid_getDisplayNames_bb83de3fc948cac8,
        mid_getFirstDayOfWeek_bd89ce15dad49192,
        mid_getGreatestMinimum_a3904e10f5bb9437,
        mid_getInstance_8ef7c49dee6fc64b,
        mid_getInstance_0f4853a7903feae4,
        mid_getInstance_ea67d832889969e2,
        mid_getInstance_f9f44e279c723795,
        mid_getLeastMaximum_a3904e10f5bb9437,
        mid_getMaximum_a3904e10f5bb9437,
        mid_getMinimalDaysInFirstWeek_bd89ce15dad49192,
        mid_getMinimum_a3904e10f5bb9437,
        mid_getTime_249cf4b57f672fa8,
        mid_getTimeInMillis_0f176418e3e16541,
        mid_getTimeZone_f0ab2fb84439b1af,
        mid_getWeekYear_bd89ce15dad49192,
        mid_getWeeksInWeekYear_bd89ce15dad49192,
        mid_hashCode_bd89ce15dad49192,
        mid_isLenient_9aa4f33e82ea333f,
        mid_isSet_a8281eb3b9d9672d,
        mid_isWeekDateSupported_9aa4f33e82ea333f,
        mid_roll_a0fed0a2cd38e7b1,
        mid_roll_645c25455f5b9b1c,
        mid_set_645c25455f5b9b1c,
        mid_set_eee637a6cebc299b,
        mid_set_5c6dd1f9c6fe9da0,
        mid_set_59bee586f916c4bf,
        mid_setFirstDayOfWeek_8226bd0b0fc13dba,
        mid_setLenient_f5dd97eebf6a215a,
        mid_setMinimalDaysInFirstWeek_8226bd0b0fc13dba,
        mid_setTime_f2e9215b4fe15a2c,
        mid_setTimeInMillis_1d3149fac12f2af3,
        mid_setTimeZone_6bae4ff1843f5310,
        mid_setWeekDate_eee637a6cebc299b,
        mid_toString_e7df854526d67fa3,
        mid_computeFields_e7bdbe105ce1bafb,
        mid_complete_e7bdbe105ce1bafb,
        mid_internalGet_a3904e10f5bb9437,
        mid_computeTime_e7bdbe105ce1bafb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Calendar(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Calendar(const Calendar& obj) : ::java::lang::Object(obj) {}

      static jint ALL_STYLES;
      static jint AM;
      static jint AM_PM;
      static jint APRIL;
      static jint AUGUST;
      static jint DATE;
      static jint DAY_OF_MONTH;
      static jint DAY_OF_WEEK;
      static jint DAY_OF_WEEK_IN_MONTH;
      static jint DAY_OF_YEAR;
      static jint DECEMBER;
      static jint DST_OFFSET;
      static jint ERA;
      static jint FEBRUARY;
      static jint FIELD_COUNT;
      static jint FRIDAY;
      static jint HOUR;
      static jint HOUR_OF_DAY;
      static jint JANUARY;
      static jint JULY;
      static jint JUNE;
      static jint LONG;
      static jint LONG_FORMAT;
      static jint LONG_STANDALONE;
      static jint MARCH;
      static jint MAY;
      static jint MILLISECOND;
      static jint MINUTE;
      static jint MONDAY;
      static jint MONTH;
      static jint NARROW_FORMAT;
      static jint NARROW_STANDALONE;
      static jint NOVEMBER;
      static jint OCTOBER;
      static jint PM;
      static jint SATURDAY;
      static jint SECOND;
      static jint SEPTEMBER;
      static jint SHORT;
      static jint SHORT_FORMAT;
      static jint SHORT_STANDALONE;
      static jint SUNDAY;
      static jint THURSDAY;
      static jint TUESDAY;
      static jint UNDECIMBER;
      static jint WEDNESDAY;
      static jint WEEK_OF_MONTH;
      static jint WEEK_OF_YEAR;
      static jint YEAR;
      static jint ZONE_OFFSET;

      void add(jint, jint) const;
      jboolean after(const ::java::lang::Object &) const;
      jboolean before(const ::java::lang::Object &) const;
      void clear() const;
      void clear(jint) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Calendar &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint get(jint) const;
      jint getActualMaximum(jint) const;
      jint getActualMinimum(jint) const;
      static ::java::util::Set getAvailableCalendarTypes();
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::lang::String getCalendarType() const;
      ::java::lang::String getDisplayName(jint, jint, const ::java::util::Locale &) const;
      ::java::util::Map getDisplayNames(jint, jint, const ::java::util::Locale &) const;
      jint getFirstDayOfWeek() const;
      jint getGreatestMinimum(jint) const;
      static Calendar getInstance();
      static Calendar getInstance(const ::java::util::Locale &);
      static Calendar getInstance(const ::java::util::TimeZone &);
      static Calendar getInstance(const ::java::util::TimeZone &, const ::java::util::Locale &);
      jint getLeastMaximum(jint) const;
      jint getMaximum(jint) const;
      jint getMinimalDaysInFirstWeek() const;
      jint getMinimum(jint) const;
      ::java::util::Date getTime() const;
      jlong getTimeInMillis() const;
      ::java::util::TimeZone getTimeZone() const;
      jint getWeekYear() const;
      jint getWeeksInWeekYear() const;
      jint hashCode() const;
      jboolean isLenient() const;
      jboolean isSet(jint) const;
      jboolean isWeekDateSupported() const;
      void roll(jint, jboolean) const;
      void roll(jint, jint) const;
      void set(jint, jint) const;
      void set(jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint, jint) const;
      void setFirstDayOfWeek(jint) const;
      void setLenient(jboolean) const;
      void setMinimalDaysInFirstWeek(jint) const;
      void setTime(const ::java::util::Date &) const;
      void setTimeInMillis(jlong) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
      void setWeekDate(jint, jint, jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Calendar);
    extern PyTypeObject *PY_TYPE(Calendar);

    class t_Calendar {
    public:
      PyObject_HEAD
      Calendar object;
      static PyObject *wrap_Object(const Calendar&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
