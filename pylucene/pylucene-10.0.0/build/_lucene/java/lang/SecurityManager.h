#ifndef java_lang_SecurityManager_H
#define java_lang_SecurityManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Thread;
    class ThreadGroup;
  }
  namespace io {
    class FileDescriptor;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class SecurityManager : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_checkAccept_a5140b013bba694a,
        mid_checkAccess_534abaa36b51a25f,
        mid_checkAccess_27f8ea11f067e26d,
        mid_checkConnect_a5140b013bba694a,
        mid_checkConnect_374223b731bb12e0,
        mid_checkCreateClassLoader_3720c61b0679eb3e,
        mid_checkDelete_0d82408c6e55bc30,
        mid_checkExec_0d82408c6e55bc30,
        mid_checkExit_540b2b23d51b1efd,
        mid_checkLink_0d82408c6e55bc30,
        mid_checkListen_540b2b23d51b1efd,
        mid_checkPackageAccess_0d82408c6e55bc30,
        mid_checkPackageDefinition_0d82408c6e55bc30,
        mid_checkPrintJobAccess_3720c61b0679eb3e,
        mid_checkPropertiesAccess_3720c61b0679eb3e,
        mid_checkPropertyAccess_0d82408c6e55bc30,
        mid_checkRead_d617a5f729fbcea9,
        mid_checkRead_0d82408c6e55bc30,
        mid_checkRead_7a6f329c036f2238,
        mid_checkSecurityAccess_0d82408c6e55bc30,
        mid_checkSetFactory_3720c61b0679eb3e,
        mid_checkWrite_d617a5f729fbcea9,
        mid_checkWrite_0d82408c6e55bc30,
        mid_getSecurityContext_5655ed8670534604,
        mid_getThreadGroup_1409ca4f99a5e054,
        mid_getClassContext_c90261fb9ae27a0d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SecurityManager(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SecurityManager(const SecurityManager& obj) : ::java::lang::Object(obj) {}

      SecurityManager();

      void checkAccept(const ::java::lang::String &, jint) const;
      void checkAccess(const ::java::lang::Thread &) const;
      void checkAccess(const ::java::lang::ThreadGroup &) const;
      void checkConnect(const ::java::lang::String &, jint) const;
      void checkConnect(const ::java::lang::String &, jint, const ::java::lang::Object &) const;
      void checkCreateClassLoader() const;
      void checkDelete(const ::java::lang::String &) const;
      void checkExec(const ::java::lang::String &) const;
      void checkExit(jint) const;
      void checkLink(const ::java::lang::String &) const;
      void checkListen(jint) const;
      void checkPackageAccess(const ::java::lang::String &) const;
      void checkPackageDefinition(const ::java::lang::String &) const;
      void checkPrintJobAccess() const;
      void checkPropertiesAccess() const;
      void checkPropertyAccess(const ::java::lang::String &) const;
      void checkRead(const ::java::io::FileDescriptor &) const;
      void checkRead(const ::java::lang::String &) const;
      void checkRead(const ::java::lang::String &, const ::java::lang::Object &) const;
      void checkSecurityAccess(const ::java::lang::String &) const;
      void checkSetFactory() const;
      void checkWrite(const ::java::io::FileDescriptor &) const;
      void checkWrite(const ::java::lang::String &) const;
      ::java::lang::Object getSecurityContext() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(SecurityManager);
    extern PyTypeObject *PY_TYPE(SecurityManager);

    class t_SecurityManager {
    public:
      PyObject_HEAD
      SecurityManager object;
      static PyObject *wrap_Object(const SecurityManager&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
