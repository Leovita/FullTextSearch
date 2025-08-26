#ifndef java_util_Spliterator$OfInt_H
#define java_util_Spliterator$OfInt_H

#include "java/util/Spliterator$OfPrimitive.h"

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
    class Spliterator$OfInt;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfInt : public ::java::util::Spliterator$OfPrimitive {
     public:
      enum {
        mid_forEachRemaining_b4f64d55664646ca,
        mid_forEachRemaining_ba60f3799f8c83fa,
        mid_tryAdvance_a04103c7b2de0755,
        mid_tryAdvance_5a475f1f43535226,
        mid_trySplit_951c7414f4694b50,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfInt(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfInt(const Spliterator$OfInt& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::Consumer &) const;
      void forEachRemaining(const ::java::util::function::IntConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::Consumer &) const;
      jboolean tryAdvance(const ::java::util::function::IntConsumer &) const;
      Spliterator$OfInt trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfInt);
    extern PyTypeObject *PY_TYPE(Spliterator$OfInt);

    class t_Spliterator$OfInt {
    public:
      PyObject_HEAD
      Spliterator$OfInt object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfInt *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfInt&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfInt&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
