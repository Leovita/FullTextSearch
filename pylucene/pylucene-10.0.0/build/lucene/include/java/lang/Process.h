#ifndef java_lang_Process_H
#define java_lang_Process_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Process;
    class ProcessHandle$Info;
    class InterruptedException;
    class ProcessHandle;
    class Class;
  }
  namespace io {
    class BufferedReader;
    class InputStream;
    class BufferedWriter;
    class OutputStream;
  }
  namespace util {
    namespace concurrent {
      class CompletableFuture;
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Process : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_destroy_e7bdbe105ce1bafb,
        mid_destroyForcibly_3f11ead73bbd4a6b,
        mid_errorReader_19b29f6bd4396556,
        mid_exitValue_bd89ce15dad49192,
        mid_getErrorStream_e6d5d6822aa2b5dc,
        mid_getInputStream_e6d5d6822aa2b5dc,
        mid_getOutputStream_1478f16a8ad52680,
        mid_info_d06aa60b02975843,
        mid_inputReader_19b29f6bd4396556,
        mid_isAlive_9aa4f33e82ea333f,
        mid_onExit_645e0257444d1f5e,
        mid_outputWriter_1a3a7f4396de795f,
        mid_pid_0f176418e3e16541,
        mid_supportsNormalTermination_9aa4f33e82ea333f,
        mid_toHandle_ffbc9b3892cf9762,
        mid_waitFor_bd89ce15dad49192,
        mid_waitFor_67710f08bc0014c8,
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
