#ifndef java_util_NavigableMap_H
#define java_util_NavigableMap_H

#include "java/util/SortedMap.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace util {
    class Map$Entry;
    class NavigableSet;
    class NavigableMap;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableMap : public ::java::util::SortedMap {
     public:
      enum {
        mid_ceilingEntry_686dc5cf32c6071b,
        mid_ceilingKey_5fd81664d2d475e1,
        mid_descendingKeySet_556010bda6404a08,
        mid_descendingMap_511c5e4893227999,
        mid_firstEntry_158df3d9a50522a0,
        mid_floorEntry_686dc5cf32c6071b,
        mid_floorKey_5fd81664d2d475e1,
        mid_headMap_6286144843a4831e,
        mid_headMap_f9e7f4150d560996,
        mid_higherEntry_686dc5cf32c6071b,
        mid_higherKey_5fd81664d2d475e1,
        mid_lastEntry_158df3d9a50522a0,
        mid_lowerEntry_686dc5cf32c6071b,
        mid_lowerKey_5fd81664d2d475e1,
        mid_navigableKeySet_556010bda6404a08,
        mid_pollFirstEntry_158df3d9a50522a0,
        mid_pollLastEntry_158df3d9a50522a0,
        mid_reversed_511c5e4893227999,
        mid_subMap_e4438454b46669df,
        mid_subMap_4ffc6bc94844fffa,
        mid_tailMap_6286144843a4831e,
        mid_tailMap_f9e7f4150d560996,
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
