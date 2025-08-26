#ifndef java_util_LinkedHashMap_H
#define java_util_LinkedHashMap_H

#include "java/util/HashMap.h"

namespace java {
  namespace util {
    namespace function {
      class BiFunction;
      class BiConsumer;
    }
    class Set;
    class SequencedCollection;
    class Map$Entry;
    class Map;
    class Collection;
    class SequencedMap;
    class SequencedSet;
    class LinkedHashMap;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedHashMap : public ::java::util::HashMap {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_8226bd0b0fc13dba,
        mid_init$_6a7e23584beb7c0f,
        mid_init$_a18b0cdf76a9509e,
        mid_init$_835f28898e888a2b,
        mid_clear_e7bdbe105ce1bafb,
        mid_containsValue_00d17418847797d4,
        mid_entrySet_79131c6bbcf08916,
        mid_forEach_309feadaabdabe33,
        mid_get_e2c45b124c12f4ec,
        mid_getOrDefault_b3b175dfe26d2c44,
        mid_keySet_79131c6bbcf08916,
        mid_newLinkedHashMap_2b09dbdfd9d06a24,
        mid_putFirst_b3b175dfe26d2c44,
        mid_putLast_b3b175dfe26d2c44,
        mid_replaceAll_ec29d14cf1227d89,
        mid_reversed_fa24e04ef91f9194,
        mid_sequencedEntrySet_f1d1e2ce27214ec3,
        mid_sequencedKeySet_f1d1e2ce27214ec3,
        mid_sequencedValues_f20e1cbf97be816c,
        mid_values_4a269b968b3a511f,
        mid_removeEldestEntry_51ce039b19365325,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedHashMap(jobject obj) : ::java::util::HashMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      LinkedHashMap(const LinkedHashMap& obj) : ::java::util::HashMap(obj) {}

      LinkedHashMap();
      LinkedHashMap(jint);
      LinkedHashMap(const ::java::util::Map &);
      LinkedHashMap(jint, jfloat);
      LinkedHashMap(jint, jfloat, jboolean);

      void clear() const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::Set keySet() const;
      static LinkedHashMap newLinkedHashMap(jint);
      ::java::lang::Object putFirst(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object putLast(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      ::java::util::SequencedMap reversed() const;
      ::java::util::SequencedSet sequencedEntrySet() const;
      ::java::util::SequencedSet sequencedKeySet() const;
      ::java::util::SequencedCollection sequencedValues() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(LinkedHashMap);
    extern PyTypeObject *PY_TYPE(LinkedHashMap);

    class t_LinkedHashMap {
    public:
      PyObject_HEAD
      LinkedHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_LinkedHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
