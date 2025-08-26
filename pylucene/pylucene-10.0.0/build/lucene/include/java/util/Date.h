#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class String;
    class Class;
    class Comparable;
  }
  namespace util {
    class Date;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_init$_1d3149fac12f2af3,
        mid_init$_eee637a6cebc299b,
        mid_init$_5c6dd1f9c6fe9da0,
        mid_init$_59bee586f916c4bf,
        mid_UTC_8f185f69ca64de06,
        mid_after_0bce8db5eb92d133,
        mid_before_0bce8db5eb92d133,
        mid_clone_4819806f62f1360a,
        mid_compareTo_0cbe93a7ea9e59cd,
        mid_equals_00d17418847797d4,
        mid_getDate_bd89ce15dad49192,
        mid_getDay_bd89ce15dad49192,
        mid_getHours_bd89ce15dad49192,
        mid_getMinutes_bd89ce15dad49192,
        mid_getMonth_bd89ce15dad49192,
        mid_getSeconds_bd89ce15dad49192,
        mid_getTime_0f176418e3e16541,
        mid_getTimezoneOffset_bd89ce15dad49192,
        mid_getYear_bd89ce15dad49192,
        mid_hashCode_bd89ce15dad49192,
        mid_parse_490f1686ea1cfda6,
        mid_setDate_8226bd0b0fc13dba,
        mid_setHours_8226bd0b0fc13dba,
        mid_setMinutes_8226bd0b0fc13dba,
        mid_setMonth_8226bd0b0fc13dba,
        mid_setSeconds_8226bd0b0fc13dba,
        mid_setTime_1d3149fac12f2af3,
        mid_setYear_8226bd0b0fc13dba,
        mid_toGMTString_e7df854526d67fa3,
        mid_toLocaleString_e7df854526d67fa3,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Date(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Date(const Date& obj) : ::java::lang::Object(obj) {}

      Date();
      Date(const ::java::lang::String &);
      Date(jlong);
      Date(jint, jint, jint);
      Date(jint, jint, jint, jint, jint);
      Date(jint, jint, jint, jint, jint, jint);

      static jlong UTC(jint, jint, jint, jint, jint, jint);
      jboolean after(const Date &) const;
      jboolean before(const Date &) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Date &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint getDate() const;
      jint getDay() const;
      jint getHours() const;
      jint getMinutes() const;
      jint getMonth() const;
      jint getSeconds() const;
      jlong getTime() const;
      jint getTimezoneOffset() const;
      jint getYear() const;
      jint hashCode() const;
      static jlong parse(const ::java::lang::String &);
      void setDate(jint) const;
      void setHours(jint) const;
      void setMinutes(jint) const;
      void setMonth(jint) const;
      void setSeconds(jint) const;
      void setTime(jlong) const;
      void setYear(jint) const;
      ::java::lang::String toGMTString() const;
      ::java::lang::String toLocaleString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Date);
    extern PyTypeObject *PY_TYPE(Date);

    class t_Date {
    public:
      PyObject_HEAD
      Date object;
      static PyObject *wrap_Object(const Date&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
