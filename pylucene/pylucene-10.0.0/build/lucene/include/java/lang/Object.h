#ifndef java_lang_Object_H
#define java_lang_Object_H

#include "JObject.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Object : public ::JObject {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_equals_00d17418847797d4,
        mid_getClass_99e3ace59a9dfdb9,
        mid_hashCode_bd89ce15dad49192,
        mid_notify_e7bdbe105ce1bafb,
        mid_notifyAll_e7bdbe105ce1bafb,
        mid_toString_e7df854526d67fa3,
        mid_wait_e7bdbe105ce1bafb,
        mid_wait_1d3149fac12f2af3,
        mid_wait_3d289b1efbb219e1,
        mid_finalize_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
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
