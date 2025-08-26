#ifndef java_lang_SecurityManager_H
#define java_lang_SecurityManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Thread;
    class Class;
    class String;
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
        mid_init$_e7bdbe105ce1bafb,
        mid_checkAccept_49e27e98009acf15,
        mid_checkAccess_982838d333d00132,
        mid_checkAccess_62046d3ee4cc2414,
        mid_checkConnect_49e27e98009acf15,
        mid_checkConnect_451247a4fce503c0,
        mid_checkCreateClassLoader_e7bdbe105ce1bafb,
        mid_checkDelete_ee46a189998009d6,
        mid_checkExec_ee46a189998009d6,
        mid_checkExit_8226bd0b0fc13dba,
        mid_checkLink_ee46a189998009d6,
        mid_checkListen_8226bd0b0fc13dba,
        mid_checkPackageAccess_ee46a189998009d6,
        mid_checkPackageDefinition_ee46a189998009d6,
        mid_checkPrintJobAccess_e7bdbe105ce1bafb,
        mid_checkPropertiesAccess_e7bdbe105ce1bafb,
        mid_checkPropertyAccess_ee46a189998009d6,
        mid_checkRead_784d5a22abc62de8,
        mid_checkRead_ee46a189998009d6,
        mid_checkRead_101074fdf5bb68f6,
        mid_checkSecurityAccess_ee46a189998009d6,
        mid_checkSetFactory_e7bdbe105ce1bafb,
        mid_checkWrite_784d5a22abc62de8,
        mid_checkWrite_ee46a189998009d6,
        mid_getSecurityContext_4819806f62f1360a,
        mid_getThreadGroup_183cb1483640e28b,
        mid_getClassContext_a0808d604013cf8d,
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
