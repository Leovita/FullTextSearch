#ifndef java_util_SequencedMap_H
#define java_util_SequencedMap_H

#include "java/util/Map.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class SequencedCollection;
    class Map$Entry;
    class SequencedMap;
    class SequencedSet;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SequencedMap : public ::java::util::Map {
     public:
      enum {
        mid_firstEntry_74fc562d8145a290,
        mid_lastEntry_74fc562d8145a290,
        mid_pollFirstEntry_74fc562d8145a290,
        mid_pollLastEntry_74fc562d8145a290,
        mid_putFirst_b3b175dfe26d2c44,
        mid_putLast_b3b175dfe26d2c44,
        mid_reversed_fa24e04ef91f9194,
        mid_sequencedEntrySet_f1d1e2ce27214ec3,
        mid_sequencedKeySet_f1d1e2ce27214ec3,
        mid_sequencedValues_f20e1cbf97be816c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SequencedMap(jobject obj) : ::java::util::Map(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SequencedMap(const SequencedMap& obj) : ::java::util::Map(obj) {}

      ::java::util::Map$Entry firstEntry() const;
      ::java::util::Map$Entry lastEntry() const;
      ::java::util::Map$Entry pollFirstEntry() const;
      ::java::util::Map$Entry pollLastEntry() const;
      ::java::lang::Object putFirst(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object putLast(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SequencedMap reversed() const;
      ::java::util::SequencedSet sequencedEntrySet() const;
      ::java::util::SequencedSet sequencedKeySet() const;
      ::java::util::SequencedCollection sequencedValues() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SequencedMap);
    extern PyTypeObject *PY_TYPE(SequencedMap);

    class t_SequencedMap {
    public:
      PyObject_HEAD
      SequencedMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_SequencedMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SequencedMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SequencedMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
