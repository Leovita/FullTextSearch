#ifndef java_util_LinkedHashMap_H
#define java_util_LinkedHashMap_H

#include "java/util/HashMap.h"

namespace java {
  namespace util {
    class SequencedCollection;
    class Collection;
    class Map$Entry;
    class Set;
    class SequencedSet;
    class SequencedMap;
    namespace function {
      class BiFunction;
      class BiConsumer;
    }
    class Map;
    class LinkedHashMap;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedHashMap : public ::java::util::HashMap {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
        mid_init$_79ba0f5a7d05e623,
        mid_init$_06e0b8d4c1d7906b,
        mid_init$_7c71f5a9e5f2b3ea,
        mid_clear_3720c61b0679eb3e,
        mid_containsValue_570b5248a6da3ef6,
        mid_entrySet_4df174295554d7bd,
        mid_forEach_b72e978f1e58c9c6,
        mid_get_5fd81664d2d475e1,
        mid_getOrDefault_243089e4ee289db6,
        mid_keySet_4df174295554d7bd,
        mid_newLinkedHashMap_38b91c6b9d035b7e,
        mid_putFirst_243089e4ee289db6,
        mid_putLast_243089e4ee289db6,
        mid_replaceAll_e62f673264196dae,
        mid_reversed_686e758b75295fc8,
        mid_sequencedEntrySet_eefb2067dd30b451,
        mid_sequencedKeySet_eefb2067dd30b451,
        mid_sequencedValues_4fed86e29a000aaa,
        mid_values_aa58b3beec16cbbd,
        mid_removeEldestEntry_b87cc2a77fb3efd1,
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
