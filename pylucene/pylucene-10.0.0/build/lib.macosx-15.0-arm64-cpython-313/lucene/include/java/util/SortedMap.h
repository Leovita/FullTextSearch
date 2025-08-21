#ifndef java_util_SortedMap_H
#define java_util_SortedMap_H

#include "java/util/SequencedMap.h"

namespace java {
  namespace util {
    class Collection;
    class Map$Entry;
    class Set;
    class Comparator;
    class SortedMap;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedMap : public ::java::util::SequencedMap {
     public:
      enum {
        mid_comparator_39238840448c1807,
        mid_entrySet_4df174295554d7bd,
        mid_firstKey_5655ed8670534604,
        mid_headMap_6286144843a4831e,
        mid_keySet_4df174295554d7bd,
        mid_lastKey_5655ed8670534604,
        mid_putFirst_243089e4ee289db6,
        mid_putLast_243089e4ee289db6,
        mid_reversed_feb174fb4da71ac1,
        mid_subMap_e4438454b46669df,
        mid_tailMap_6286144843a4831e,
        mid_values_aa58b3beec16cbbd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SortedMap(jobject obj) : ::java::util::SequencedMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SortedMap(const SortedMap& obj) : ::java::util::SequencedMap(obj) {}

      ::java::util::Comparator comparator() const;
      ::java::util::Set entrySet() const;
      ::java::lang::Object firstKey() const;
      SortedMap headMap(const ::java::lang::Object &) const;
      ::java::util::Set keySet() const;
      ::java::lang::Object lastKey() const;
      ::java::lang::Object putFirst(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object putLast(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SortedMap reversed() const;
      SortedMap subMap(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SortedMap tailMap(const ::java::lang::Object &) const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SortedMap);
    extern PyTypeObject *PY_TYPE(SortedMap);

    class t_SortedMap {
    public:
      PyObject_HEAD
      SortedMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_SortedMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SortedMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SortedMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
