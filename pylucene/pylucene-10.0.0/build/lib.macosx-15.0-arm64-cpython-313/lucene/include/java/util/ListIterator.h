#ifndef java_util_ListIterator_H
#define java_util_ListIterator_H

#include "java/util/Iterator.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ListIterator : public ::java::util::Iterator {
     public:
      enum {
        mid_add_eb61ef4d1db15d08,
        mid_hasNext_947277eca0748c4e,
        mid_hasPrevious_947277eca0748c4e,
        mid_next_5655ed8670534604,
        mid_nextIndex_20fbf7565993c3d7,
        mid_previous_5655ed8670534604,
        mid_previousIndex_20fbf7565993c3d7,
        mid_remove_3720c61b0679eb3e,
        mid_set_eb61ef4d1db15d08,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ListIterator(jobject obj) : ::java::util::Iterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ListIterator(const ListIterator& obj) : ::java::util::Iterator(obj) {}

      void add(const ::java::lang::Object &) const;
      jboolean hasNext() const;
      jboolean hasPrevious() const;
      ::java::lang::Object next() const;
      jint nextIndex() const;
      ::java::lang::Object previous() const;
      jint previousIndex() const;
      void remove() const;
      void set(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ListIterator);
    extern PyTypeObject *PY_TYPE(ListIterator);

    class t_ListIterator {
    public:
      PyObject_HEAD
      ListIterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ListIterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ListIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ListIterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
