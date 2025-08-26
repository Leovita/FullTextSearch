#ifndef java_lang_ProcessHandle$Info_H
#define java_lang_ProcessHandle$Info_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ProcessHandle$Info : public ::java::lang::Object {
     public:
      enum {
        mid_arguments_9a972c66ccbfd657,
        mid_command_9a972c66ccbfd657,
        mid_commandLine_9a972c66ccbfd657,
        mid_user_9a972c66ccbfd657,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ProcessHandle$Info(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ProcessHandle$Info(const ProcessHandle$Info& obj) : ::java::lang::Object(obj) {}

      ::java::util::Optional arguments() const;
      ::java::util::Optional command() const;
      ::java::util::Optional commandLine() const;
      ::java::util::Optional user() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ProcessHandle$Info);
    extern PyTypeObject *PY_TYPE(ProcessHandle$Info);

    class t_ProcessHandle$Info {
    public:
      PyObject_HEAD
      ProcessHandle$Info object;
      static PyObject *wrap_Object(const ProcessHandle$Info&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
