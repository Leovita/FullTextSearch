#ifndef java_util_Deque_H
#define java_util_Deque_H

#include "java/util/Queue.h"

namespace java {
  namespace util {
    class Iterator;
    class Deque;
    class SequencedCollection;
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

    class Deque : public ::java::util::Queue {
     public:
      enum {
        mid_add_00d17418847797d4,
        mid_addAll_155d0ed876869448,
        mid_addFirst_501c3eb890ff6d79,
        mid_addLast_501c3eb890ff6d79,
        mid_contains_00d17418847797d4,
        mid_descendingIterator_c7985fafdcf40e83,
        mid_element_4819806f62f1360a,
        mid_getFirst_4819806f62f1360a,
        mid_getLast_4819806f62f1360a,
        mid_iterator_c7985fafdcf40e83,
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
        mid_remove_00d17418847797d4,
        mid_removeFirst_4819806f62f1360a,
        mid_removeFirstOccurrence_00d17418847797d4,
        mid_removeLast_4819806f62f1360a,
        mid_removeLastOccurrence_00d17418847797d4,
        mid_reversed_7b57eff2d776489c,
        mid_size_bd89ce15dad49192,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Deque(jobject obj) : ::java::util::Queue(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Deque(const Deque& obj) : ::java::util::Queue(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      ::java::util::Iterator iterator() const;
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
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      Deque reversed() const;
      jint size() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Deque);
    extern PyTypeObject *PY_TYPE(Deque);

    class t_Deque {
    public:
      PyObject_HEAD
      Deque object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Deque *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Deque&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Deque&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
