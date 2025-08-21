#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StackTraceElement;
    class Thread$UncaughtExceptionHandler;
    class Class;
    class Runnable;
    class String;
    class Thread$Builder$OfVirtual;
    class Thread$State;
    class InterruptedException;
    class Thread$Builder$OfPlatform;
    class Thread;
    class ClassLoader;
    class ThreadGroup;
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
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_init$_5f8e9a753ad746d2,
        mid_init$_a4fe61fd51fefd67,
        mid_init$_df3227e07e1a5f16,
        mid_init$_5b54cda95a1cb724,
        mid_init$_e6066fd48a4ae50a,
        mid_init$_46c5c3398ef1359c,
        mid_init$_a8f8ed1f66f4b7ab,
        mid_activeCount_20fbf7565993c3d7,
        mid_checkAccess_3720c61b0679eb3e,
        mid_countStackFrames_20fbf7565993c3d7,
        mid_currentThread_d237cf0a682577ec,
        mid_dumpStack_3720c61b0679eb3e,
        mid_enumerate_6bd42c14de27270b,
        mid_getAllStackTraces_f125f26c07a7bec8,
        mid_getContextClassLoader_c8c017ac4e9c9110,
        mid_getDefaultUncaughtExceptionHandler_10547e2bde8cbe85,
        mid_getId_16939d9d0a9a9721,
        mid_getName_09a7afff1868fc5e,
        mid_getPriority_20fbf7565993c3d7,
        mid_getStackTrace_2ecac95d7eda48b5,
        mid_getState_76aada4a5b0c20f4,
        mid_getThreadGroup_1409ca4f99a5e054,
        mid_getUncaughtExceptionHandler_10547e2bde8cbe85,
        mid_holdsLock_570b5248a6da3ef6,
        mid_interrupt_3720c61b0679eb3e,
        mid_interrupted_947277eca0748c4e,
        mid_isAlive_947277eca0748c4e,
        mid_isDaemon_947277eca0748c4e,
        mid_isInterrupted_947277eca0748c4e,
        mid_isVirtual_947277eca0748c4e,
        mid_join_3720c61b0679eb3e,
        mid_join_8b3d46852b435a94,
        mid_join_b0983bb665c1a771,
        mid_ofPlatform_abbe535f37b5a2fb,
        mid_ofVirtual_34f1c9d66a592431,
        mid_onSpinWait_3720c61b0679eb3e,
        mid_resume_3720c61b0679eb3e,
        mid_run_3720c61b0679eb3e,
        mid_setContextClassLoader_7e882e12061eaf38,
        mid_setDaemon_b110fc3a58c081ab,
        mid_setDefaultUncaughtExceptionHandler_16760234b6ede3e4,
        mid_setName_0d82408c6e55bc30,
        mid_setPriority_540b2b23d51b1efd,
        mid_setUncaughtExceptionHandler_16760234b6ede3e4,
        mid_sleep_8b3d46852b435a94,
        mid_sleep_b0983bb665c1a771,
        mid_start_3720c61b0679eb3e,
        mid_startVirtualThread_b7c94fccf120862d,
        mid_stop_3720c61b0679eb3e,
        mid_suspend_3720c61b0679eb3e,
        mid_threadId_16939d9d0a9a9721,
        mid_toString_09a7afff1868fc5e,
        mid_yield_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
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
      jint countStackFrames() const;
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
      void resume() const;
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
      void suspend() const;
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
