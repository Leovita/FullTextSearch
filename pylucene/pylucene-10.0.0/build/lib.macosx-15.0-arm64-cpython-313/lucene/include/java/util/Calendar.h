#ifndef java_util_Calendar_H
#define java_util_Calendar_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Integer;
    class Class;
    class String;
    class Cloneable;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Set;
    class Calendar;
    class Date;
    class TimeZone;
    class Locale;
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Calendar : public ::java::lang::Object {
     public:
      enum {
        mid_add_e13cff512ebda969,
        mid_after_570b5248a6da3ef6,
        mid_before_570b5248a6da3ef6,
        mid_clear_3720c61b0679eb3e,
        mid_clear_540b2b23d51b1efd,
        mid_clone_5655ed8670534604,
        mid_compareTo_fc1015d9a72fb3f2,
        mid_equals_570b5248a6da3ef6,
        mid_get_3c9bba330f083871,
        mid_getActualMaximum_3c9bba330f083871,
        mid_getActualMinimum_3c9bba330f083871,
        mid_getAvailableCalendarTypes_4df174295554d7bd,
        mid_getAvailableLocales_3d06acbf6689fb6c,
        mid_getCalendarType_09a7afff1868fc5e,
        mid_getDisplayName_71dfc9f9246f2143,
        mid_getDisplayNames_12694bf4b31d620e,
        mid_getFirstDayOfWeek_20fbf7565993c3d7,
        mid_getGreatestMinimum_3c9bba330f083871,
        mid_getInstance_68b1de69c25d64fe,
        mid_getInstance_cad38beac82a8daf,
        mid_getInstance_3e6930141b1ce596,
        mid_getInstance_6875b19ce2231950,
        mid_getLeastMaximum_3c9bba330f083871,
        mid_getMaximum_3c9bba330f083871,
        mid_getMinimalDaysInFirstWeek_20fbf7565993c3d7,
        mid_getMinimum_3c9bba330f083871,
        mid_getTime_b1a29ae88bce8845,
        mid_getTimeInMillis_16939d9d0a9a9721,
        mid_getTimeZone_1559a29f5a26b141,
        mid_getWeekYear_20fbf7565993c3d7,
        mid_getWeeksInWeekYear_20fbf7565993c3d7,
        mid_hashCode_20fbf7565993c3d7,
        mid_isLenient_947277eca0748c4e,
        mid_isSet_ae22d3a856ad56f1,
        mid_isWeekDateSupported_947277eca0748c4e,
        mid_roll_2936d2706a18a684,
        mid_roll_e13cff512ebda969,
        mid_set_e13cff512ebda969,
        mid_set_20022b6d5e83c732,
        mid_set_72ee9ac0ab46178d,
        mid_set_17f4c98262ae0176,
        mid_setFirstDayOfWeek_540b2b23d51b1efd,
        mid_setLenient_b110fc3a58c081ab,
        mid_setMinimalDaysInFirstWeek_540b2b23d51b1efd,
        mid_setTime_73ec58a0e10908e8,
        mid_setTimeInMillis_8b3d46852b435a94,
        mid_setTimeZone_1bdebe6495070eda,
        mid_setWeekDate_20022b6d5e83c732,
        mid_toString_09a7afff1868fc5e,
        mid_computeFields_3720c61b0679eb3e,
        mid_complete_3720c61b0679eb3e,
        mid_internalGet_3c9bba330f083871,
        mid_computeTime_3720c61b0679eb3e,
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
