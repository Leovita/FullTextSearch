#ifndef java_util_AbstractList_H
#define java_util_AbstractList_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class List;
    class ListIterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractList : public ::java::util::AbstractCollection {
     public:
      enum {
        mid_add_570b5248a6da3ef6,
        mid_add_45daa0687d5df9b5,
        mid_addAll_30cee388a7b048af,
        mid_clear_3720c61b0679eb3e,
        mid_equals_570b5248a6da3ef6,
        mid_get_eb7eace67c4a21fd,
        mid_hashCode_20fbf7565993c3d7,
        mid_indexOf_657656e6a597f732,
        mid_iterator_0db4c76ff7ee995b,
        mid_lastIndexOf_657656e6a597f732,
        mid_listIterator_0f4ac4d253da0dce,
        mid_listIterator_c5b65026385ab4af,
        mid_remove_eb7eace67c4a21fd,
        mid_set_b84ce9d3b2137b5e,
        mid_subList_3690552717f6ec88,
        mid_removeRange_e13cff512ebda969,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractList(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractList(const AbstractList& obj) : ::java::util::AbstractCollection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      ::java::util::List subList(jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractList);
    extern PyTypeObject *PY_TYPE(AbstractList);

    class t_AbstractList {
    public:
      PyObject_HEAD
      AbstractList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
