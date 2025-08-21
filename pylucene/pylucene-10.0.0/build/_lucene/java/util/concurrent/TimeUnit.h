#ifndef java_util_concurrent_TimeUnit_H
#define java_util_concurrent_TimeUnit_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class InterruptedException;
    class Object;
    class Thread;
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
          mid_convert_b03dd86996641c52,
          mid_sleep_8b3d46852b435a94,
          mid_timedJoin_2684eb5d50ad0d08,
          mid_timedWait_9ac1fb76fd0532e9,
          mid_toDays_91d66fa3ea476cea,
          mid_toHours_91d66fa3ea476cea,
          mid_toMicros_91d66fa3ea476cea,
          mid_toMillis_91d66fa3ea476cea,
          mid_toMinutes_91d66fa3ea476cea,
          mid_toNanos_91d66fa3ea476cea,
          mid_toSeconds_91d66fa3ea476cea,
          mid_valueOf_2d9c77b2816f2eed,
          mid_values_1e07006e5a7d8669,
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
