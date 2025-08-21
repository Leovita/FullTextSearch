#ifndef java_lang_Object_H
#define java_lang_Object_H

#include "JObject.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class InterruptedException;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Object : public ::JObject {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_equals_570b5248a6da3ef6,
        mid_getClass_8b9fee113c1a0b81,
        mid_hashCode_20fbf7565993c3d7,
        mid_notify_3720c61b0679eb3e,
        mid_notifyAll_3720c61b0679eb3e,
        mid_toString_09a7afff1868fc5e,
        mid_wait_3720c61b0679eb3e,
        mid_wait_8b3d46852b435a94,
        mid_wait_b0983bb665c1a771,
        mid_finalize_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Object(jobject obj) : ::JObject(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Object(const Object& obj) : ::JObject(obj) {}

      Object();

      jboolean equals(const Object &) const;
      ::java::lang::Class getClass() const;
      jint hashCode() const;
      void notify() const;
      void notifyAll() const;
      ::java::lang::String toString() const;
      void wait() const;
      void wait(jlong) const;
      void wait(jlong, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Object);
    extern PyTypeObject *PY_TYPE(Object);

    class t_Object {
    public:
      PyObject_HEAD
      Object object;
      static PyObject *wrap_Object(const Object&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
