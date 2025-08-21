#ifndef java_util_Hashtable_H
#define java_util_Hashtable_H

#include "java/util/Dictionary.h"

namespace java {
  namespace util {
    class Collection;
    class Map$Entry;
    class Set;
    namespace function {
      class BiFunction;
      class BiConsumer;
      class Function;
    }
    class Map;
    class Enumeration;
  }
  namespace lang {
    class Class;
    class String;
    class Cloneable;
    class Object;
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
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
        mid_init$_79ba0f5a7d05e623,
        mid_init$_06e0b8d4c1d7906b,
        mid_clear_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        mid_compute_222cc87f320503e9,
        mid_computeIfAbsent_54da8c192341bae7,
        mid_computeIfPresent_222cc87f320503e9,
        mid_contains_570b5248a6da3ef6,
        mid_containsKey_570b5248a6da3ef6,
        mid_containsValue_570b5248a6da3ef6,
        mid_elements_a2a5e131c5f66817,
        mid_entrySet_4df174295554d7bd,
        mid_equals_570b5248a6da3ef6,
        mid_forEach_b72e978f1e58c9c6,
        mid_get_5fd81664d2d475e1,
        mid_getOrDefault_243089e4ee289db6,
        mid_hashCode_20fbf7565993c3d7,
        mid_isEmpty_947277eca0748c4e,
        mid_keySet_4df174295554d7bd,
        mid_keys_a2a5e131c5f66817,
        mid_merge_18f34770301774a8,
        mid_put_243089e4ee289db6,
        mid_putAll_79ba0f5a7d05e623,
        mid_putIfAbsent_243089e4ee289db6,
        mid_remove_5fd81664d2d475e1,
        mid_remove_6810d3c479f60a43,
        mid_replace_243089e4ee289db6,
        mid_replace_681a33cfaf020676,
        mid_replaceAll_e62f673264196dae,
        mid_size_20fbf7565993c3d7,
        mid_toString_09a7afff1868fc5e,
        mid_values_aa58b3beec16cbbd,
        mid_rehash_3720c61b0679eb3e,
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
