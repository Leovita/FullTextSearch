#ifndef java_util_Spliterator$OfLong_H
#define java_util_Spliterator$OfLong_H

#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class Long;
  }
  namespace util {
    class Spliterator$OfLong;
    namespace function {
      class LongConsumer;
      class Consumer;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfLong : public ::java::util::Spliterator$OfPrimitive {
     public:
      enum {
        mid_forEachRemaining_b4f64d55664646ca,
        mid_forEachRemaining_3da09fcb83b32a02,
        mid_tryAdvance_a04103c7b2de0755,
        mid_tryAdvance_a944d917ee7de5b2,
        mid_trySplit_96f989592ace0d31,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfLong(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfLong(const Spliterator$OfLong& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::Consumer &) const;
      void forEachRemaining(const ::java::util::function::LongConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::Consumer &) const;
      jboolean tryAdvance(const ::java::util::function::LongConsumer &) const;
      Spliterator$OfLong trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfLong);
    extern PyTypeObject *PY_TYPE(Spliterator$OfLong);

    class t_Spliterator$OfLong {
    public:
      PyObject_HEAD
      Spliterator$OfLong object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfLong *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfLong&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfLong&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
