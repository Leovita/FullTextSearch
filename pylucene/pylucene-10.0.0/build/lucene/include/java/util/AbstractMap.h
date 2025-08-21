#ifndef java_util_AbstractMap_H
#define java_util_AbstractMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Map$Entry;
    class Set;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractMap : public ::java::lang::Object {
     public:
      enum {
        mid_clear_3720c61b0679eb3e,
        mid_containsKey_570b5248a6da3ef6,
        mid_containsValue_570b5248a6da3ef6,
        mid_entrySet_4df174295554d7bd,
        mid_equals_570b5248a6da3ef6,
        mid_get_5fd81664d2d475e1,
        mid_hashCode_20fbf7565993c3d7,
        mid_isEmpty_947277eca0748c4e,
        mid_keySet_4df174295554d7bd,
        mid_put_243089e4ee289db6,
        mid_putAll_79ba0f5a7d05e623,
        mid_remove_5fd81664d2d475e1,
        mid_size_20fbf7565993c3d7,
        mid_toString_09a7afff1868fc5e,
        mid_values_aa58b3beec16cbbd,
        mid_clone_5655ed8670534604,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractMap(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractMap(const AbstractMap& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractMap);
    extern PyTypeObject *PY_TYPE(AbstractMap);

    class t_AbstractMap {
    public:
      PyObject_HEAD
      AbstractMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_AbstractMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
