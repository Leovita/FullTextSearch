#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class SecurityException;
    class String;
    class Class;
    class IllegalAccessException;
    class Module;
    class ClassNotFoundException;
    class Package;
    class ClassLoader;
    class InstantiationException;
  }
  namespace io {
    class InputStream;
    class Serializable;
  }
  namespace util {
    class Optional;
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Class : public ::java::lang::Object {
     public:
      enum {
        mid_arrayType_99e3ace59a9dfdb9,
        mid_asSubclass_9757b18cf2c1e150,
        mid_cast_e2c45b124c12f4ec,
        mid_componentType_99e3ace59a9dfdb9,
        mid_descriptorString_e7df854526d67fa3,
        mid_desiredAssertionStatus_9aa4f33e82ea333f,
        mid_forName_34dc63379bcbfa09,
        mid_forName_121a559fad87c9d8,
        mid_forName_a4e09dc50561ff10,
        mid_forPrimitiveName_34dc63379bcbfa09,
        mid_getCanonicalName_e7df854526d67fa3,
        mid_getClassLoader_4897d4d2fef89082,
        mid_getClasses_a0808d604013cf8d,
        mid_getComponentType_99e3ace59a9dfdb9,
        mid_getDeclaredClasses_a0808d604013cf8d,
        mid_getDeclaringClass_99e3ace59a9dfdb9,
        mid_getEnclosingClass_99e3ace59a9dfdb9,
        mid_getEnumConstants_1e688954528bc160,
        mid_getInterfaces_a0808d604013cf8d,
        mid_getModifiers_bd89ce15dad49192,
        mid_getModule_46a63e53598d2664,
        mid_getName_e7df854526d67fa3,
        mid_getNestHost_99e3ace59a9dfdb9,
        mid_getNestMembers_a0808d604013cf8d,
        mid_getPackage_fc67730034bbb751,
        mid_getPackageName_e7df854526d67fa3,
        mid_getPermittedSubclasses_a0808d604013cf8d,
        mid_getResourceAsStream_9bd3a7bffb83deee,
        mid_getSigners_1e688954528bc160,
        mid_getSimpleName_e7df854526d67fa3,
        mid_getSuperclass_99e3ace59a9dfdb9,
        mid_getTypeName_e7df854526d67fa3,
        mid_isAnnotation_9aa4f33e82ea333f,
        mid_isAnonymousClass_9aa4f33e82ea333f,
        mid_isArray_9aa4f33e82ea333f,
        mid_isAssignableFrom_4c29bd646fc74404,
        mid_isEnum_9aa4f33e82ea333f,
        mid_isHidden_9aa4f33e82ea333f,
        mid_isInstance_00d17418847797d4,
        mid_isInterface_9aa4f33e82ea333f,
        mid_isLocalClass_9aa4f33e82ea333f,
        mid_isMemberClass_9aa4f33e82ea333f,
        mid_isNestmateOf_4c29bd646fc74404,
        mid_isPrimitive_9aa4f33e82ea333f,
        mid_isRecord_9aa4f33e82ea333f,
        mid_isSealed_9aa4f33e82ea333f,
        mid_isSynthetic_9aa4f33e82ea333f,
        mid_newInstance_4819806f62f1360a,
        mid_toGenericString_e7df854526d67fa3,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Class(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Class(const Class& obj) : ::java::lang::Object(obj) {}

      Class arrayType() const;
      Class asSubclass(const Class &) const;
      ::java::lang::Object cast(const ::java::lang::Object &) const;
      Class componentType() const;
      ::java::lang::String descriptorString() const;
      jboolean desiredAssertionStatus() const;
      static Class forName(const ::java::lang::String &);
      static Class forName(const ::java::lang::Module &, const ::java::lang::String &);
      static Class forName(const ::java::lang::String &, jboolean, const ::java::lang::ClassLoader &);
      static Class forPrimitiveName(const ::java::lang::String &);
      ::java::lang::String getCanonicalName() const;
      ::java::lang::ClassLoader getClassLoader() const;
      JArray< Class > getClasses() const;
      Class getComponentType() const;
      JArray< Class > getDeclaredClasses() const;
      Class getDeclaringClass() const;
      Class getEnclosingClass() const;
      JArray< ::java::lang::Object > getEnumConstants() const;
      JArray< Class > getInterfaces() const;
      jint getModifiers() const;
      ::java::lang::Module getModule() const;
      ::java::lang::String getName() const;
      Class getNestHost() const;
      JArray< Class > getNestMembers() const;
      ::java::lang::Package getPackage() const;
      ::java::lang::String getPackageName() const;
      JArray< Class > getPermittedSubclasses() const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      JArray< ::java::lang::Object > getSigners() const;
      ::java::lang::String getSimpleName() const;
      Class getSuperclass() const;
      ::java::lang::String getTypeName() const;
      jboolean isAnnotation() const;
      jboolean isAnonymousClass() const;
      jboolean isArray() const;
      jboolean isAssignableFrom(const Class &) const;
      jboolean isEnum() const;
      jboolean isHidden() const;
      jboolean isInstance(const ::java::lang::Object &) const;
      jboolean isInterface() const;
      jboolean isLocalClass() const;
      jboolean isMemberClass() const;
      jboolean isNestmateOf(const Class &) const;
      jboolean isPrimitive() const;
      jboolean isRecord() const;
      jboolean isSealed() const;
      jboolean isSynthetic() const;
      ::java::lang::Object newInstance() const;
      ::java::lang::String toGenericString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Class);
    extern PyTypeObject *PY_TYPE(Class);

    class t_Class {
    public:
      PyObject_HEAD
      Class object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Class *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Class&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Class&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
