#ifndef java_lang_Thread$Builder$OfPlatform_H
#define java_lang_Thread$Builder$OfPlatform_H

#include "java/lang/Thread$Builder.h"

namespace java {
  namespace lang {
    class Thread$UncaughtExceptionHandler;
    class Class;
    class String;
    class Thread$Builder$OfPlatform;
    class ThreadGroup;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$Builder$OfPlatform : public ::java::lang::Thread$Builder {
     public:
      enum {
        mid_daemon_abbe535f37b5a2fb,
        mid_daemon_d360c26432edbddd,
        mid_group_c0c275e769078d1f,
        mid_inheritInheritableThreadLocals_d360c26432edbddd,
        mid_name_3fca8fa3e9176d1e,
        mid_name_087d566fdf390afa,
        mid_priority_4993735a1dd87da9,
        mid_stackSize_3ca5a5ff49d385a1,
        mid_uncaughtExceptionHandler_ca63e70f2a264d1f,
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
