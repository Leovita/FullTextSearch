#ifndef java_lang_Thread$Builder$OfVirtual_H
#define java_lang_Thread$Builder$OfVirtual_H

#include "java/lang/Thread$Builder.h"

namespace java {
  namespace lang {
    class Thread$UncaughtExceptionHandler;
    class Class;
    class Thread$Builder$OfVirtual;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$Builder$OfVirtual : public ::java::lang::Thread$Builder {
     public:
      enum {
        mid_inheritInheritableThreadLocals_d60aee2f375249bb,
        mid_name_666fb7b5be729cca,
        mid_name_f59471d97ee3d450,
        mid_uncaughtExceptionHandler_71d604d4a3f408ff,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread$Builder$OfVirtual(jobject obj) : ::java::lang::Thread$Builder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread$Builder$OfVirtual(const Thread$Builder$OfVirtual& obj) : ::java::lang::Thread$Builder(obj) {}

      Thread$Builder$OfVirtual inheritInheritableThreadLocals(jboolean) const;
      Thread$Builder$OfVirtual name(const ::java::lang::String &) const;
      Thread$Builder$OfVirtual name(const ::java::lang::String &, jlong) const;
      Thread$Builder$OfVirtual uncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread$Builder$OfVirtual);
    extern PyTypeObject *PY_TYPE(Thread$Builder$OfVirtual);

    class t_Thread$Builder$OfVirtual {
    public:
      PyObject_HEAD
      Thread$Builder$OfVirtual object;
      static PyObject *wrap_Object(const Thread$Builder$OfVirtual&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
