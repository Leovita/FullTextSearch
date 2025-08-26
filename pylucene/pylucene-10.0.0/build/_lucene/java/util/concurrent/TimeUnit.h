#ifndef java_util_concurrent_TimeUnit_H
#define java_util_concurrent_TimeUnit_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Object;
    class Thread;
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class TimeUnit : public ::java::lang::Enum {
       public:
        enum {
          mid_convert_f9c358b4d712c565,
          mid_sleep_1d3149fac12f2af3,
          mid_timedJoin_276ef49abb624c7c,
          mid_timedWait_8076b21839806c1f,
          mid_toDays_3dc1c6e3a5a0baf0,
          mid_toHours_3dc1c6e3a5a0baf0,
          mid_toMicros_3dc1c6e3a5a0baf0,
          mid_toMillis_3dc1c6e3a5a0baf0,
          mid_toMinutes_3dc1c6e3a5a0baf0,
          mid_toNanos_3dc1c6e3a5a0baf0,
          mid_toSeconds_3dc1c6e3a5a0baf0,
          mid_valueOf_19f8ff1eb6940827,
          mid_values_ad637d9da4430d50,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeUnit(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeUnit(const TimeUnit& obj) : ::java::lang::Enum(obj) {}

        static TimeUnit *DAYS;
        static TimeUnit *HOURS;
        static TimeUnit *MICROSECONDS;
        static TimeUnit *MILLISECONDS;
        static TimeUnit *MINUTES;
        static TimeUnit *NANOSECONDS;
        static TimeUnit *SECONDS;

        jlong convert(jlong, const TimeUnit &) const;
        void sleep(jlong) const;
        void timedJoin(const ::java::lang::Thread &, jlong) const;
        void timedWait(const ::java::lang::Object &, jlong) const;
        jlong toDays(jlong) const;
        jlong toHours(jlong) const;
        jlong toMicros(jlong) const;
        jlong toMillis(jlong) const;
        jlong toMinutes(jlong) const;
        jlong toNanos(jlong) const;
        jlong toSeconds(jlong) const;
        static TimeUnit valueOf(const ::java::lang::String &);
        static JArray< TimeUnit > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(TimeUnit);
      extern PyTypeObject *PY_TYPE(TimeUnit);

      class t_TimeUnit {
      public:
        PyObject_HEAD
        TimeUnit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeUnit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeUnit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeUnit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
