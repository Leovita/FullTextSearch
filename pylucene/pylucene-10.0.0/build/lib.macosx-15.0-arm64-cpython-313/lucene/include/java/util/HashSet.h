#ifndef java_util_HashSet_H
#define java_util_HashSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Spliterator;
    class HashSet;
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

    class HashSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
        mid_init$_40eba2cff967cc45,
        mid_init$_06e0b8d4c1d7906b,
        mid_add_570b5248a6da3ef6,
        mid_clear_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        mid_contains_570b5248a6da3ef6,
        mid_isEmpty_947277eca0748c4e,
        mid_iterator_0db4c76ff7ee995b,
        mid_newHashSet_47f821dadf33608c,
        mid_remove_570b5248a6da3ef6,
        mid_size_20fbf7565993c3d7,
        mid_spliterator_eebbc9cffa204672,
        mid_toArray_e6b839682a4610a6,
        mid_toArray_1794d6b866766560,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit HashSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      HashSet(const HashSet& obj) : ::java::util::AbstractSet(obj) {}

      HashSet();
      HashSet(jint);
      HashSet(const ::java::util::Collection &);
      HashSet(jint, jfloat);

      jboolean add(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      static HashSet newHashSet(jint);
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(HashSet);
    extern PyTypeObject *PY_TYPE(HashSet);

    class t_HashSet {
    public:
      PyObject_HEAD
      HashSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_HashSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const HashSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const HashSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
