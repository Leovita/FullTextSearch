#ifndef java_lang_ref_Reference_H
#define java_lang_ref_Reference_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {
    namespace ref {

      class Reference : public ::java::lang::Object {
       public:
        enum {
          mid_clear_e7bdbe105ce1bafb,
          mid_enqueue_9aa4f33e82ea333f,
          mid_get_4819806f62f1360a,
          mid_isEnqueued_9aa4f33e82ea333f,
          mid_reachabilityFence_501c3eb890ff6d79,
          mid_refersTo_00d17418847797d4,
          mid_clone_4819806f62f1360a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Reference(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Reference(const Reference& obj) : ::java::lang::Object(obj) {}

        void clear() const;
        jboolean enqueue() const;
        ::java::lang::Object get() const;
        jboolean isEnqueued() const;
        static void reachabilityFence(const ::java::lang::Object &);
        jboolean refersTo(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    namespace ref {
      extern PyType_Def PY_TYPE_DEF(Reference);
      extern PyTypeObject *PY_TYPE(Reference);

      class t_Reference {
      public:
        PyObject_HEAD
        Reference object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Reference *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Reference&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Reference&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
