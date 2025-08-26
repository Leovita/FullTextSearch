#ifndef java_util_SortedMap_H
#define java_util_SortedMap_H

#include "java/util/SequencedMap.h"

namespace java {
  namespace util {
    class Set;
    class Map$Entry;
    class SortedMap;
    class Collection;
    class Comparator;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedMap : public ::java::util::SequencedMap {
     public:
      enum {
        mid_comparator_5cc89c689cd941fe,
        mid_entrySet_79131c6bbcf08916,
        mid_firstKey_4819806f62f1360a,
        mid_headMap_dbc886c56c0dce27,
        mid_keySet_79131c6bbcf08916,
        mid_lastKey_4819806f62f1360a,
        mid_putFirst_b3b175dfe26d2c44,
        mid_putLast_b3b175dfe26d2c44,
        mid_reversed_b51ff49a40ed1f6c,
        mid_subMap_5243e52c9d1e1c58,
        mid_tailMap_dbc886c56c0dce27,
        mid_values_4a269b968b3a511f,
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
