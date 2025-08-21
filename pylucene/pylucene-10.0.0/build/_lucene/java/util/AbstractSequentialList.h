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
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractSequentialList : public ::java::util::AbstractList {
     public:
      enum {
        mid_add_45daa0687d5df9b5,
        mid_addAll_30cee388a7b048af,
        mid_get_eb7eace67c4a21fd,
        mid_iterator_0db4c76ff7ee995b,
        mid_listIterator_c5b65026385ab4af,
        mid_remove_eb7eace67c4a21fd,
        mid_set_b84ce9d3b2137b5e,
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
