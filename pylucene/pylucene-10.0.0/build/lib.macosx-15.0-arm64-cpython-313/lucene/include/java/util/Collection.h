#ifndef java_util_Collection_H
#define java_util_Collection_H

#include "java/lang/Iterable.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class IntFunction;
      class Predicate;
    }
    class Collection;
    class Spliterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collection : public ::java::lang::Iterable {
     public:
      enum {
        mid_add_570b5248a6da3ef6,
        mid_addAll_f2a1f31c5865e20d,
        mid_clear_3720c61b0679eb3e,
        mid_contains_570b5248a6da3ef6,
        mid_containsAll_f2a1f31c5865e20d,
        mid_equals_570b5248a6da3ef6,
        mid_hashCode_20fbf7565993c3d7,
        mid_isEmpty_947277eca0748c4e,
        mid_iterator_0db4c76ff7ee995b,
        mid_remove_570b5248a6da3ef6,
        mid_removeAll_f2a1f31c5865e20d,
        mid_removeIf_0e2be999b27321d2,
        mid_retainAll_f2a1f31c5865e20d,
        mid_size_20fbf7565993c3d7,
        mid_spliterator_eebbc9cffa204672,
        mid_toArray_e6b839682a4610a6,
        mid_toArray_1794d6b866766560,
        mid_toArray_42925a8e29163fde,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collection(jobject obj) : ::java::lang::Iterable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collection(const Collection& obj) : ::java::lang::Iterable(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const Collection &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const Collection &) const;
      jboolean removeIf(const ::java::util::function::Predicate &) const;
      jboolean retainAll(const Collection &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      JArray< ::java::lang::Object > toArray(const ::java::util::function::IntFunction &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Collection);
    extern PyTypeObject *PY_TYPE(Collection);

    class t_Collection {
    public:
      PyObject_HEAD
      Collection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Collection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Collection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Collection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
