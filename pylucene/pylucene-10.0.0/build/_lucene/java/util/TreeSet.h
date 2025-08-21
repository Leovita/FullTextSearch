#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class SortedSet;
    class Collection;
    class NavigableSet;
    class Spliterator;
    class Comparator;
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

    class TreeSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_40eba2cff967cc45,
        mid_init$_480edaf434ebe52f,
        mid_init$_5f8b1342c457e8aa,
        mid_add_570b5248a6da3ef6,
        mid_addAll_f2a1f31c5865e20d,
        mid_addFirst_eb61ef4d1db15d08,
        mid_addLast_eb61ef4d1db15d08,
        mid_ceiling_5fd81664d2d475e1,
        mid_clear_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        mid_comparator_39238840448c1807,
        mid_contains_570b5248a6da3ef6,
        mid_descendingIterator_0db4c76ff7ee995b,
        mid_descendingSet_556010bda6404a08,
        mid_first_5655ed8670534604,
        mid_floor_5fd81664d2d475e1,
        mid_headSet_1516bad7f6fb1290,
        mid_headSet_6a24b70872af969c,
        mid_higher_5fd81664d2d475e1,
        mid_isEmpty_947277eca0748c4e,
        mid_iterator_0db4c76ff7ee995b,
        mid_last_5655ed8670534604,
        mid_lower_5fd81664d2d475e1,
        mid_pollFirst_5655ed8670534604,
        mid_pollLast_5655ed8670534604,
        mid_remove_570b5248a6da3ef6,
        mid_size_20fbf7565993c3d7,
        mid_spliterator_eebbc9cffa204672,
        mid_subSet_1d475f20354e842e,
        mid_subSet_bfd493acadefcd46,
        mid_tailSet_1516bad7f6fb1290,
        mid_tailSet_6a24b70872af969c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TreeSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TreeSet(const TreeSet& obj) : ::java::util::AbstractSet(obj) {}

      TreeSet();
      TreeSet(const ::java::util::Collection &);
      TreeSet(const ::java::util::Comparator &);
      TreeSet(const ::java::util::SortedSet &);

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      ::java::util::Comparator comparator() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::util::NavigableSet descendingSet() const;
      ::java::lang::Object first() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object last() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TreeSet);
    extern PyTypeObject *PY_TYPE(TreeSet);

    class t_TreeSet {
    public:
      PyObject_HEAD
      TreeSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_TreeSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const TreeSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const TreeSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
