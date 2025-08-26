#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace util {
    class TimeZone;
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

    class TimeZone : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        mid_getAvailableIDs_970db9a2a49d840f,
        mid_getAvailableIDs_f202269f1bcafd9e,
        mid_getDSTSavings_bd89ce15dad49192,
        mid_getDefault_f0ab2fb84439b1af,
        mid_getDisplayName_e7df854526d67fa3,
        mid_getDisplayName_dce821ed97c0e930,
        mid_getDisplayName_ec5361b8302e40f6,
        mid_getDisplayName_f290cec03fd6b656,
        mid_getID_e7df854526d67fa3,
        mid_getOffset_7af44747c1921bd4,
        mid_getOffset_c30deefc63f6d14a,
        mid_getRawOffset_bd89ce15dad49192,
        mid_getTimeZone_f0c163a58c11c785,
        mid_hasSameRules_1838a77d662287fa,
        mid_inDaylightTime_0bce8db5eb92d133,
        mid_observesDaylightTime_9aa4f33e82ea333f,
        mid_setDefault_6bae4ff1843f5310,
        mid_setID_ee46a189998009d6,
        mid_setRawOffset_8226bd0b0fc13dba,
        mid_useDaylightTime_9aa4f33e82ea333f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TimeZone(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TimeZone(const TimeZone& obj) : ::java::lang::Object(obj) {}

      static jint LONG;
      static jint SHORT;

      TimeZone();

      ::java::lang::Object clone() const;
      static JArray< ::java::lang::String > getAvailableIDs();
      static JArray< ::java::lang::String > getAvailableIDs(jint);
      jint getDSTSavings() const;
      static TimeZone getDefault();
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      ::java::lang::String getDisplayName(jboolean, jint) const;
      ::java::lang::String getDisplayName(jboolean, jint, const ::java::util::Locale &) const;
      ::java::lang::String getID() const;
      jint getOffset(jlong) const;
      jint getOffset(jint, jint, jint, jint, jint, jint) const;
      jint getRawOffset() const;
      static TimeZone getTimeZone(const ::java::lang::String &);
      jboolean hasSameRules(const TimeZone &) const;
      jboolean inDaylightTime(const ::java::util::Date &) const;
      jboolean observesDaylightTime() const;
      static void setDefault(const TimeZone &);
      void setID(const ::java::lang::String &) const;
      void setRawOffset(jint) const;
      jboolean useDaylightTime() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TimeZone);
    extern PyTypeObject *PY_TYPE(TimeZone);

    class t_TimeZone {
    public:
      PyObject_HEAD
      TimeZone object;
      static PyObject *wrap_Object(const TimeZone&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
