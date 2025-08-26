#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class UnaryOperator;
      class Predicate;
      class Consumer;
    }
    class ListIterator;
    class Collection;
    class Spliterator;
    class RandomAccess;
    class Comparator;
    class List;
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

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_8226bd0b0fc13dba,
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
        mid_ensureCapacity_8226bd0b0fc13dba,
        mid_equals_00d17418847797d4,
        mid_forEach_b4f64d55664646ca,
        mid_get_2a2d7d7b9153274c,
        mid_getFirst_4819806f62f1360a,
        mid_getLast_4819806f62f1360a,
        mid_hashCode_bd89ce15dad49192,
        mid_indexOf_3b738b91667a06c2,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_iterator_c7985fafdcf40e83,
        mid_lastIndexOf_3b738b91667a06c2,
        mid_listIterator_f5b10a8957c7e8ce,
        mid_listIterator_a1b8e40853ea22b0,
        mid_remove_2a2d7d7b9153274c,
        mid_remove_00d17418847797d4,
        mid_removeAll_155d0ed876869448,
        mid_removeFirst_4819806f62f1360a,
        mid_removeIf_8171e935ea14a99c,
        mid_removeLast_4819806f62f1360a,
        mid_replaceAll_fcc268ba85ee9ee5,
        mid_retainAll_155d0ed876869448,
        mid_set_c8f65d2ef44d5c7c,
        mid_size_bd89ce15dad49192,
        mid_sort_236c903ae32a3610,
        mid_spliterator_fd118e26a3de79e6,
        mid_subList_6d7644d6c0697519,
        mid_toArray_1e688954528bc160,
        mid_toArray_0b4a993b49b6d8e8,
        mid_trimToSize_e7bdbe105ce1bafb,
        mid_removeRange_645c25455f5b9b1c,
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
