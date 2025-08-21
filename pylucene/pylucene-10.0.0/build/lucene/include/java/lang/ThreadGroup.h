#ifndef java_lang_ThreadGroup_H
#define java_lang_ThreadGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Thread$UncaughtExceptionHandler;
    class Class;
    class String;
    class Throwable;
    class Thread;
    class ThreadGroup;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ThreadGroup : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_a4fe61fd51fefd67,
        mid_activeCount_20fbf7565993c3d7,
        mid_activeGroupCount_20fbf7565993c3d7,
        mid_checkAccess_3720c61b0679eb3e,
        mid_destroy_3720c61b0679eb3e,
        mid_enumerate_6bd42c14de27270b,
        mid_enumerate_63a496101055c72d,
        mid_enumerate_8e9f6f0327398533,
        mid_enumerate_4f0315a19616dfd5,
        mid_getMaxPriority_20fbf7565993c3d7,
        mid_getName_09a7afff1868fc5e,
        mid_getParent_1409ca4f99a5e054,
        mid_interrupt_3720c61b0679eb3e,
        mid_isDaemon_947277eca0748c4e,
        mid_isDestroyed_947277eca0748c4e,
        mid_list_3720c61b0679eb3e,
        mid_parentOf_586b9ac6806e31a4,
        mid_resume_3720c61b0679eb3e,
        mid_setDaemon_b110fc3a58c081ab,
        mid_setMaxPriority_540b2b23d51b1efd,
        mid_stop_3720c61b0679eb3e,
        mid_suspend_3720c61b0679eb3e,
        mid_toString_09a7afff1868fc5e,
        mid_uncaughtException_337f9378fa50bcb6,
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
      void resume() const;
      void setDaemon(jboolean) const;
      void setMaxPriority(jint) const;
      void stop() const;
      void suspend() const;
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
