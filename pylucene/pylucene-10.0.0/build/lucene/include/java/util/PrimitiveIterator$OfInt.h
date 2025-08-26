#ifndef java_util_PrimitiveIterator$OfInt_H
#define java_util_PrimitiveIterator$OfInt_H

#include "java/util/PrimitiveIterator.h"

namespace java {
  namespace lang {
    class Integer;
    class Object;
    class Class;
  }
  namespace util {
    namespace function {
      class IntConsumer;
      class Consumer;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class PrimitiveIterator$OfInt : public ::java::util::PrimitiveIterator {
     public:
      enum {
        mid_forEachRemaining_b4f64d55664646ca,
        mid_forEachRemaining_ba60f3799f8c83fa,
        mid_next_078821faeee94f65,
        mid_nextInt_bd89ce15dad49192,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrimitiveIterator$OfInt(jobject obj) : ::java::util::PrimitiveIterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrimitiveIterator$OfInt(const PrimitiveIterator$OfInt& obj) : ::java::util::PrimitiveIterator(obj) {}

      void forEachRemaining(const ::java::util::function::Consumer &) const;
      void forEachRemaining(const ::java::util::function::IntConsumer &) const;
      ::java::lang::Integer next() const;
      jint nextInt() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(PrimitiveIterator$OfInt);
    extern PyTypeObject *PY_TYPE(PrimitiveIterator$OfInt);

    class t_PrimitiveIterator$OfInt {
    public:
      PyObject_HEAD
      PrimitiveIterator$OfInt object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_PrimitiveIterator$OfInt *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const PrimitiveIterator$OfInt&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const PrimitiveIterator$OfInt&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
