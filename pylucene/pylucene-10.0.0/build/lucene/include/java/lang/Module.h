#ifndef java_lang_Module_H
#define java_lang_Module_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Module;
    class ModuleLayer;
    class ClassLoader;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Module : public ::java::lang::Object {
     public:
      enum {
        mid_addExports_5cab0b51e36edae9,
        mid_addOpens_5cab0b51e36edae9,
        mid_addReads_1379db5e25131d5d,
        mid_addUses_13677570190e6fc8,
        mid_canRead_07af9c04fcc840bd,
        mid_canUse_0be35c16891dfd3c,
        mid_getClassLoader_c8c017ac4e9c9110,
        mid_getLayer_e0d6a2c9ff2cc4b5,
        mid_getName_09a7afff1868fc5e,
        mid_getPackages_4df174295554d7bd,
        mid_getResourceAsStream_4306cf2226901a47,
        mid_isExported_4a13a663b5c11133,
        mid_isExported_af1d7601530bf66b,
        mid_isNamed_947277eca0748c4e,
        mid_isNativeAccessEnabled_947277eca0748c4e,
        mid_isOpen_4a13a663b5c11133,
        mid_isOpen_af1d7601530bf66b,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Module(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Module(const Module& obj) : ::java::lang::Object(obj) {}

      Module addExports(const ::java::lang::String &, const Module &) const;
      Module addOpens(const ::java::lang::String &, const Module &) const;
      Module addReads(const Module &) const;
      Module addUses(const ::java::lang::Class &) const;
      jboolean canRead(const Module &) const;
      jboolean canUse(const ::java::lang::Class &) const;
      ::java::lang::ClassLoader getClassLoader() const;
      ::java::lang::ModuleLayer getLayer() const;
      ::java::lang::String getName() const;
      ::java::util::Set getPackages() const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      jboolean isExported(const ::java::lang::String &) const;
      jboolean isExported(const ::java::lang::String &, const Module &) const;
      jboolean isNamed() const;
      jboolean isNativeAccessEnabled() const;
      jboolean isOpen(const ::java::lang::String &) const;
      jboolean isOpen(const ::java::lang::String &, const Module &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Module);
    extern PyTypeObject *PY_TYPE(Module);

    class t_Module {
    public:
      PyObject_HEAD
      Module object;
      static PyObject *wrap_Object(const Module&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
