#ifndef java_lang_Runtime_H
#define java_lang_Runtime_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class File;
    class IOException;
  }
  namespace lang {
    class Runtime$Version;
    class String;
    class Class;
    class Process;
    class Thread;
    class Runtime;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime : public ::java::lang::Object {
     public:
      enum {
        mid_addShutdownHook_534abaa36b51a25f,
        mid_availableProcessors_20fbf7565993c3d7,
        mid_exec_422b2cc53e57a094,
        mid_exec_fa50eb9748e0349c,
        mid_exec_80a483e425357ac9,
        mid_exec_a1617078be022a52,
        mid_exec_fb0f284afa9f6e57,
        mid_exec_1ec39417159450c0,
        mid_exit_540b2b23d51b1efd,
        mid_freeMemory_16939d9d0a9a9721,
        mid_gc_3720c61b0679eb3e,
        mid_getRuntime_3f200c274df20dbf,
        mid_halt_540b2b23d51b1efd,
        mid_load_0d82408c6e55bc30,
        mid_loadLibrary_0d82408c6e55bc30,
        mid_maxMemory_16939d9d0a9a9721,
        mid_removeShutdownHook_f7a2c21b41d55d61,
        mid_runFinalization_3720c61b0679eb3e,
        mid_totalMemory_16939d9d0a9a9721,
        mid_version_a33ae38793af884f,
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
