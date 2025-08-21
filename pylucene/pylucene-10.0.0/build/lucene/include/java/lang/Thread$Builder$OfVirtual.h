#ifndef java_lang_Thread$Builder$OfVirtual_H
#define java_lang_Thread$Builder$OfVirtual_H

#include "java/lang/Thread$Builder.h"

namespace java {
  namespace lang {
    class Thread$UncaughtExceptionHandler;
    class Class;
    class String;
    class Thread$Builder$OfVirtual;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$Builder$OfVirtual : public ::java::lang::Thread$Builder {
     public:
      enum {
        mid_inheritInheritableThreadLocals_31b51bcb2c62de53,
        mid_name_5ced0742cdf09bd6,
        mid_name_ffab56d0107d75d7,
        mid_uncaughtExceptionHandler_313e29eab009c355,
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
