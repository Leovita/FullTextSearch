#ifndef java_lang_ProcessHandle_H
#define java_lang_ProcessHandle_H

#include "java/lang/Comparable.h"

namespace java {
  namespace lang {
    class Class;
    class ProcessHandle;
    class Object;
    class ProcessHandle$Info;
  }
  namespace util {
    class Optional;
    namespace concurrent {
      class CompletableFuture;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ProcessHandle : public ::java::lang::Comparable {
     public:
      enum {
        mid_compareTo_2ccf30f16b73da25,
        mid_current_6392027f213f9afe,
        mid_destroy_947277eca0748c4e,
        mid_destroyForcibly_947277eca0748c4e,
        mid_equals_570b5248a6da3ef6,
        mid_hashCode_20fbf7565993c3d7,
        mid_info_202f9764d68b3a24,
        mid_isAlive_947277eca0748c4e,
        mid_of_f7641d7016f63c0f,
        mid_onExit_67c044688e7780df,
        mid_parent_d95173840d09a723,
        mid_pid_16939d9d0a9a9721,
        mid_supportsNormalTermination_947277eca0748c4e,
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
