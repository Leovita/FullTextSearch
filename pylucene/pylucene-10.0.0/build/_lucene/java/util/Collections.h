#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ListIterator;
    class NavigableSet;
    class NavigableMap;
    class SequencedMap;
    class Comparator;
    class Deque;
    class Queue;
    class Iterator;
    class SequencedCollection;
    class Collection;
    class List;
    class SequencedSet;
    class Random;
    class SortedMap;
    class Enumeration;
    class SortedSet;
    class Set;
    class ArrayList;
    class Map;
  }
  namespace lang {
    class Class;
    class Comparable;
    class Boolean;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collections : public ::java::lang::Object {
     public:
      enum {
        mid_addAll_96c871fc786d1c05,
        mid_asLifoQueue_aacd33602e5b30ae,
        mid_binarySearch_2351399140ba3f16,
        mid_binarySearch_087f9d0c0aac1352,
        mid_checkedCollection_17d8d530560d05a9,
        mid_checkedList_320dbc86050bb570,
        mid_checkedMap_63d59ee85bbd2c0b,
        mid_checkedNavigableMap_ab3c77b91b6a590c,
        mid_checkedNavigableSet_73c51a036daa7529,
        mid_checkedQueue_31482b66cd6b0e0f,
        mid_checkedSet_8c7a036b6a6ae447,
        mid_checkedSortedMap_9f656ca06b35d4a3,
        mid_checkedSortedSet_1a85cd773cf16b33,
        mid_copy_8b013e5ac552ce33,
        mid_disjoint_76c5832fc8a705b3,
        mid_emptyEnumeration_a2a5e131c5f66817,
        mid_emptyIterator_0db4c76ff7ee995b,
        mid_emptyList_36830460e10839eb,
        mid_emptyListIterator_0f4ac4d253da0dce,
        mid_emptyMap_f125f26c07a7bec8,
        mid_emptyNavigableMap_511c5e4893227999,
        mid_emptyNavigableSet_556010bda6404a08,
        mid_emptySet_4df174295554d7bd,
        mid_emptySortedMap_feb174fb4da71ac1,
        mid_emptySortedSet_8a890a5a6ace5427,
        mid_enumeration_29b912990c8f6e42,
        mid_fill_847e8b96351fd8cd,
        mid_frequency_aaff9694b1f330ea,
        mid_indexOfSubList_d5a75f59b0f899c6,
        mid_lastIndexOfSubList_d5a75f59b0f899c6,
        mid_list_635e5a985e8ebf3c,
        mid_max_826559913eb50402,
        mid_max_ac7a4387003bd774,
        mid_min_826559913eb50402,
        mid_min_ac7a4387003bd774,
        mid_nCopies_077c6e60f70e7e6e,
        mid_newSequencedSetFromMap_4418ada66bc99ef9,
        mid_newSetFromMap_0624e5c3352bda63,
        mid_replaceAll_24756da443c2ee71,
        mid_reverse_9425cd4f62c94bce,
        mid_reverseOrder_39238840448c1807,
        mid_reverseOrder_5881a6ca7ceb37bb,
        mid_rotate_24b0f995767f65bf,
        mid_shuffle_9425cd4f62c94bce,
        mid_shuffle_53efc5cb8b5bf8bf,
        mid_singleton_c7137f34bb8eaa73,
        mid_singletonList_b887ee42d9bb67f9,
        mid_singletonMap_66bed768f20b3608,
        mid_sort_9425cd4f62c94bce,
        mid_sort_657df41b6fd0d20f,
        mid_swap_ea494b364f102a56,
        mid_synchronizedCollection_e5182885dc7c0709,
        mid_synchronizedList_52060c8532319091,
        mid_synchronizedMap_471da175fe5991f0,
        mid_synchronizedNavigableMap_73f74f8ba3e71c7d,
        mid_synchronizedNavigableSet_857c624051b16f62,
        mid_synchronizedSet_13414f498b00da62,
        mid_synchronizedSortedMap_88bc673349468322,
        mid_synchronizedSortedSet_0bbd1efce54c2e65,
        mid_unmodifiableCollection_e5182885dc7c0709,
        mid_unmodifiableList_52060c8532319091,
        mid_unmodifiableMap_471da175fe5991f0,
        mid_unmodifiableNavigableMap_73f74f8ba3e71c7d,
        mid_unmodifiableNavigableSet_857c624051b16f62,
        mid_unmodifiableSequencedCollection_f74fe0d5097479eb,
        mid_unmodifiableSequencedMap_773046a85b7d70fb,
        mid_unmodifiableSequencedSet_7b25dd2079d62284,
        mid_unmodifiableSet_13414f498b00da62,
        mid_unmodifiableSortedMap_88bc673349468322,
        mid_unmodifiableSortedSet_0bbd1efce54c2e65,
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
