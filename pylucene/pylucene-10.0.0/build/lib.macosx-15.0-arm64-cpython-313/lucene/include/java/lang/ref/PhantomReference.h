#ifndef java_lang_ref_PhantomReference_H
#define java_lang_ref_PhantomReference_H

#include "java/lang/ref/Reference.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {
    namespace ref {

      class PhantomReference : public ::java::lang::ref::Reference {
       public:
        enum {
          mid_get_5655ed8670534604,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PhantomReference(jobject obj) : ::java::lang::ref::Reference(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PhantomReference(const PhantomReference& obj) : ::java::lang::ref::Reference(obj) {}

        ::java::lang::Object get() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    namespace ref {
      extern PyType_Def PY_TYPE_DEF(PhantomReference);
      extern PyTypeObject *PY_TYPE(PhantomReference);

      class t_PhantomReference {
      public:
        PyObject_HEAD
        PhantomReference object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PhantomReference *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PhantomReference&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PhantomReference&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
