#ifndef java_util_List_H
#define java_util_List_H

#include "java/util/SequencedCollection.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class UnaryOperator;
    }
    class ListIterator;
    class Collection;
    class Spliterator;
    class Comparator;
    class List;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class List : public ::java::util::SequencedCollection {
     public:
      enum {
        mid_add_00d17418847797d4,
        mid_add_09375f3fd0a3af05,
        mid_addAll_155d0ed876869448,
        mid_addAll_6a33d3084931e945,
        mid_addFirst_501c3eb890ff6d79,
        mid_addLast_501c3eb890ff6d79,
        mid_clear_e7bdbe105ce1bafb,
        mid_contains_00d17418847797d4,
        mid_containsAll_155d0ed876869448,
        mid_copyOf_edc76bb8b84c2b2b,
        mid_equals_00d17418847797d4,
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
        mid_of_1387e1e2702ac173,
        mid_of_ebb457715b104bd1,
        mid_of_7c2a76b8364a69bd,
        mid_of_e049fa3b43b4bad3,
        mid_of_759de8da72932a4d,
        mid_of_ed9edda7eae22523,
        mid_of_56e6346d566a2036,
        mid_of_34deb7c7ca4473b7,
        mid_of_bdcf7354306f62ee,
        mid_of_bbe433fecfdb0afd,
        mid_of_d08a6752383f6c8c,
        mid_of_cd2e96ec815da392,
        mid_remove_2a2d7d7b9153274c,
        mid_remove_00d17418847797d4,
        mid_removeAll_155d0ed876869448,
        mid_removeFirst_4819806f62f1360a,
        mid_removeLast_4819806f62f1360a,
        mid_replaceAll_fcc268ba85ee9ee5,
        mid_retainAll_155d0ed876869448,
        mid_reversed_1387e1e2702ac173,
        mid_set_c8f65d2ef44d5c7c,
        mid_size_bd89ce15dad49192,
        mid_sort_236c903ae32a3610,
        mid_spliterator_fd118e26a3de79e6,
        mid_subList_6d7644d6c0697519,
        mid_toArray_1e688954528bc160,
        mid_toArray_0b4a993b49b6d8e8,
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
