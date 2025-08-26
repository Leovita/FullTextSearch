#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class ThreadGroup;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class Thread;
    class Class;
    class Thread$Builder$OfPlatform;
    class StackTraceElement;
    class Thread$Builder$OfVirtual;
    class Thread$State;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_init$_b278873deffbc02b,
        mid_init$_19803cbc17b92361,
        mid_init$_afbaf05a4a5b657d,
        mid_init$_7ed2d7629563f555,
        mid_init$_8da5555ec0347baf,
        mid_init$_56c70da88f89d054,
        mid_init$_93cb0d349ff3d542,
        mid_activeCount_bd89ce15dad49192,
        mid_checkAccess_e7bdbe105ce1bafb,
        mid_currentThread_4b5daa49003e4686,
        mid_dumpStack_e7bdbe105ce1bafb,
        mid_enumerate_93ba06f711cebdb5,
        mid_getAllStackTraces_5004bdf19ed33453,
        mid_getContextClassLoader_4897d4d2fef89082,
        mid_getDefaultUncaughtExceptionHandler_4d0991fb317ea618,
        mid_getId_0f176418e3e16541,
        mid_getName_e7df854526d67fa3,
        mid_getPriority_bd89ce15dad49192,
        mid_getStackTrace_28d41e156fd049ea,
        mid_getState_47d137dc2c9d5e02,
        mid_getThreadGroup_183cb1483640e28b,
        mid_getUncaughtExceptionHandler_4d0991fb317ea618,
        mid_holdsLock_00d17418847797d4,
        mid_interrupt_e7bdbe105ce1bafb,
        mid_interrupted_9aa4f33e82ea333f,
        mid_isAlive_9aa4f33e82ea333f,
        mid_isDaemon_9aa4f33e82ea333f,
        mid_isInterrupted_9aa4f33e82ea333f,
        mid_isVirtual_9aa4f33e82ea333f,
        mid_join_e7bdbe105ce1bafb,
        mid_join_1d3149fac12f2af3,
        mid_join_3d289b1efbb219e1,
        mid_ofPlatform_739623f8c58a1e28,
        mid_ofVirtual_962f45efb9ef2ca5,
        mid_onSpinWait_e7bdbe105ce1bafb,
        mid_run_e7bdbe105ce1bafb,
        mid_setContextClassLoader_d603563f542d31ba,
        mid_setDaemon_f5dd97eebf6a215a,
        mid_setDefaultUncaughtExceptionHandler_4c7886931b2c9817,
        mid_setName_ee46a189998009d6,
        mid_setPriority_8226bd0b0fc13dba,
        mid_setUncaughtExceptionHandler_4c7886931b2c9817,
        mid_sleep_1d3149fac12f2af3,
        mid_sleep_3d289b1efbb219e1,
        mid_start_e7bdbe105ce1bafb,
        mid_startVirtualThread_f5e519c688d87f98,
        mid_stop_e7bdbe105ce1bafb,
        mid_threadId_0f176418e3e16541,
        mid_toString_e7df854526d67fa3,
        mid_yield_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread(const Thread& obj) : ::java::lang::Object(obj) {}

      static jint MAX_PRIORITY;
      static jint MIN_PRIORITY;
      static jint NORM_PRIORITY;

      Thread();
      Thread(const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &);
      Thread(const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong, jboolean);

      static jint activeCount();
      void checkAccess() const;
      static Thread currentThread();
      static void dumpStack();
      static jint enumerate(const JArray< Thread > &);
      static ::java::util::Map getAllStackTraces();
      ::java::lang::ClassLoader getContextClassLoader() const;
      static ::java::lang::Thread$UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
      jlong getId() const;
      ::java::lang::String getName() const;
      jint getPriority() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      ::java::lang::Thread$State getState() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
      ::java::lang::Thread$UncaughtExceptionHandler getUncaughtExceptionHandler() const;
      static jboolean holdsLock(const ::java::lang::Object &);
      void interrupt() const;
      static jboolean interrupted();
      jboolean isAlive() const;
      jboolean isDaemon() const;
      jboolean isInterrupted() const;
      jboolean isVirtual() const;
      void join() const;
      void join(jlong) const;
      void join(jlong, jint) const;
      static ::java::lang::Thread$Builder$OfPlatform ofPlatform();
      static ::java::lang::Thread$Builder$OfVirtual ofVirtual();
      static void onSpinWait();
      void run() const;
      void setContextClassLoader(const ::java::lang::ClassLoader &) const;
      void setDaemon(jboolean) const;
      static void setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &);
      void setName(const ::java::lang::String &) const;
      void setPriority(jint) const;
      void setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
      static void sleep(jlong);
      static void sleep(jlong, jint);
      void start() const;
      static Thread startVirtualThread(const ::java::lang::Runnable &);
      void stop() const;
      jlong threadId() const;
      ::java::lang::String toString() const;
      static void yield();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread);
    extern PyTypeObject *PY_TYPE(Thread);

    class t_Thread {
    public:
      PyObject_HEAD
      Thread object;
      static PyObject *wrap_Object(const Thread&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
