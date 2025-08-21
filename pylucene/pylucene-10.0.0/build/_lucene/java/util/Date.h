#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Cloneable;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Date;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_8b3d46852b435a94,
        mid_init$_20022b6d5e83c732,
        mid_init$_72ee9ac0ab46178d,
        mid_init$_17f4c98262ae0176,
        mid_UTC_8ab9692a34eeff70,
        mid_after_dc12ee86820eaab2,
        mid_before_dc12ee86820eaab2,
        mid_clone_5655ed8670534604,
        mid_compareTo_9f04fb5e157f895d,
        mid_equals_570b5248a6da3ef6,
        mid_getDate_20fbf7565993c3d7,
        mid_getDay_20fbf7565993c3d7,
        mid_getHours_20fbf7565993c3d7,
        mid_getMinutes_20fbf7565993c3d7,
        mid_getMonth_20fbf7565993c3d7,
        mid_getSeconds_20fbf7565993c3d7,
        mid_getTime_16939d9d0a9a9721,
        mid_getTimezoneOffset_20fbf7565993c3d7,
        mid_getYear_20fbf7565993c3d7,
        mid_hashCode_20fbf7565993c3d7,
        mid_parse_e942a6f864c95ca0,
        mid_setDate_540b2b23d51b1efd,
        mid_setHours_540b2b23d51b1efd,
        mid_setMinutes_540b2b23d51b1efd,
        mid_setMonth_540b2b23d51b1efd,
        mid_setSeconds_540b2b23d51b1efd,
        mid_setTime_8b3d46852b435a94,
        mid_setYear_540b2b23d51b1efd,
        mid_toGMTString_09a7afff1868fc5e,
        mid_toLocaleString_09a7afff1868fc5e,
        mid_toString_09a7afff1868fc5e,
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
