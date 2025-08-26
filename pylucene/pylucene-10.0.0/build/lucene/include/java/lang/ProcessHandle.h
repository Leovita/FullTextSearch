#ifndef java_lang_ProcessHandle_H
#define java_lang_ProcessHandle_H

#include "java/lang/Comparable.h"

namespace java {
  namespace lang {
    class ProcessHandle$Info;
    class ProcessHandle;
    class Object;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class CompletableFuture;
    }
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ProcessHandle : public ::java::lang::Comparable {
     public:
      enum {
        mid_compareTo_f8f144388bbe2bb9,
        mid_current_ffbc9b3892cf9762,
        mid_destroy_9aa4f33e82ea333f,
        mid_destroyForcibly_9aa4f33e82ea333f,
        mid_equals_00d17418847797d4,
        mid_hashCode_bd89ce15dad49192,
        mid_info_d06aa60b02975843,
        mid_isAlive_9aa4f33e82ea333f,
        mid_of_9ef163310f71fbd3,
        mid_onExit_645e0257444d1f5e,
        mid_parent_9a972c66ccbfd657,
        mid_pid_0f176418e3e16541,
        mid_supportsNormalTermination_9aa4f33e82ea333f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ProcessHandle(jobject obj) : ::java::lang::Comparable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ProcessHandle(const ProcessHandle& obj) : ::java::lang::Comparable(obj) {}

      jint compareTo(const ProcessHandle &) const;
      static ProcessHandle current();
      jboolean destroy() const;
      jboolean destroyForcibly() const;
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      ::java::lang::ProcessHandle$Info info() const;
      jboolean isAlive() const;
      static ::java::util::Optional of(jlong);
      ::java::util::concurrent::CompletableFuture onExit() const;
      ::java::util::Optional parent() const;
      jlong pid() const;
      jboolean supportsNormalTermination() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ProcessHandle);
    extern PyTypeObject *PY_TYPE(ProcessHandle);

    class t_ProcessHandle {
    public:
      PyObject_HEAD
      ProcessHandle object;
      static PyObject *wrap_Object(const ProcessHandle&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
