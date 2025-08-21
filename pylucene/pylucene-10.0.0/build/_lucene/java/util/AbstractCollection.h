#ifndef java_util_AbstractCollection_H
#define java_util_AbstractCollection_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractCollection : public ::java::lang::Object {
     public:
      enum {
        mid_add_570b5248a6da3ef6,
        mid_addAll_f2a1f31c5865e20d,
        mid_clear_3720c61b0679eb3e,
        mid_contains_570b5248a6da3ef6,
        mid_containsAll_f2a1f31c5865e20d,
        mid_isEmpty_947277eca0748c4e,
        mid_iterator_0db4c76ff7ee995b,
        mid_remove_570b5248a6da3ef6,
        mid_removeAll_f2a1f31c5865e20d,
        mid_retainAll_f2a1f31c5865e20d,
        mid_size_20fbf7565993c3d7,
        mid_toArray_e6b839682a4610a6,
        mid_toArray_1794d6b866766560,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractCollection(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractCollection(const AbstractCollection& obj) : ::java::lang::Object(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      jint size() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractCollection);
    extern PyTypeObject *PY_TYPE(AbstractCollection);

    class t_AbstractCollection {
    public:
      PyObject_HEAD
      AbstractCollection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractCollection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractCollection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractCollection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
