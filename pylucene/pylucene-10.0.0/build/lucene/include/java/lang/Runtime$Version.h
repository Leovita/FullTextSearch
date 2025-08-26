#ifndef java_lang_Runtime$Version_H
#define java_lang_Runtime$Version_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class Runtime$Version;
    class String;
    class Comparable;
  }
  namespace util {
    class Optional;
    class List;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime$Version : public ::java::lang::Object {
     public:
      enum {
        mid_build_9a972c66ccbfd657,
        mid_compareTo_758ea0f2366f2746,
        mid_compareToIgnoreOptional_758ea0f2366f2746,
        mid_equals_00d17418847797d4,
        mid_equalsIgnoreOptional_00d17418847797d4,
        mid_feature_bd89ce15dad49192,
        mid_hashCode_bd89ce15dad49192,
        mid_interim_bd89ce15dad49192,
        mid_major_bd89ce15dad49192,
        mid_minor_bd89ce15dad49192,
        mid_optional_9a972c66ccbfd657,
        mid_parse_0ba6d9b003e7f103,
        mid_patch_bd89ce15dad49192,
        mid_pre_9a972c66ccbfd657,
        mid_security_bd89ce15dad49192,
        mid_toString_e7df854526d67fa3,
        mid_update_bd89ce15dad49192,
        mid_version_1387e1e2702ac173,
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
