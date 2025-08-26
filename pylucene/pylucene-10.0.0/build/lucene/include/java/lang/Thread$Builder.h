#ifndef java_lang_Thread$Builder_H
#define java_lang_Thread$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Thread$Builder;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class Thread;
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class ThreadFactory;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$Builder : public ::java::lang::Object {
     public:
      enum {
        mid_factory_5a599cf6c7f00f1e,
        mid_inheritInheritableThreadLocals_b5cc4b9ebf95db91,
        mid_name_acdade7b0866f06b,
        mid_name_ebb3883df7d5d378,
        mid_start_f5e519c688d87f98,
        mid_uncaughtExceptionHandler_c63330e50c8a3081,
        mid_unstarted_f5e519c688d87f98,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread$Builder(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread$Builder(const Thread$Builder& obj) : ::java::lang::Object(obj) {}

      ::java::util::concurrent::ThreadFactory factory() const;
      Thread$Builder inheritInheritableThreadLocals(jboolean) const;
      Thread$Builder name(const ::java::lang::String &) const;
      Thread$Builder name(const ::java::lang::String &, jlong) const;
      ::java::lang::Thread start(const ::java::lang::Runnable &) const;
      Thread$Builder uncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
      ::java::lang::Thread unstarted(const ::java::lang::Runnable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread$Builder);
    extern PyTypeObject *PY_TYPE(Thread$Builder);

    class t_Thread$Builder {
    public:
      PyObject_HEAD
      Thread$Builder object;
      static PyObject *wrap_Object(const Thread$Builder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
