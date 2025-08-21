#ifndef java_lang_Runtime$Version_H
#define java_lang_Runtime$Version_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Integer;
    class Runtime$Version;
    class String;
    class Class;
  }
  namespace util {
    class List;
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime$Version : public ::java::lang::Object {
     public:
      enum {
        mid_build_d95173840d09a723,
        mid_compareTo_816407c382a9a1e5,
        mid_compareToIgnoreOptional_816407c382a9a1e5,
        mid_equals_570b5248a6da3ef6,
        mid_equalsIgnoreOptional_570b5248a6da3ef6,
        mid_feature_20fbf7565993c3d7,
        mid_hashCode_20fbf7565993c3d7,
        mid_interim_20fbf7565993c3d7,
        mid_major_20fbf7565993c3d7,
        mid_minor_20fbf7565993c3d7,
        mid_optional_d95173840d09a723,
        mid_parse_98a611bb086c2a5c,
        mid_patch_20fbf7565993c3d7,
        mid_pre_d95173840d09a723,
        mid_security_20fbf7565993c3d7,
        mid_toString_09a7afff1868fc5e,
        mid_update_20fbf7565993c3d7,
        mid_version_36830460e10839eb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runtime$Version(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Runtime$Version(const Runtime$Version& obj) : ::java::lang::Object(obj) {}

      ::java::util::Optional build() const;
      jint compareTo(const Runtime$Version &) const;
      jint compareToIgnoreOptional(const Runtime$Version &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equalsIgnoreOptional(const ::java::lang::Object &) const;
      jint feature() const;
      jint hashCode() const;
      jint interim() const;
      jint major() const;
      jint minor() const;
      ::java::util::Optional optional() const;
      static Runtime$Version parse(const ::java::lang::String &);
      jint patch() const;
      ::java::util::Optional pre() const;
      jint security() const;
      ::java::lang::String toString() const;
      jint update() const;
      ::java::util::List version() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Runtime$Version);
    extern PyTypeObject *PY_TYPE(Runtime$Version);

    class t_Runtime$Version {
    public:
      PyObject_HEAD
      Runtime$Version object;
      static PyObject *wrap_Object(const Runtime$Version&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
