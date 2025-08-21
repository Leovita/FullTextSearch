#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class UnaryOperator;
      class Consumer;
      class Predicate;
    }
    class Collection;
    class List;
    class ListIterator;
    class Spliterator;
    class Comparator;
    class RandomAccess;
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

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
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
        mid_ensureCapacity_540b2b23d51b1efd,
        mid_equals_570b5248a6da3ef6,
        mid_forEach_9460fa31d6623bfb,
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
        mid_remove_eb7eace67c4a21fd,
        mid_remove_570b5248a6da3ef6,
        mid_removeAll_f2a1f31c5865e20d,
        mid_removeFirst_5655ed8670534604,
        mid_removeIf_0e2be999b27321d2,
        mid_removeLast_5655ed8670534604,
        mid_replaceAll_b7e61e41bd5d4ce6,
        mid_retainAll_f2a1f31c5865e20d,
        mid_set_b84ce9d3b2137b5e,
        mid_size_20fbf7565993c3d7,
        mid_sort_480edaf434ebe52f,
        mid_spliterator_eebbc9cffa204672,
        mid_subList_3690552717f6ec88,
        mid_toArray_e6b839682a4610a6,
        mid_toArray_1794d6b866766560,
        mid_trimToSize_3720c61b0679eb3e,
        mid_removeRange_e13cff512ebda969,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ArrayList(const ArrayList& obj) : ::java::util::AbstractList(obj) {}

      ArrayList();
      ArrayList(jint);
      ArrayList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      void ensureCapacity(jint) const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::Consumer &) const;
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
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeIf(const ::java::util::function::Predicate &) const;
      ::java::lang::Object removeLast() const;
      void replaceAll(const ::java::util::function::UnaryOperator &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ArrayList);
    extern PyTypeObject *PY_TYPE(ArrayList);

    class t_ArrayList {
    public:
      PyObject_HEAD
      ArrayList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
