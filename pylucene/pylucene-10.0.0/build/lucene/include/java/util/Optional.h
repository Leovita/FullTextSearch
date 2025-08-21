#ifndef java_util_Optional_H
#define java_util_Optional_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class Consumer;
      class Predicate;
      class Function;
    }
    class Optional;
  }
  namespace lang {
    class Class;
    class String;
    class Runnable;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Optional : public ::java::lang::Object {
     public:
      enum {
        mid_empty_d95173840d09a723,
        mid_equals_570b5248a6da3ef6,
        mid_filter_bd42cf89963da20f,
        mid_flatMap_82d21b46e7f72d9e,
        mid_get_5655ed8670534604,
        mid_hashCode_20fbf7565993c3d7,
        mid_ifPresent_9460fa31d6623bfb,
        mid_ifPresentOrElse_682b0f0c58da8db3,
        mid_isEmpty_947277eca0748c4e,
        mid_isPresent_947277eca0748c4e,
        mid_map_82d21b46e7f72d9e,
        mid_of_3504f13877c58f3d,
        mid_ofNullable_3504f13877c58f3d,
        mid_or_7995029716ff52cf,
        mid_orElse_5fd81664d2d475e1,
        mid_orElseGet_e52a69060ec0f8d5,
        mid_orElseThrow_5655ed8670534604,
        mid_orElseThrow_e52a69060ec0f8d5,
        mid_toString_09a7afff1868fc5e,
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
