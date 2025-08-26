#ifndef java_util_Optional_H
#define java_util_Optional_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
    class Throwable;
    class String;
  }
  namespace util {
    namespace function {
      class Predicate;
      class Function;
      class Supplier;
      class Consumer;
    }
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Optional : public ::java::lang::Object {
     public:
      enum {
        mid_empty_9a972c66ccbfd657,
        mid_equals_00d17418847797d4,
        mid_filter_4c71120b72e3ae18,
        mid_flatMap_b8cfd2ec14588279,
        mid_get_4819806f62f1360a,
        mid_hashCode_bd89ce15dad49192,
        mid_ifPresent_b4f64d55664646ca,
        mid_ifPresentOrElse_477a46962c7a43aa,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_isPresent_9aa4f33e82ea333f,
        mid_map_b8cfd2ec14588279,
        mid_of_3e4d64a011ec261c,
        mid_ofNullable_3e4d64a011ec261c,
        mid_or_7e1a9837698834f4,
        mid_orElse_e2c45b124c12f4ec,
        mid_orElseGet_6640ad16f7785fda,
        mid_orElseThrow_4819806f62f1360a,
        mid_orElseThrow_6640ad16f7785fda,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Optional(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Optional(const Optional& obj) : ::java::lang::Object(obj) {}

      static Optional empty();
      jboolean equals(const ::java::lang::Object &) const;
      Optional filter(const ::java::util::function::Predicate &) const;
      Optional flatMap(const ::java::util::function::Function &) const;
      ::java::lang::Object get() const;
      jint hashCode() const;
      void ifPresent(const ::java::util::function::Consumer &) const;
      void ifPresentOrElse(const ::java::util::function::Consumer &, const ::java::lang::Runnable &) const;
      jboolean isEmpty() const;
      jboolean isPresent() const;
      Optional map(const ::java::util::function::Function &) const;
      static Optional of(const ::java::lang::Object &);
      static Optional ofNullable(const ::java::lang::Object &);
      Optional or$(const ::java::util::function::Supplier &) const;
      ::java::lang::Object orElse(const ::java::lang::Object &) const;
      ::java::lang::Object orElseGet(const ::java::util::function::Supplier &) const;
      ::java::lang::Object orElseThrow() const;
      ::java::lang::Object orElseThrow(const ::java::util::function::Supplier &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Optional);
    extern PyTypeObject *PY_TYPE(Optional);

    class t_Optional {
    public:
      PyObject_HEAD
      Optional object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Optional *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Optional&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Optional&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
