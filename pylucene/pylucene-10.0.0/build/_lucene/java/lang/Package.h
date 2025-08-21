#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/NamedPackage.h"

namespace java {
  namespace lang {
    class String;
    class NumberFormatException;
    class Package;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Package : public ::java::lang::NamedPackage {
     public:
      enum {
        mid_getImplementationTitle_09a7afff1868fc5e,
        mid_getImplementationVendor_09a7afff1868fc5e,
        mid_getImplementationVersion_09a7afff1868fc5e,
        mid_getName_09a7afff1868fc5e,
        mid_getPackage_d70d306ae19d377f,
        mid_getPackages_ac8996f8ca75e2e2,
        mid_getSpecificationTitle_09a7afff1868fc5e,
        mid_getSpecificationVendor_09a7afff1868fc5e,
        mid_getSpecificationVersion_09a7afff1868fc5e,
        mid_hashCode_20fbf7565993c3d7,
        mid_isCompatibleWith_4a13a663b5c11133,
        mid_isSealed_947277eca0748c4e,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Package(jobject obj) : ::java::lang::NamedPackage(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Package(const Package& obj) : ::java::lang::NamedPackage(obj) {}

      ::java::lang::String getImplementationTitle() const;
      ::java::lang::String getImplementationVendor() const;
      ::java::lang::String getImplementationVersion() const;
      ::java::lang::String getName() const;
      static Package getPackage(const ::java::lang::String &);
      static JArray< Package > getPackages();
      ::java::lang::String getSpecificationTitle() const;
      ::java::lang::String getSpecificationVendor() const;
      ::java::lang::String getSpecificationVersion() const;
      jint hashCode() const;
      jboolean isCompatibleWith(const ::java::lang::String &) const;
      jboolean isSealed() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Package);
    extern PyTypeObject *PY_TYPE(Package);

    class t_Package {
    public:
      PyObject_HEAD
      Package object;
      static PyObject *wrap_Object(const Package&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
