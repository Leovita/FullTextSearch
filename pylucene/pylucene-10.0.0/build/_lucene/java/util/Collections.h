#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class SortedMap;
    class Collection;
    class Comparator;
    class Set;
    class ArrayList;
    class Queue;
    class Deque;
    class NavigableSet;
    class Iterator;
    class NavigableMap;
    class ListIterator;
    class List;
    class Enumeration;
    class SequencedCollection;
    class SortedSet;
    class Map;
    class Random;
    class SequencedMap;
    class SequencedSet;
  }
  namespace lang {
    class Class;
    class Boolean;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collections : public ::java::lang::Object {
     public:
      enum {
        mid_addAll_d26039feb892e483,
        mid_asLifoQueue_3c7164e5b0c5b13a,
        mid_binarySearch_5a3efe9a0a080963,
        mid_binarySearch_82cc544238086c45,
        mid_checkedCollection_6751940e82cc0bba,
        mid_checkedList_66dc8f789a58af35,
        mid_checkedMap_8c9cd2f2f15b3b75,
        mid_checkedNavigableMap_919989b32aee4d7b,
        mid_checkedNavigableSet_e8fedf4bc7d841f1,
        mid_checkedQueue_14398f5f9546798b,
        mid_checkedSet_2a5421341932b8ab,
        mid_checkedSortedMap_5949a4f315a0e665,
        mid_checkedSortedSet_281bb540388d6788,
        mid_copy_3b2bb963cae6f63c,
        mid_disjoint_225585c79f66eb0d,
        mid_emptyEnumeration_c0dcea0e1246b77b,
        mid_emptyIterator_c7985fafdcf40e83,
        mid_emptyList_1387e1e2702ac173,
        mid_emptyListIterator_f5b10a8957c7e8ce,
        mid_emptyMap_5004bdf19ed33453,
        mid_emptyNavigableMap_d500931568b47f59,
        mid_emptyNavigableSet_14f8c5e2b19c135d,
        mid_emptySet_79131c6bbcf08916,
        mid_emptySortedMap_b51ff49a40ed1f6c,
        mid_emptySortedSet_fac2c6c26339d168,
        mid_enumeration_a3ce73e2c41310ab,
        mid_fill_37ca0990f92a5452,
        mid_frequency_d402a2cf72691a9e,
        mid_indexOfSubList_cc0c5d36b72e99b6,
        mid_lastIndexOfSubList_cc0c5d36b72e99b6,
        mid_list_ea9e28047da595d2,
        mid_max_f351d27a1d611522,
        mid_max_36e01ece747543db,
        mid_min_f351d27a1d611522,
        mid_min_36e01ece747543db,
        mid_nCopies_a13ddcc8f5e960bb,
        mid_newSequencedSetFromMap_892c620bc3dd5ef7,
        mid_newSetFromMap_573f6b747171da36,
        mid_replaceAll_fa2561db26b4ab55,
        mid_reverse_acbb405b60a30822,
        mid_reverseOrder_5cc89c689cd941fe,
        mid_reverseOrder_32fbcabc9f5c9b30,
        mid_rotate_58ce558b2cfa7f58,
        mid_shuffle_acbb405b60a30822,
        mid_shuffle_ed76ffc3698248ed,
        mid_singleton_1c9deec327a99730,
        mid_singletonList_7c2a76b8364a69bd,
        mid_singletonMap_ab088a5e141f6309,
        mid_sort_acbb405b60a30822,
        mid_sort_96bf20ed71b7f7de,
        mid_swap_2f4664eca83c596c,
        mid_synchronizedCollection_70cee4aee20a2fa4,
        mid_synchronizedList_be19c667f3dea389,
        mid_synchronizedMap_6a21740c97b0d8b2,
        mid_synchronizedNavigableMap_898ad8733748b686,
        mid_synchronizedNavigableSet_7702a55749b2edc6,
        mid_synchronizedSet_7c65c2a27d03e5dc,
        mid_synchronizedSortedMap_8f994d98daa7d197,
        mid_synchronizedSortedSet_4b2d08a3866fbd46,
        mid_unmodifiableCollection_70cee4aee20a2fa4,
        mid_unmodifiableList_be19c667f3dea389,
        mid_unmodifiableMap_6a21740c97b0d8b2,
        mid_unmodifiableNavigableMap_898ad8733748b686,
        mid_unmodifiableNavigableSet_7702a55749b2edc6,
        mid_unmodifiableSequencedCollection_bc9152d68e8b9ef5,
        mid_unmodifiableSequencedMap_285a6e1e04f9855a,
        mid_unmodifiableSequencedSet_6900915bf25218a0,
        mid_unmodifiableSet_7c65c2a27d03e5dc,
        mid_unmodifiableSortedMap_8f994d98daa7d197,
        mid_unmodifiableSortedSet_4b2d08a3866fbd46,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collections(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collections(const Collections& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *EMPTY_LIST;
      static ::java::util::Map *EMPTY_MAP;
      static ::java::util::Set *EMPTY_SET;

      static jboolean addAll(const ::java::util::Collection &, const JArray< ::java::lang::Object > &);
      static ::java::util::Queue asLifoQueue(const ::java::util::Deque &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static ::java::util::Collection checkedCollection(const ::java::util::Collection &, const ::java::lang::Class &);
      static ::java::util::List checkedList(const ::java::util::List &, const ::java::lang::Class &);
      static ::java::util::Map checkedMap(const ::java::util::Map &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableMap checkedNavigableMap(const ::java::util::NavigableMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableSet checkedNavigableSet(const ::java::util::NavigableSet &, const ::java::lang::Class &);
      static ::java::util::Queue checkedQueue(const ::java::util::Queue &, const ::java::lang::Class &);
      static ::java::util::Set checkedSet(const ::java::util::Set &, const ::java::lang::Class &);
      static ::java::util::SortedMap checkedSortedMap(const ::java::util::SortedMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::SortedSet checkedSortedSet(const ::java::util::SortedSet &, const ::java::lang::Class &);
      static void copy(const ::java::util::List &, const ::java::util::List &);
      static jboolean disjoint(const ::java::util::Collection &, const ::java::util::Collection &);
      static ::java::util::Enumeration emptyEnumeration();
      static ::java::util::Iterator emptyIterator();
      static ::java::util::List emptyList();
      static ::java::util::ListIterator emptyListIterator();
      static ::java::util::Map emptyMap();
      static ::java::util::NavigableMap emptyNavigableMap();
      static ::java::util::NavigableSet emptyNavigableSet();
      static ::java::util::Set emptySet();
      static ::java::util::SortedMap emptySortedMap();
      static ::java::util::SortedSet emptySortedSet();
      static ::java::util::Enumeration enumeration(const ::java::util::Collection &);
      static void fill(const ::java::util::List &, const ::java::lang::Object &);
      static jint frequency(const ::java::util::Collection &, const ::java::lang::Object &);
      static jint indexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static jint lastIndexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static ::java::util::ArrayList list(const ::java::util::Enumeration &);
      static ::java::lang::Object max$(const ::java::util::Collection &);
      static ::java::lang::Object max$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::lang::Object min$(const ::java::util::Collection &);
      static ::java::lang::Object min$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::util::List nCopies(jint, const ::java::lang::Object &);
      static ::java::util::SequencedSet newSequencedSetFromMap(const ::java::util::SequencedMap &);
      static ::java::util::Set newSetFromMap(const ::java::util::Map &);
      static jboolean replaceAll(const ::java::util::List &, const ::java::lang::Object &, const ::java::lang::Object &);
      static void reverse(const ::java::util::List &);
      static ::java::util::Comparator reverseOrder();
      static ::java::util::Comparator reverseOrder(const ::java::util::Comparator &);
      static void rotate(const ::java::util::List &, jint);
      static void shuffle(const ::java::util::List &);
      static void shuffle(const ::java::util::List &, const ::java::util::Random &);
      static ::java::util::Set singleton(const ::java::lang::Object &);
      static ::java::util::List singletonList(const ::java::lang::Object &);
      static ::java::util::Map singletonMap(const ::java::lang::Object &, const ::java::lang::Object &);
      static void sort(const ::java::util::List &);
      static void sort(const ::java::util::List &, const ::java::util::Comparator &);
      static void swap(const ::java::util::List &, jint, jint);
      static ::java::util::Collection synchronizedCollection(const ::java::util::Collection &);
      static ::java::util::List synchronizedList(const ::java::util::List &);
      static ::java::util::Map synchronizedMap(const ::java::util::Map &);
      static ::java::util::NavigableMap synchronizedNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet synchronizedNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set synchronizedSet(const ::java::util::Set &);
      static ::java::util::SortedMap synchronizedSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet synchronizedSortedSet(const ::java::util::SortedSet &);
      static ::java::util::Collection unmodifiableCollection(const ::java::util::Collection &);
      static ::java::util::List unmodifiableList(const ::java::util::List &);
      static ::java::util::Map unmodifiableMap(const ::java::util::Map &);
      static ::java::util::NavigableMap unmodifiableNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet unmodifiableNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::SequencedCollection unmodifiableSequencedCollection(const ::java::util::SequencedCollection &);
      static ::java::util::SequencedMap unmodifiableSequencedMap(const ::java::util::SequencedMap &);
      static ::java::util::SequencedSet unmodifiableSequencedSet(const ::java::util::SequencedSet &);
      static ::java::util::Set unmodifiableSet(const ::java::util::Set &);
      static ::java::util::SortedMap unmodifiableSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet unmodifiableSortedSet(const ::java::util::SortedSet &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Collections);
    extern PyTypeObject *PY_TYPE(Collections);

    class t_Collections {
    public:
      PyObject_HEAD
      Collections object;
      static PyObject *wrap_Object(const Collections&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
