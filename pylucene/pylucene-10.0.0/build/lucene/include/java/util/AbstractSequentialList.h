#ifndef java_util_AbstractSequentialList_H
#define java_util_AbstractSequentialList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    class ListIterator;
    class Collection;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractSequentialList : public ::java::util::AbstractList {
     public:
      enum {
        mid_add_09375f3fd0a3af05,
        mid_addAll_6a33d3084931e945,
        mid_get_2a2d7d7b9153274c,
        mid_iterator_c7985fafdcf40e83,
        mid_listIterator_a1b8e40853ea22b0,
        mid_remove_2a2d7d7b9153274c,
        mid_set_c8f65d2ef44d5c7c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractSequentialList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractSequentialList(const AbstractSequentialList& obj) : ::java::util::AbstractList(obj) {}

      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      ::java::lang::Object get(jint) const;
      ::java::util::Iterator iterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractSequentialList);
    extern PyTypeObject *PY_TYPE(AbstractSequentialList);

    class t_AbstractSequentialList {
    public:
      PyObject_HEAD
      AbstractSequentialList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractSequentialList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractSequentialList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractSequentialList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
