#ifndef java_util_NavigableSet_H
#define java_util_NavigableSet_H

#include "java/util/SortedSet.h"

namespace java {
  namespace util {
    class Iterator;
    class NavigableSet;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableSet : public ::java::util::SortedSet {
     public:
      enum {
        mid_ceiling_e2c45b124c12f4ec,
        mid_descendingIterator_c7985fafdcf40e83,
        mid_descendingSet_14f8c5e2b19c135d,
        mid_floor_e2c45b124c12f4ec,
        mid_headSet_f231c428223f5b8c,
        mid_headSet_daee4ccd29b8e6cb,
        mid_higher_e2c45b124c12f4ec,
        mid_iterator_c7985fafdcf40e83,
        mid_lower_e2c45b124c12f4ec,
        mid_pollFirst_4819806f62f1360a,
        mid_pollLast_4819806f62f1360a,
        mid_removeFirst_4819806f62f1360a,
        mid_removeLast_4819806f62f1360a,
        mid_reversed_14f8c5e2b19c135d,
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

      explicit NavigableSet(jobject obj) : ::java::util::SortedSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableSet(const NavigableSet& obj) : ::java::util::SortedSet(obj) {}

      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      NavigableSet descendingSet() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::lang::Object removeFirst() const;
      ::java::lang::Object removeLast() const;
      NavigableSet reversed() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableSet);
    extern PyTypeObject *PY_TYPE(NavigableSet);

    class t_NavigableSet {
    public:
      PyObject_HEAD
      NavigableSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_NavigableSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
