#ifndef java_lang_ThreadGroup_H
#define java_lang_ThreadGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Thread$UncaughtExceptionHandler;
    class Thread;
    class Class;
    class Throwable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ThreadGroup : public ::java::lang::Object {
     public:
      enum {
        mid_init$_ee46a189998009d6,
        mid_init$_19803cbc17b92361,
        mid_activeCount_bd89ce15dad49192,
        mid_activeGroupCount_bd89ce15dad49192,
        mid_checkAccess_e7bdbe105ce1bafb,
        mid_destroy_e7bdbe105ce1bafb,
        mid_enumerate_93ba06f711cebdb5,
        mid_enumerate_5faa944a9db6e4a5,
        mid_enumerate_0fd4efdc10e2a9eb,
        mid_enumerate_544db9e90775ffd5,
        mid_getMaxPriority_bd89ce15dad49192,
        mid_getName_e7df854526d67fa3,
        mid_getParent_183cb1483640e28b,
        mid_interrupt_e7bdbe105ce1bafb,
        mid_isDaemon_9aa4f33e82ea333f,
        mid_isDestroyed_9aa4f33e82ea333f,
        mid_list_e7bdbe105ce1bafb,
        mid_parentOf_ddb337abfe429af6,
        mid_setDaemon_f5dd97eebf6a215a,
        mid_setMaxPriority_8226bd0b0fc13dba,
        mid_toString_e7df854526d67fa3,
        mid_uncaughtException_d15744a81f85b58c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ThreadGroup(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ThreadGroup(const ThreadGroup& obj) : ::java::lang::Object(obj) {}

      ThreadGroup(const ::java::lang::String &);
      ThreadGroup(const ThreadGroup &, const ::java::lang::String &);

      jint activeCount() const;
      jint activeGroupCount() const;
      void checkAccess() const;
      void destroy() const;
      jint enumerate(const JArray< ::java::lang::Thread > &) const;
      jint enumerate(const JArray< ThreadGroup > &) const;
      jint enumerate(const JArray< ::java::lang::Thread > &, jboolean) const;
      jint enumerate(const JArray< ThreadGroup > &, jboolean) const;
      jint getMaxPriority() const;
      ::java::lang::String getName() const;
      ThreadGroup getParent() const;
      void interrupt() const;
      jboolean isDaemon() const;
      jboolean isDestroyed() const;
      void list() const;
      jboolean parentOf(const ThreadGroup &) const;
      void setDaemon(jboolean) const;
      void setMaxPriority(jint) const;
      ::java::lang::String toString() const;
      void uncaughtException(const ::java::lang::Thread &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ThreadGroup);
    extern PyTypeObject *PY_TYPE(ThreadGroup);

    class t_ThreadGroup {
    public:
      PyObject_HEAD
      ThreadGroup object;
      static PyObject *wrap_Object(const ThreadGroup&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
