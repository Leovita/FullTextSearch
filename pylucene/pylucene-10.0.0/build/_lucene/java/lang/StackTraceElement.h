#ifndef java_lang_StackTraceElement_H
#define java_lang_StackTraceElement_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StackTraceElement : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0eb78d224d014d8e,
        mid_init$_6e78d8163c7cb22f,
        mid_equals_00d17418847797d4,
        mid_getClassLoaderName_e7df854526d67fa3,
        mid_getClassName_e7df854526d67fa3,
        mid_getFileName_e7df854526d67fa3,
        mid_getLineNumber_bd89ce15dad49192,
        mid_getMethodName_e7df854526d67fa3,
        mid_getModuleName_e7df854526d67fa3,
        mid_getModuleVersion_e7df854526d67fa3,
        mid_hashCode_bd89ce15dad49192,
        mid_isNativeMethod_9aa4f33e82ea333f,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StackTraceElement(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StackTraceElement(const StackTraceElement& obj) : ::java::lang::Object(obj) {}

      StackTraceElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jint);
      StackTraceElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jint);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getClassLoaderName() const;
      ::java::lang::String getClassName() const;
      ::java::lang::String getFileName() const;
      jint getLineNumber() const;
      ::java::lang::String getMethodName() const;
      ::java::lang::String getModuleName() const;
      ::java::lang::String getModuleVersion() const;
      jint hashCode() const;
      jboolean isNativeMethod() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StackTraceElement);
    extern PyTypeObject *PY_TYPE(StackTraceElement);

    class t_StackTraceElement {
    public:
      PyObject_HEAD
      StackTraceElement object;
      static PyObject *wrap_Object(const StackTraceElement&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
