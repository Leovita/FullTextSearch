#ifndef java_lang_Thread$Builder_H
#define java_lang_Thread$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Thread$UncaughtExceptionHandler;
    class Class;
    class Runnable;
    class String;
    class Thread$Builder;
    class Thread;
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
        mid_factory_e2e07c8857a89752,
        mid_inheritInheritableThreadLocals_fd3de143e68b964a,
        mid_name_8582a89b940fc82f,
        mid_name_26cafa8e7ba84458,
        mid_start_b7c94fccf120862d,
        mid_uncaughtExceptionHandler_5b34ab9d13c5b8a7,
        mid_unstarted_b7c94fccf120862d,
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
