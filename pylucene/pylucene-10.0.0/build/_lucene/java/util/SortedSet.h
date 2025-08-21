#ifndef java_util_SortedSet_H
#define java_util_SortedSet_H

#include "java/util/Set.h"

namespace java {
  namespace util {
    class SortedSet;
    class SequencedSet;
    class Spliterator;
    class Comparator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedSet : public ::java::util::Set {
     public:
      enum {
        mid_addFirst_eb61ef4d1db15d08,
        mid_addLast_eb61ef4d1db15d08,
        mid_comparator_39238840448c1807,
        mid_first_5655ed8670534604,
        mid_getFirst_5655ed8670534604,
        mid_getLast_5655ed8670534604,
        mid_headSet_1516bad7f6fb1290,
        mid_last_5655ed8670534604,
        mid_removeFirst_5655ed8670534604,
        mid_removeLast_5655ed8670534604,
        mid_reversed_8a890a5a6ace5427,
        mid_spliterator_eebbc9cffa204672,
        mid_subSet_1d475f20354e842e,
        mid_tailSet_1516bad7f6fb1290,
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
