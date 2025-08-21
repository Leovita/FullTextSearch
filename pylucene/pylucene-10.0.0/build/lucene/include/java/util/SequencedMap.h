#ifndef java_util_SequencedMap_H
#define java_util_SequencedMap_H

#include "java/util/Map.h"

namespace java {
  namespace util {
    class SequencedCollection;
    class Map$Entry;
    class SequencedSet;
    class SequencedMap;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SequencedMap : public ::java::util::Map {
     public:
      enum {
        mid_firstEntry_158df3d9a50522a0,
        mid_lastEntry_158df3d9a50522a0,
        mid_pollFirstEntry_158df3d9a50522a0,
        mid_pollLastEntry_158df3d9a50522a0,
        mid_putFirst_243089e4ee289db6,
        mid_putLast_243089e4ee289db6,
        mid_reversed_686e758b75295fc8,
        mid_sequencedEntrySet_eefb2067dd30b451,
        mid_sequencedKeySet_eefb2067dd30b451,
        mid_sequencedValues_4fed86e29a000aaa,
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
