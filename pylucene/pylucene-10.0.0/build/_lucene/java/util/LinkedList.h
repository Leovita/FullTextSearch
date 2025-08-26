#ifndef java_util_LinkedList_H
#define java_util_LinkedList_H

#include "java/util/AbstractSequentialList.h"

namespace java {
  namespace util {
    class Iterator;
    class Deque;
    class ListIterator;
    class Collection;
    class Spliterator;
    class LinkedList;
  }
  namespace lang {
    class Cloneable;
    class Object;
    class Class;
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
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_b5398b431eb321fb,
        mid_add_00d17418847797d4,
        mid_add_09375f3fd0a3af05,
        mid_addAll_155d0ed876869448,
        mid_addAll_6a33d3084931e945,
        mid_addFirst_501c3eb890ff6d79,
        mid_addLast_501c3eb890ff6d79,
        mid_clear_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        mid_contains_00d17418847797d4,
        mid_descendingIterator_c7985fafdcf40e83,
        mid_element_4819806f62f1360a,
        mid_get_2a2d7d7b9153274c,
        mid_getFirst_4819806f62f1360a,
        mid_getLast_4819806f62f1360a,
        mid_indexOf_3b738b91667a06c2,
        mid_lastIndexOf_3b738b91667a06c2,
        mid_listIterator_a1b8e40853ea22b0,
        mid_offer_00d17418847797d4,
        mid_offerFirst_00d17418847797d4,
        mid_offerLast_00d17418847797d4,
        mid_peek_4819806f62f1360a,
        mid_peekFirst_4819806f62f1360a,
        mid_peekLast_4819806f62f1360a,
        mid_poll_4819806f62f1360a,
        mid_pollFirst_4819806f62f1360a,
        mid_pollLast_4819806f62f1360a,
        mid_pop_4819806f62f1360a,
        mid_push_501c3eb890ff6d79,
        mid_remove_4819806f62f1360a,
        mid_remove_2a2d7d7b9153274c,
        mid_remove_00d17418847797d4,
        mid_removeFirst_4819806f62f1360a,
        mid_removeFirstOccurrence_00d17418847797d4,
        mid_removeLast_4819806f62f1360a,
        mid_removeLastOccurrence_00d17418847797d4,
        mid_reversed_99c1b12922548bb8,
        mid_set_c8f65d2ef44d5c7c,
        mid_size_bd89ce15dad49192,
        mid_spliterator_fd118e26a3de79e6,
        mid_toArray_1e688954528bc160,
        mid_toArray_0b4a993b49b6d8e8,
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
