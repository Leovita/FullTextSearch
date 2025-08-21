#ifndef java_util_HashMap_H
#define java_util_HashMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    class Collection;
    class Map$Entry;
    class Set;
    class HashMap;
    namespace function {
      class BiFunction;
      class BiConsumer;
      class Function;
    }
    class Map;
  }
  namespace lang {
    class Class;
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

    class HashMap : public ::java::util::AbstractMap {
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
        mid_containsKey_570b5248a6da3ef6,
        mid_containsValue_570b5248a6da3ef6,
        mid_entrySet_4df174295554d7bd,
        mid_forEach_b72e978f1e58c9c6,
        mid_get_5fd81664d2d475e1,
        mid_getOrDefault_243089e4ee289db6,
        mid_isEmpty_947277eca0748c4e,
        mid_keySet_4df174295554d7bd,
        mid_merge_18f34770301774a8,
        mid_newHashMap_279083ce5539b531,
        mid_put_243089e4ee289db6,
        mid_putAll_79ba0f5a7d05e623,
        mid_putIfAbsent_243089e4ee289db6,
        mid_remove_5fd81664d2d475e1,
        mid_remove_6810d3c479f60a43,
        mid_replace_243089e4ee289db6,
        mid_replace_681a33cfaf020676,
        mid_replaceAll_e62f673264196dae,
        mid_size_20fbf7565993c3d7,
        mid_values_aa58b3beec16cbbd,
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
