#ifndef java_util_HashMap_H
#define java_util_HashMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    namespace function {
      class BiFunction;
      class Function;
      class BiConsumer;
    }
    class Map$Entry;
    class Map;
    class Collection;
    class HashMap;
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

    class HashMap : public ::java::util::AbstractMap {
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
        mid_containsKey_00d17418847797d4,
        mid_containsValue_00d17418847797d4,
        mid_entrySet_79131c6bbcf08916,
        mid_forEach_309feadaabdabe33,
        mid_get_e2c45b124c12f4ec,
        mid_getOrDefault_b3b175dfe26d2c44,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_keySet_79131c6bbcf08916,
        mid_merge_9071885bacc97265,
        mid_newHashMap_796bf355029a2f91,
        mid_put_b3b175dfe26d2c44,
        mid_putAll_6a7e23584beb7c0f,
        mid_putIfAbsent_b3b175dfe26d2c44,
        mid_remove_e2c45b124c12f4ec,
        mid_remove_0596e01f2cdb5588,
        mid_replace_b3b175dfe26d2c44,
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

      explicit HashMap(jobject obj) : ::java::util::AbstractMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      HashMap(const HashMap& obj) : ::java::util::AbstractMap(obj) {}

      HashMap();
      HashMap(jint);
      HashMap(const ::java::util::Map &);
      HashMap(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      static HashMap newHashMap(jint);
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
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
    extern PyType_Def PY_TYPE_DEF(HashMap);
    extern PyTypeObject *PY_TYPE(HashMap);

    class t_HashMap {
    public:
      PyObject_HEAD
      HashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_HashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const HashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const HashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
