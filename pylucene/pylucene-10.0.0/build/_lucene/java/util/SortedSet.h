#ifndef java_util_SortedSet_H
#define java_util_SortedSet_H

#include "java/util/Set.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class SortedSet;
    class Spliterator;
    class Comparator;
    class SequencedSet;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedSet : public ::java::util::Set {
     public:
      enum {
        mid_addFirst_501c3eb890ff6d79,
        mid_addLast_501c3eb890ff6d79,
        mid_comparator_5cc89c689cd941fe,
        mid_first_4819806f62f1360a,
        mid_getFirst_4819806f62f1360a,
        mid_getLast_4819806f62f1360a,
        mid_headSet_f231c428223f5b8c,
        mid_last_4819806f62f1360a,
        mid_removeFirst_4819806f62f1360a,
        mid_removeLast_4819806f62f1360a,
        mid_reversed_fac2c6c26339d168,
        mid_spliterator_fd118e26a3de79e6,
        mid_subSet_1f99b28c25ad8a5b,
        mid_tailSet_f231c428223f5b8c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SortedSet(jobject obj) : ::java::util::Set(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SortedSet(const SortedSet& obj) : ::java::util::Set(obj) {}

      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      ::java::util::Comparator comparator() const;
      ::java::lang::Object first() const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      SortedSet headSet(const ::java::lang::Object &) const;
      ::java::lang::Object last() const;
      ::java::lang::Object removeFirst() const;
      ::java::lang::Object removeLast() const;
      SortedSet reversed() const;
      ::java::util::Spliterator spliterator() const;
      SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SortedSet tailSet(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SortedSet);
    extern PyTypeObject *PY_TYPE(SortedSet);

    class t_SortedSet {
    public:
      PyObject_HEAD
      SortedSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_SortedSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SortedSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SortedSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
