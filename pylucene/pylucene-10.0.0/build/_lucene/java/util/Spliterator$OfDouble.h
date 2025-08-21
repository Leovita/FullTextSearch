#ifndef java_util_Spliterator$OfDouble_H
#define java_util_Spliterator$OfDouble_H

#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace util {
    namespace function {
      class Consumer;
      class DoubleConsumer;
    }
    class Spliterator$OfDouble;
  }
  namespace lang {
    class Class;
    class Double;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfDouble : public ::java::util::Spliterator$OfPrimitive {
     public:
      enum {
        mid_forEachRemaining_9460fa31d6623bfb,
        mid_forEachRemaining_43492fe12aca9a25,
        mid_tryAdvance_6d1c2840cf2a57a7,
        mid_tryAdvance_5b1f374234e23f40,
        mid_trySplit_0c9672e91b152074,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfDouble(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfDouble(const Spliterator$OfDouble& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::Consumer &) const;
      void forEachRemaining(const ::java::util::function::DoubleConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::Consumer &) const;
      jboolean tryAdvance(const ::java::util::function::DoubleConsumer &) const;
      Spliterator$OfDouble trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfDouble);
    extern PyTypeObject *PY_TYPE(Spliterator$OfDouble);

    class t_Spliterator$OfDouble {
    public:
      PyObject_HEAD
      Spliterator$OfDouble object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfDouble *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfDouble&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfDouble&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
