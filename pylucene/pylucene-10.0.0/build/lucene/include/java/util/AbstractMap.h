#ifndef java_util_AbstractMap_H
#define java_util_AbstractMap_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map$Entry;
    class Map;
    class Collection;
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractMap : public ::java::lang::Object {
     public:
      enum {
        mid_clear_e7bdbe105ce1bafb,
        mid_containsKey_00d17418847797d4,
        mid_containsValue_00d17418847797d4,
        mid_entrySet_79131c6bbcf08916,
        mid_equals_00d17418847797d4,
        mid_get_e2c45b124c12f4ec,
        mid_hashCode_bd89ce15dad49192,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_keySet_79131c6bbcf08916,
        mid_put_b3b175dfe26d2c44,
        mid_putAll_6a7e23584beb7c0f,
        mid_remove_e2c45b124c12f4ec,
        mid_size_bd89ce15dad49192,
        mid_toString_e7df854526d67fa3,
        mid_values_4a269b968b3a511f,
        mid_clone_4819806f62f1360a,
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
