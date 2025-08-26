#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassLoader;
    class Class;
    class Module;
    class ClassNotFoundException;
    class String;
    class Package;
  }
  namespace io {
    class InputStream;
  }
  namespace util {
    class Enumeration;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ClassLoader : public ::java::lang::Object {
     public:
      enum {
        mid_clearAssertionStatus_e7bdbe105ce1bafb,
        mid_getDefinedPackage_561447fb00856491,
        mid_getDefinedPackages_e953005aca271256,
        mid_getName_e7df854526d67fa3,
        mid_getParent_4897d4d2fef89082,
        mid_getPlatformClassLoader_4897d4d2fef89082,
        mid_getResourceAsStream_9bd3a7bffb83deee,
        mid_getSystemClassLoader_4897d4d2fef89082,
        mid_getSystemResourceAsStream_9bd3a7bffb83deee,
        mid_getUnnamedModule_46a63e53598d2664,
        mid_isRegisteredAsParallelCapable_9aa4f33e82ea333f,
        mid_loadClass_34dc63379bcbfa09,
        mid_setClassAssertionStatus_0c3fb5e97dae8b90,
        mid_setDefaultAssertionStatus_f5dd97eebf6a215a,
        mid_setPackageAssertionStatus_0c3fb5e97dae8b90,
        mid_loadClass_b3ae0d151a726000,
        mid_definePackage_4dedabbce3d2e1fa,
        mid_findResource_eec8808de9c09d3d,
        mid_findResource_a30f8cd0f04c47c0,
        mid_getPackage_561447fb00856491,
        mid_setSigners_33f954057e9b8586,
        mid_getClassLoadingLock_a78a91e32cc37c7c,
        mid_findLoadedClass_34dc63379bcbfa09,
        mid_findClass_34dc63379bcbfa09,
        mid_findClass_0c55e3c7fba70f55,
        mid_resolveClass_fbe53aa5d2a68b3e,
        mid_defineClass_c35ec5fa617896a1,
        mid_defineClass_cccb4b78b2871329,
        mid_defineClass_0e94bb878928ba49,
        mid_defineClass_7d52761a5c06d3dc,
        mid_findResources_570d62c1b7248d70,
        mid_registerAsParallelCapable_9aa4f33e82ea333f,
        mid_findLibrary_fef9c036acf290a9,
        mid_findSystemClass_34dc63379bcbfa09,
        mid_getPackages_e953005aca271256,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassLoader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassLoader(const ClassLoader& obj) : ::java::lang::Object(obj) {}

      void clearAssertionStatus() const;
      ::java::lang::Package getDefinedPackage(const ::java::lang::String &) const;
      JArray< ::java::lang::Package > getDefinedPackages() const;
      ::java::lang::String getName() const;
      ClassLoader getParent() const;
      static ClassLoader getPlatformClassLoader();
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      static ClassLoader getSystemClassLoader();
      static ::java::io::InputStream getSystemResourceAsStream(const ::java::lang::String &);
      ::java::lang::Module getUnnamedModule() const;
      jboolean isRegisteredAsParallelCapable() const;
      ::java::lang::Class loadClass(const ::java::lang::String &) const;
      void setClassAssertionStatus(const ::java::lang::String &, jboolean) const;
      void setDefaultAssertionStatus(jboolean) const;
      void setPackageAssertionStatus(const ::java::lang::String &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassLoader);
    extern PyTypeObject *PY_TYPE(ClassLoader);

    class t_ClassLoader {
    public:
      PyObject_HEAD
      ClassLoader object;
      static PyObject *wrap_Object(const ClassLoader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
