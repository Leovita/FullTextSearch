#ifndef java_lang_Thread$Builder$OfPlatform_H
#define java_lang_Thread$Builder$OfPlatform_H

#include "java/lang/Thread$Builder.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Thread$UncaughtExceptionHandler;
    class Class;
    class Thread$Builder$OfPlatform;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$Builder$OfPlatform : public ::java::lang::Thread$Builder {
     public:
      enum {
        mid_daemon_739623f8c58a1e28,
        mid_daemon_ef3d7240f52bfcdb,
        mid_group_a83e33c0552ae788,
        mid_inheritInheritableThreadLocals_ef3d7240f52bfcdb,
        mid_name_ac111cc6f685f75d,
        mid_name_971066cd2d40423f,
        mid_priority_c09b3ea55f043abe,
        mid_stackSize_2acfd982bae6c92e,
        mid_uncaughtExceptionHandler_5130ed6b1adbe606,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread$Builder$OfPlatform(jobject obj) : ::java::lang::Thread$Builder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread$Builder$OfPlatform(const Thread$Builder$OfPlatform& obj) : ::java::lang::Thread$Builder(obj) {}

      Thread$Builder$OfPlatform daemon() const;
      Thread$Builder$OfPlatform daemon(jboolean) const;
      Thread$Builder$OfPlatform group(const ::java::lang::ThreadGroup &) const;
      Thread$Builder$OfPlatform inheritInheritableThreadLocals(jboolean) const;
      Thread$Builder$OfPlatform name(const ::java::lang::String &) const;
      Thread$Builder$OfPlatform name(const ::java::lang::String &, jlong) const;
      Thread$Builder$OfPlatform priority(jint) const;
      Thread$Builder$OfPlatform stackSize(jlong) const;
      Thread$Builder$OfPlatform uncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread$Builder$OfPlatform);
    extern PyTypeObject *PY_TYPE(Thread$Builder$OfPlatform);

    class t_Thread$Builder$OfPlatform {
    public:
      PyObject_HEAD
      Thread$Builder$OfPlatform object;
      static PyObject *wrap_Object(const Thread$Builder$OfPlatform&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
