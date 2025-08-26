#ifndef java_util_IdentityHashMap_H
#define java_util_IdentityHashMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    namespace function {
      class BiFunction;
      class BiConsumer;
    }
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Cloneable;
    class Object;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class IdentityHashMap : public ::java::util::AbstractMap {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_8226bd0b0fc13dba,
        mid_init$_6a7e23584beb7c0f,
        mid_clear_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        mid_containsKey_00d17418847797d4,
        mid_containsValue_00d17418847797d4,
        mid_entrySet_79131c6bbcf08916,
        mid_equals_00d17418847797d4,
        mid_forEach_309feadaabdabe33,
        mid_get_e2c45b124c12f4ec,
        mid_hashCode_bd89ce15dad49192,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_keySet_79131c6bbcf08916,
        mid_put_b3b175dfe26d2c44,
        mid_putAll_6a7e23584beb7c0f,
        mid_remove_e2c45b124c12f4ec,
        mid_remove_0596e01f2cdb5588,
        mid_replace_dda5dc55054f9d64,
        mid_replaceAll_ec29d14cf1227d89,
        mid_size_bd89ce15dad49192,
        mid_values_4a269b968b3a511f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IdentityHashMap(jobject obj) : ::java::util::AbstractMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IdentityHashMap(const IdentityHashMap& obj) : ::java::util::AbstractMap(obj) {}

      IdentityHashMap();
      IdentityHashMap(jint);
      IdentityHashMap(const ::java::util::Map &);

      void clear() const;
      ::java::lang::Object clone() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      jint size() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(IdentityHashMap);
    extern PyTypeObject *PY_TYPE(IdentityHashMap);

    class t_IdentityHashMap {
    public:
      PyObject_HEAD
      IdentityHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_IdentityHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const IdentityHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const IdentityHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
