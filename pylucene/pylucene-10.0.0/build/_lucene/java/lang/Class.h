#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class ClassNotFoundException;
    class Class;
    class String;
    class InstantiationException;
    class Package;
    class Module;
    class ClassLoader;
    class SecurityException;
  }
  namespace io {
    class InputStream;
    class Serializable;
  }
  namespace util {
    class Set;
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Class : public ::java::lang::Object {
     public:
      enum {
        mid_arrayType_8b9fee113c1a0b81,
        mid_asSubclass_4819f4605c0ada85,
        mid_cast_5fd81664d2d475e1,
        mid_componentType_8b9fee113c1a0b81,
        mid_descriptorString_09a7afff1868fc5e,
        mid_desiredAssertionStatus_947277eca0748c4e,
        mid_forName_f5e647a8ccc975d0,
        mid_forName_bccb69b8568038f2,
        mid_forName_a504bdd1f956ae80,
        mid_getCanonicalName_09a7afff1868fc5e,
        mid_getClassLoader_c8c017ac4e9c9110,
        mid_getClasses_c90261fb9ae27a0d,
        mid_getComponentType_8b9fee113c1a0b81,
        mid_getDeclaredClasses_c90261fb9ae27a0d,
        mid_getDeclaringClass_8b9fee113c1a0b81,
        mid_getEnclosingClass_8b9fee113c1a0b81,
        mid_getEnumConstants_e6b839682a4610a6,
        mid_getInterfaces_c90261fb9ae27a0d,
        mid_getModifiers_20fbf7565993c3d7,
        mid_getModule_48c5241001e44a43,
        mid_getName_09a7afff1868fc5e,
        mid_getNestHost_8b9fee113c1a0b81,
        mid_getNestMembers_c90261fb9ae27a0d,
        mid_getPackage_569dcfd44d172969,
        mid_getPackageName_09a7afff1868fc5e,
        mid_getPermittedSubclasses_c90261fb9ae27a0d,
        mid_getResourceAsStream_4306cf2226901a47,
        mid_getSigners_e6b839682a4610a6,
        mid_getSimpleName_09a7afff1868fc5e,
        mid_getSuperclass_8b9fee113c1a0b81,
        mid_getTypeName_09a7afff1868fc5e,
        mid_isAnnotation_947277eca0748c4e,
        mid_isAnonymousClass_947277eca0748c4e,
        mid_isArray_947277eca0748c4e,
        mid_isAssignableFrom_0be35c16891dfd3c,
        mid_isEnum_947277eca0748c4e,
        mid_isHidden_947277eca0748c4e,
        mid_isInstance_570b5248a6da3ef6,
        mid_isInterface_947277eca0748c4e,
        mid_isLocalClass_947277eca0748c4e,
        mid_isMemberClass_947277eca0748c4e,
        mid_isNestmateOf_0be35c16891dfd3c,
        mid_isPrimitive_947277eca0748c4e,
        mid_isRecord_947277eca0748c4e,
        mid_isSealed_947277eca0748c4e,
        mid_isSynthetic_947277eca0748c4e,
        mid_isUnnamedClass_947277eca0748c4e,
        mid_newInstance_5655ed8670534604,
        mid_toGenericString_09a7afff1868fc5e,
        mid_toString_09a7afff1868fc5e,
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
      jboolean isUnnamedClass() const;
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
