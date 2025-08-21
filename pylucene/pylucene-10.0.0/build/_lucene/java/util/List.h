#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/SequencedCollection.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class UnaryOperator;
    }
    class Collection;
    class List;
    class ListIterator;
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

    class List : public ::java::util::SequencedCollection {
     public:
      enum {
        mid_add_570b5248a6da3ef6,
        mid_add_45daa0687d5df9b5,
        mid_addAll_f2a1f31c5865e20d,
        mid_addAll_30cee388a7b048af,
        mid_addFirst_eb61ef4d1db15d08,
        mid_addLast_eb61ef4d1db15d08,
        mid_clear_3720c61b0679eb3e,
        mid_contains_570b5248a6da3ef6,
        mid_containsAll_f2a1f31c5865e20d,
        mid_copyOf_93d4f44cee5de8eb,
        mid_equals_570b5248a6da3ef6,
        mid_get_eb7eace67c4a21fd,
        mid_getFirst_5655ed8670534604,
        mid_getLast_5655ed8670534604,
        mid_hashCode_20fbf7565993c3d7,
        mid_indexOf_657656e6a597f732,
        mid_isEmpty_947277eca0748c4e,
        mid_iterator_0db4c76ff7ee995b,
        mid_lastIndexOf_657656e6a597f732,
        mid_listIterator_0f4ac4d253da0dce,
        mid_listIterator_c5b65026385ab4af,
        mid_of_36830460e10839eb,
        mid_of_c1c05447f808d260,
        mid_of_b887ee42d9bb67f9,
        mid_of_66eed69f7b83d462,
        mid_of_58760109881da01b,
        mid_of_f0bc5e1e71c16eca,
        mid_of_dae497ada2562257,
        mid_of_2846e22cfe72480a,
        mid_of_a39cb53f1022d529,
        mid_of_36fd4d2d329a336d,
        mid_of_9fb40195425a35c9,
        mid_of_47918a7df2576f28,
        mid_remove_eb7eace67c4a21fd,
        mid_remove_570b5248a6da3ef6,
        mid_removeAll_f2a1f31c5865e20d,
        mid_removeFirst_5655ed8670534604,
        mid_removeLast_5655ed8670534604,
        mid_replaceAll_b7e61e41bd5d4ce6,
        mid_retainAll_f2a1f31c5865e20d,
        mid_reversed_36830460e10839eb,
        mid_set_b84ce9d3b2137b5e,
        mid_size_20fbf7565993c3d7,
        mid_sort_480edaf434ebe52f,
        mid_spliterator_eebbc9cffa204672,
        mid_subList_3690552717f6ec88,
        mid_toArray_e6b839682a4610a6,
        mid_toArray_1794d6b866766560,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit List(jobject obj) : ::java::util::SequencedCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      List(const List& obj) : ::java::util::SequencedCollection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      static List copyOf(const ::java::util::Collection &);
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(jint) const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      static List of();
      static List of(const JArray< ::java::lang::Object > &);
      static List of(const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static List of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      ::java::lang::Object removeFirst() const;
      ::java::lang::Object removeLast() const;
      void replaceAll(const ::java::util::function::UnaryOperator &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      List reversed() const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(List);
    extern PyTypeObject *PY_TYPE(List);

    class t_List {
    public:
      PyObject_HEAD
      List object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_List *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const List&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const List&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
