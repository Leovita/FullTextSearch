#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class SortedSet;
    class Collection;
    class Spliterator;
    class Comparator;
    class NavigableSet;
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

    class TreeSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_b5398b431eb321fb,
        mid_init$_236c903ae32a3610,
        mid_init$_01c2cf3ced136338,
        mid_add_00d17418847797d4,
        mid_addAll_155d0ed876869448,
        mid_addFirst_501c3eb890ff6d79,
        mid_addLast_501c3eb890ff6d79,
        mid_ceiling_e2c45b124c12f4ec,
        mid_clear_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        mid_comparator_5cc89c689cd941fe,
        mid_contains_00d17418847797d4,
        mid_descendingIterator_c7985fafdcf40e83,
        mid_descendingSet_14f8c5e2b19c135d,
        mid_first_4819806f62f1360a,
        mid_floor_e2c45b124c12f4ec,
        mid_headSet_f231c428223f5b8c,
        mid_headSet_daee4ccd29b8e6cb,
        mid_higher_e2c45b124c12f4ec,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_iterator_c7985fafdcf40e83,
        mid_last_4819806f62f1360a,
        mid_lower_e2c45b124c12f4ec,
        mid_pollFirst_4819806f62f1360a,
        mid_pollLast_4819806f62f1360a,
        mid_remove_00d17418847797d4,
        mid_size_bd89ce15dad49192,
        mid_spliterator_fd118e26a3de79e6,
        mid_subSet_1f99b28c25ad8a5b,
        mid_subSet_e821c18950b968ec,
        mid_tailSet_f231c428223f5b8c,
        mid_tailSet_daee4ccd29b8e6cb,
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
