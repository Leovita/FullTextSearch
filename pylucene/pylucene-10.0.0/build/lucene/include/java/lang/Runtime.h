#ifndef java_lang_Runtime_H
#define java_lang_Runtime_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Process;
    class Thread;
    class Class;
    class Runtime$Version;
    class String;
    class Runtime;
  }
  namespace io {
    class File;
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime : public ::java::lang::Object {
     public:
      enum {
        mid_addShutdownHook_982838d333d00132,
        mid_availableProcessors_bd89ce15dad49192,
        mid_exec_9880cede18e0e16b,
        mid_exec_b05261c1f7b1333d,
        mid_exec_66ca3249bc124e5b,
        mid_exec_933a23171837c6eb,
        mid_exec_aa9f679a93795003,
        mid_exec_fa809e7ff9d3649a,
        mid_exit_8226bd0b0fc13dba,
        mid_freeMemory_0f176418e3e16541,
        mid_gc_e7bdbe105ce1bafb,
        mid_getRuntime_34a3551f215c82bd,
        mid_halt_8226bd0b0fc13dba,
        mid_load_ee46a189998009d6,
        mid_loadLibrary_ee46a189998009d6,
        mid_maxMemory_0f176418e3e16541,
        mid_removeShutdownHook_95518f7afafffd5d,
        mid_runFinalization_e7bdbe105ce1bafb,
        mid_totalMemory_0f176418e3e16541,
        mid_version_be6a0fcc89a47927,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runtime(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Runtime(const Runtime& obj) : ::java::lang::Object(obj) {}

      void addShutdownHook(const ::java::lang::Thread &) const;
      jint availableProcessors() const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      void exit(jint) const;
      jlong freeMemory() const;
      void gc() const;
      static Runtime getRuntime();
      void halt(jint) const;
      void load(const ::java::lang::String &) const;
      void loadLibrary(const ::java::lang::String &) const;
      jlong maxMemory() const;
      jboolean removeShutdownHook(const ::java::lang::Thread &) const;
      void runFinalization() const;
      jlong totalMemory() const;
      static ::java::lang::Runtime$Version version();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Runtime);
    extern PyTypeObject *PY_TYPE(Runtime);

    class t_Runtime {
    public:
      PyObject_HEAD
      Runtime object;
      static PyObject *wrap_Object(const Runtime&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
