#ifndef java_util_Deque_H
#define java_util_Deque_H

#include "java/util/Queue.h"

namespace java {
  namespace util {
    class SequencedCollection;
    class Iterator;
    class Collection;
    class Deque;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Deque : public ::java::util::Queue {
     public:
      enum {
        mid_add_570b5248a6da3ef6,
        mid_addAll_f2a1f31c5865e20d,
        mid_addFirst_eb61ef4d1db15d08,
        mid_addLast_eb61ef4d1db15d08,
        mid_contains_570b5248a6da3ef6,
        mid_descendingIterator_0db4c76ff7ee995b,
        mid_element_5655ed8670534604,
        mid_getFirst_5655ed8670534604,
        mid_getLast_5655ed8670534604,
        mid_iterator_0db4c76ff7ee995b,
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
        mid_remove_570b5248a6da3ef6,
        mid_removeFirst_5655ed8670534604,
        mid_removeFirstOccurrence_570b5248a6da3ef6,
        mid_removeLast_5655ed8670534604,
        mid_removeLastOccurrence_570b5248a6da3ef6,
        mid_reversed_87b9d836199f85bf,
        mid_size_20fbf7565993c3d7,
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
