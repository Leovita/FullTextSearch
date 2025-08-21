#ifndef java_lang_Iterable_H
#define java_lang_Iterable_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class Consumer;
    }
    class Spliterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Iterable : public ::java::lang::Object {
     public:
      enum {
        mid_forEach_9460fa31d6623bfb,
        mid_iterator_0db4c76ff7ee995b,
        mid_spliterator_eebbc9cffa204672,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Iterable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Iterable(const Iterable& obj) : ::java::lang::Object(obj) {}

      void forEach(const ::java::util::function::Consumer &) const;
      ::java::util::Iterator iterator() const;
      ::java::util::Spliterator spliterator() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Iterable);
    extern PyTypeObject *PY_TYPE(Iterable);

    class t_Iterable {
    public:
      PyObject_HEAD
      Iterable object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Iterable *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Iterable&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Iterable&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
