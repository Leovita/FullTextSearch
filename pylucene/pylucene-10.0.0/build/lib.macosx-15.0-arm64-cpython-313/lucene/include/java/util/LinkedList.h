#ifndef java_util_LinkedList_H
#define java_util_LinkedList_H

#include "java/util/AbstractSequentialList.h"

namespace java {
  namespace util {
    class Iterator;
    class LinkedList;
    class Collection;
    class ListIterator;
    class Spliterator;
    class Deque;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class Object;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedList : public ::java::util::AbstractSequentialList {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_40eba2cff967cc45,
        mid_add_570b5248a6da3ef6,
        mid_add_45daa0687d5df9b5,
        mid_addAll_f2a1f31c5865e20d,
        mid_addAll_30cee388a7b048af,
        mid_addFirst_eb61ef4d1db15d08,
        mid_addLast_eb61ef4d1db15d08,
        mid_clear_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        mid_contains_570b5248a6da3ef6,
        mid_descendingIterator_0db4c76ff7ee995b,
        mid_element_5655ed8670534604,
        mid_get_eb7eace67c4a21fd,
        mid_getFirst_5655ed8670534604,
        mid_getLast_5655ed8670534604,
        mid_indexOf_657656e6a597f732,
        mid_lastIndexOf_657656e6a597f732,
        mid_listIterator_c5b65026385ab4af,
        mid_offer_570b5248a6da3ef6,
        mid_offerFirst_570b5248a6da3ef6,
        mid_offerLast_570b5248a6da3ef6,
        mid_peek_5655ed8670534604,
        mid_peekFirst_5655ed8670534604,
        mid_peekLast_5655ed8670534604,
        mid_poll_5655ed8670534604,
        mid_pollFirst_5655ed8670534604,
        mid_pollLast_5655ed8670534604,
        mid_pop_5655ed8670534604,
        mid_push_eb61ef4d1db15d08,
        mid_remove_5655ed8670534604,
        mid_remove_eb7eace67c4a21fd,
        mid_remove_570b5248a6da3ef6,
        mid_removeFirst_5655ed8670534604,
        mid_removeFirstOccurrence_570b5248a6da3ef6,
        mid_removeLast_5655ed8670534604,
        mid_removeLastOccurrence_570b5248a6da3ef6,
        mid_reversed_18ad2615a289b7c9,
        mid_set_b84ce9d3b2137b5e,
        mid_size_20fbf7565993c3d7,
        mid_spliterator_eebbc9cffa204672,
        mid_toArray_e6b839682a4610a6,
        mid_toArray_1794d6b866766560,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedList(jobject obj) : ::java::util::AbstractSequentialList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      LinkedList(const LinkedList& obj) : ::java::util::AbstractSequentialList(obj) {}

      LinkedList();
      LinkedList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object get(jint) const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      jint indexOf(const ::java::lang::Object &) const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator(jint) const;
      jboolean offer(const ::java::lang::Object &) const;
      jboolean offerFirst(const ::java::lang::Object &) const;
      jboolean offerLast(const ::java::lang::Object &) const;
      ::java::lang::Object peek() const;
      ::java::lang::Object peekFirst() const;
      ::java::lang::Object peekLast() const;
      ::java::lang::Object poll() const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::lang::Object pop() const;
      void push(const ::java::lang::Object &) const;
      ::java::lang::Object remove() const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      LinkedList reversed() const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(LinkedList);
    extern PyTypeObject *PY_TYPE(LinkedList);

    class t_LinkedList {
    public:
      PyObject_HEAD
      LinkedList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_LinkedList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
