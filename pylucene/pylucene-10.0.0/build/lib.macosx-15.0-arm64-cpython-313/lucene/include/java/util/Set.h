#ifndef java_util_Set_H
#define java_util_Set_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Set;
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

    class Set : public ::java::util::Collection {
     public:
      enum {
        mid_add_570b5248a6da3ef6,
        mid_addAll_f2a1f31c5865e20d,
        mid_clear_3720c61b0679eb3e,
        mid_contains_570b5248a6da3ef6,
        mid_containsAll_f2a1f31c5865e20d,
        mid_copyOf_5af7ee2a76b1ec4f,
        mid_equals_570b5248a6da3ef6,
        mid_hashCode_20fbf7565993c3d7,
        mid_isEmpty_947277eca0748c4e,
        mid_iterator_0db4c76ff7ee995b,
        mid_of_4df174295554d7bd,
        mid_of_b380f2317f241657,
        mid_of_c7137f34bb8eaa73,
        mid_of_df97670ac3d2d92d,
        mid_of_8b683af36ed68fcd,
        mid_of_8550a70bb236f8ce,
        mid_of_bae015132ddb5a22,
        mid_of_9d649e3d52218fa9,
        mid_of_18b6c215c4647608,
        mid_of_284632e109c2a520,
        mid_of_0e8bbf367f123b3d,
        mid_of_1930b46ff7b33aae,
        mid_remove_570b5248a6da3ef6,
        mid_removeAll_f2a1f31c5865e20d,
        mid_retainAll_f2a1f31c5865e20d,
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

      explicit Set(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Set(const Set& obj) : ::java::util::Collection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      static Set copyOf(const ::java::util::Collection &);
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      static Set of();
      static Set of(const JArray< ::java::lang::Object > &);
      static Set of(const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      static Set of(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &);
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
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
    extern PyType_Def PY_TYPE_DEF(Set);
    extern PyTypeObject *PY_TYPE(Set);

    class t_Set {
    public:
      PyObject_HEAD
      Set object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Set *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Set&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Set&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
