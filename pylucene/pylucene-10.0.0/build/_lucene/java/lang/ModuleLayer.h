#ifndef java_lang_ModuleLayer_H
#define java_lang_ModuleLayer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Module;
    class ModuleLayer;
    class ClassLoader;
    class ModuleLayer$Controller;
  }
  namespace util {
    class List;
    class Set;
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ModuleLayer : public ::java::lang::Object {
     public:
      enum {
        mid_boot_e0d6a2c9ff2cc4b5,
        mid_empty_e0d6a2c9ff2cc4b5,
        mid_findLoader_44eed47d76f48e5f,
        mid_findModule_ef8f83464d079b7a,
        mid_modules_4df174295554d7bd,
        mid_parents_36830460e10839eb,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ModuleLayer(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ModuleLayer(const ModuleLayer& obj) : ::java::lang::Object(obj) {}

      static ModuleLayer boot();
      static ModuleLayer empty();
      ::java::lang::ClassLoader findLoader(const ::java::lang::String &) const;
      ::java::util::Optional findModule(const ::java::lang::String &) const;
      ::java::util::Set modules() const;
      ::java::util::List parents() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ModuleLayer);
    extern PyTypeObject *PY_TYPE(ModuleLayer);

    class t_ModuleLayer {
    public:
      PyObject_HEAD
      ModuleLayer object;
      static PyObject *wrap_Object(const ModuleLayer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
