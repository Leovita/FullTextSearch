#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
  }
  namespace lang {
    class ClassNotFoundException;
    class Class;
    class String;
    class Package;
    class Module;
    class ClassLoader;
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
        mid_clearAssertionStatus_3720c61b0679eb3e,
        mid_getDefinedPackage_d70d306ae19d377f,
        mid_getDefinedPackages_ac8996f8ca75e2e2,
        mid_getName_09a7afff1868fc5e,
        mid_getParent_c8c017ac4e9c9110,
        mid_getPlatformClassLoader_c8c017ac4e9c9110,
        mid_getResourceAsStream_4306cf2226901a47,
        mid_getSystemClassLoader_c8c017ac4e9c9110,
        mid_getSystemResourceAsStream_4306cf2226901a47,
        mid_getUnnamedModule_48c5241001e44a43,
        mid_isRegisteredAsParallelCapable_947277eca0748c4e,
        mid_loadClass_f5e647a8ccc975d0,
        mid_setClassAssertionStatus_855d5fa744141d54,
        mid_setDefaultAssertionStatus_b110fc3a58c081ab,
        mid_setPackageAssertionStatus_855d5fa744141d54,
        mid_loadClass_09502854f10b5a47,
        mid_definePackage_8f471b2fdb7bf338,
        mid_findResource_26a88f535a9d4181,
        mid_findResource_ab5f381fd7bbe164,
        mid_getPackage_d70d306ae19d377f,
        mid_setSigners_ae2f9f4b3a4042f7,
        mid_getClassLoadingLock_e5cf973b773e2999,
        mid_findLoadedClass_f5e647a8ccc975d0,
        mid_findClass_f5e647a8ccc975d0,
        mid_findClass_4705db5863ca5b4f,
        mid_resolveClass_880cf094c8c20ccb,
        mid_defineClass_890198f4c2589986,
        mid_defineClass_e114b73c03ee845f,
        mid_defineClass_115f1511596a1e7f,
        mid_defineClass_2d74077bec17b803,
        mid_findResources_99dc2012f45c1af8,
        mid_registerAsParallelCapable_947277eca0748c4e,
        mid_findLibrary_cb0eb1432185fc94,
        mid_findSystemClass_f5e647a8ccc975d0,
        mid_getPackages_ac8996f8ca75e2e2,
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
