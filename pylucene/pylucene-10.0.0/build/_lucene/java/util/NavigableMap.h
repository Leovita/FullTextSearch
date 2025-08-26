#ifndef java_util_NavigableMap_H
#define java_util_NavigableMap_H

#include "java/util/SortedMap.h"

namespace java {
  namespace util {
    class NavigableMap;
    class Map$Entry;
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

    class NavigableMap : public ::java::util::SortedMap {
     public:
      enum {
        mid_ceilingEntry_0ab1b684fe0b3ffd,
        mid_ceilingKey_e2c45b124c12f4ec,
        mid_descendingKeySet_14f8c5e2b19c135d,
        mid_descendingMap_d500931568b47f59,
        mid_firstEntry_74fc562d8145a290,
        mid_floorEntry_0ab1b684fe0b3ffd,
        mid_floorKey_e2c45b124c12f4ec,
        mid_headMap_dbc886c56c0dce27,
        mid_headMap_fbd78e8469b4b395,
        mid_higherEntry_0ab1b684fe0b3ffd,
        mid_higherKey_e2c45b124c12f4ec,
        mid_lastEntry_74fc562d8145a290,
        mid_lowerEntry_0ab1b684fe0b3ffd,
        mid_lowerKey_e2c45b124c12f4ec,
        mid_navigableKeySet_14f8c5e2b19c135d,
        mid_pollFirstEntry_74fc562d8145a290,
        mid_pollLastEntry_74fc562d8145a290,
        mid_reversed_d500931568b47f59,
        mid_subMap_5243e52c9d1e1c58,
        mid_subMap_94aca455709c7eb0,
        mid_tailMap_dbc886c56c0dce27,
        mid_tailMap_fbd78e8469b4b395,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NavigableMap(jobject obj) : ::java::util::SortedMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableMap(const NavigableMap& obj) : ::java::util::SortedMap(obj) {}

      ::java::util::Map$Entry ceilingEntry(const ::java::lang::Object &) const;
      ::java::lang::Object ceilingKey(const ::java::lang::Object &) const;
      ::java::util::NavigableSet descendingKeySet() const;
      NavigableMap descendingMap() const;
      ::java::util::Map$Entry firstEntry() const;
      ::java::util::Map$Entry floorEntry(const ::java::lang::Object &) const;
      ::java::lang::Object floorKey(const ::java::lang::Object &) const;
      ::java::util::SortedMap headMap(const ::java::lang::Object &) const;
      NavigableMap headMap(const ::java::lang::Object &, jboolean) const;
      ::java::util::Map$Entry higherEntry(const ::java::lang::Object &) const;
      ::java::lang::Object higherKey(const ::java::lang::Object &) const;
      ::java::util::Map$Entry lastEntry() const;
      ::java::util::Map$Entry lowerEntry(const ::java::lang::Object &) const;
      ::java::lang::Object lowerKey(const ::java::lang::Object &) const;
      ::java::util::NavigableSet navigableKeySet() const;
      ::java::util::Map$Entry pollFirstEntry() const;
      ::java::util::Map$Entry pollLastEntry() const;
      NavigableMap reversed() const;
      ::java::util::SortedMap subMap(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableMap subMap(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedMap tailMap(const ::java::lang::Object &) const;
      NavigableMap tailMap(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableMap);
    extern PyTypeObject *PY_TYPE(NavigableMap);

    class t_NavigableMap {
    public:
      PyObject_HEAD
      NavigableMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_NavigableMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
