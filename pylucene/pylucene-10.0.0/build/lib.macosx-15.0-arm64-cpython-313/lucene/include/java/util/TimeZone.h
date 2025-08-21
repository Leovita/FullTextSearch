#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Date;
    class TimeZone;
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class TimeZone : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        mid_getAvailableIDs_6da8f3ea65e22733,
        mid_getAvailableIDs_def776e128cea4f0,
        mid_getDSTSavings_20fbf7565993c3d7,
        mid_getDefault_1559a29f5a26b141,
        mid_getDisplayName_09a7afff1868fc5e,
        mid_getDisplayName_d2a6991e8d2aa45a,
        mid_getDisplayName_375f06e41576bf2e,
        mid_getDisplayName_01390e1864a7c2ec,
        mid_getID_09a7afff1868fc5e,
        mid_getOffset_35c872f03f347c10,
        mid_getOffset_be67274b2b149c40,
        mid_getRawOffset_20fbf7565993c3d7,
        mid_getTimeZone_15e70f883e1c1184,
        mid_hasSameRules_ff2d335a1dbae76a,
        mid_inDaylightTime_dc12ee86820eaab2,
        mid_observesDaylightTime_947277eca0748c4e,
        mid_setDefault_1bdebe6495070eda,
        mid_setID_0d82408c6e55bc30,
        mid_setRawOffset_540b2b23d51b1efd,
        mid_useDaylightTime_947277eca0748c4e,
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
