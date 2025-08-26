#ifndef java_util_Map_H
#define java_util_Map_H

#include "java/lang/Object.h"

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
    class Set;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Map : public ::java::lang::Object {
     public:
      enum {
        mid_clear_e7bdbe105ce1bafb,
        mid_compute_d2596364fffa973e,
        mid_computeIfAbsent_9ed5cc5abc5e630e,
        mid_computeIfPresent_d2596364fffa973e,
        mid_containsKey_00d17418847797d4,
        mid_containsValue_00d17418847797d4,
        mid_copyOf_6a21740c97b0d8b2,
        mid_entry_79b21f00920ea454,
        mid_entrySet_79131c6bbcf08916,
        mid_equals_00d17418847797d4,
        mid_forEach_309feadaabdabe33,
        mid_get_e2c45b124c12f4ec,
        mid_getOrDefault_b3b175dfe26d2c44,
        mid_hashCode_bd89ce15dad49192,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_keySet_79131c6bbcf08916,
        mid_merge_9071885bacc97265,
        mid_of_5004bdf19ed33453,
        mid_of_ab088a5e141f6309,
        mid_of_a5a1dede7181d592,
        mid_of_decfe7795fe74283,
        mid_of_7a7b23c91f49edfe,
        mid_of_ce23c65ac7dcbe6f,
        mid_of_258b51437c202115,
        mid_of_661921b5c7969493,
        mid_of_ed22c20dcd7cce7a,
        mid_of_0452d6e99d0c5c2a,
        mid_of_d54bca9c3251d9ab,
        mid_ofEntries_ecf7ae05b16ab4ab,
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

      explicit Map(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Map(const Map& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      static Map copyOf(const Map &);
      static ::java::util::Map$Entry entry(const ::java::lang::Object &, const ::java::lang::Object &);
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      static Map of();
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Map ofEntries(const JArray< ::java::util::Map$Entry > &);
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const Map &) const;
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
    extern PyType_Def PY_TYPE_DEF(Map);
    extern PyTypeObject *PY_TYPE(Map);

    class t_Map {
    public:
      PyObject_HEAD
      Map object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Map *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Map&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Map&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
