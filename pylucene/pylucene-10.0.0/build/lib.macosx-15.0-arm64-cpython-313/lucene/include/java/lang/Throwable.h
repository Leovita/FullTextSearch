#ifndef java_lang_Throwable_H
#define java_lang_Throwable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StackTraceElement;
    class Class;
    class String;
    class Throwable;
  }
  namespace io {
    class Serializable;
    class PrintWriter;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Throwable : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_ea9871c48698171a,
        mid_addSuppressed_4b71a6d99b73f7d1,
        mid_fillInStackTrace_d175b950df78251e,
        mid_getCause_d175b950df78251e,
        mid_getLocalizedMessage_09a7afff1868fc5e,
        mid_getMessage_09a7afff1868fc5e,
        mid_getStackTrace_2ecac95d7eda48b5,
        mid_getSuppressed_d9caef4db4355df6,
        mid_initCause_632199cdbd8cc1eb,
        mid_printStackTrace_3720c61b0679eb3e,
        mid_printStackTrace_f19a9aaf837ad692,
        mid_printStackTrace_f7c1942f5b4484ef,
        mid_setStackTrace_f98d58aaf2e18580,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Throwable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Throwable(const Throwable& obj) : ::java::lang::Object(obj) {}

      Throwable();
      Throwable(const ::java::lang::String &);
      Throwable(const ::java::lang::String &, const Throwable &);

      void addSuppressed(const Throwable &) const;
      Throwable fillInStackTrace() const;
      Throwable getCause() const;
      ::java::lang::String getLocalizedMessage() const;
      ::java::lang::String getMessage() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      JArray< Throwable > getSuppressed() const;
      Throwable initCause(const Throwable &) const;
      void printStackTrace() const;
      void printStackTrace(const ::java::io::PrintStream &) const;
      void printStackTrace(const ::java::io::PrintWriter &) const;
      void setStackTrace(const JArray< ::java::lang::StackTraceElement > &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Throwable);
    extern PyTypeObject *PY_TYPE(Throwable);

    class t_Throwable {
    public:
      PyObject_HEAD
      Throwable object;
      static PyObject *wrap_Object(const Throwable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
