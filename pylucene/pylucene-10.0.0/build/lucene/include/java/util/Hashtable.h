#ifndef java_util_Hashtable_H
#define java_util_Hashtable_H

#include "java/util/Dictionary.h"

namespace java {
  namespace util {
    namespace function {
      class BiFunction;
      class BiConsumer;
      class Function;
    }
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
    class Enumeration;
  }
  namespace lang {
    class Cloneable;
    class Object;
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Hashtable : public ::java::util::Dictionary {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_8226bd0b0fc13dba,
        mid_init$_6a7e23584beb7c0f,
        mid_init$_a18b0cdf76a9509e,
        mid_clear_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        mid_compute_d2596364fffa973e,
        mid_computeIfAbsent_9ed5cc5abc5e630e,
        mid_computeIfPresent_d2596364fffa973e,
        mid_contains_00d17418847797d4,
        mid_containsKey_00d17418847797d4,
        mid_containsValue_00d17418847797d4,
        mid_elements_c0dcea0e1246b77b,
        mid_entrySet_79131c6bbcf08916,
        mid_equals_00d17418847797d4,
        mid_forEach_309feadaabdabe33,
        mid_get_e2c45b124c12f4ec,
        mid_getOrDefault_b3b175dfe26d2c44,
        mid_hashCode_bd89ce15dad49192,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_keySet_79131c6bbcf08916,
        mid_keys_c0dcea0e1246b77b,
        mid_merge_9071885bacc97265,
        mid_put_b3b175dfe26d2c44,
        mid_putAll_6a7e23584beb7c0f,
        mid_putIfAbsent_b3b175dfe26d2c44,
        mid_remove_e2c45b124c12f4ec,
        mid_remove_0596e01f2cdb5588,
        mid_replace_b3b175dfe26d2c44,
        mid_replace_dda5dc55054f9d64,
        mid_replaceAll_ec29d14cf1227d89,
        mid_size_bd89ce15dad49192,
        mid_toString_e7df854526d67fa3,
        mid_values_4a269b968b3a511f,
        mid_rehash_e7bdbe105ce1bafb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Hashtable(jobject obj) : ::java::util::Dictionary(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Hashtable(const Hashtable& obj) : ::java::util::Dictionary(obj) {}

      Hashtable();
      Hashtable(jint);
      Hashtable(const ::java::util::Map &);
      Hashtable(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Enumeration elements() const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Hashtable);
    extern PyTypeObject *PY_TYPE(Hashtable);

    class t_Hashtable {
    public:
      PyObject_HEAD
      Hashtable object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Hashtable *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Hashtable&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Hashtable&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
