#ifndef java_lang_Process_H
#define java_lang_Process_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class BufferedWriter;
    class BufferedReader;
    class OutputStream;
  }
  namespace lang {
    class Class;
    class InterruptedException;
    class ProcessHandle;
    class Process;
    class ProcessHandle$Info;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
      class CompletableFuture;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Process : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_destroy_3720c61b0679eb3e,
        mid_destroyForcibly_c94a317dcd75c168,
        mid_errorReader_14d1c745da4d9b1e,
        mid_exitValue_20fbf7565993c3d7,
        mid_getErrorStream_13f722253d099a7c,
        mid_getInputStream_13f722253d099a7c,
        mid_getOutputStream_211030441bf65bd4,
        mid_info_202f9764d68b3a24,
        mid_inputReader_14d1c745da4d9b1e,
        mid_isAlive_947277eca0748c4e,
        mid_onExit_67c044688e7780df,
        mid_outputWriter_b437d4ead3bdc21b,
        mid_pid_16939d9d0a9a9721,
        mid_supportsNormalTermination_947277eca0748c4e,
        mid_toHandle_6392027f213f9afe,
        mid_waitFor_20fbf7565993c3d7,
        mid_waitFor_e992b4908961e96e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Process(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Process(const Process& obj) : ::java::lang::Object(obj) {}

      Process();

      void destroy() const;
      Process destroyForcibly() const;
      ::java::io::BufferedReader errorReader() const;
      jint exitValue() const;
      ::java::io::InputStream getErrorStream() const;
      ::java::io::InputStream getInputStream() const;
      ::java::io::OutputStream getOutputStream() const;
      ::java::lang::ProcessHandle$Info info() const;
      ::java::io::BufferedReader inputReader() const;
      jboolean isAlive() const;
      ::java::util::concurrent::CompletableFuture onExit() const;
      ::java::io::BufferedWriter outputWriter() const;
      jlong pid() const;
      jboolean supportsNormalTermination() const;
      ::java::lang::ProcessHandle toHandle() const;
      jint waitFor() const;
      jboolean waitFor(jlong, const ::java::util::concurrent::TimeUnit &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Process);
    extern PyTypeObject *PY_TYPE(Process);

    class t_Process {
    public:
      PyObject_HEAD
      Process object;
      static PyObject *wrap_Object(const Process&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
