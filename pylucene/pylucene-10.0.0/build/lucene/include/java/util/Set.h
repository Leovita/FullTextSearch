#ifndef java_util_Set_H
#define java_util_Set_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class Iterator;
    class Spliterator;
    class Set;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Set : public ::java::util::Collection {
     public:
      enum {
        mid_add_00d17418847797d4,
        mid_addAll_155d0ed876869448,
        mid_clear_e7bdbe105ce1bafb,
        mid_contains_00d17418847797d4,
        mid_containsAll_155d0ed876869448,
        mid_copyOf_00830a602a3a1196,
        mid_equals_00d17418847797d4,
        mid_hashCode_bd89ce15dad49192,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_iterator_c7985fafdcf40e83,
        mid_of_79131c6bbcf08916,
        mid_of_0582761d15c83947,
        mid_of_1c9deec327a99730,
        mid_of_788f3d5cd21ab8cc,
        mid_of_970d6f4f775c8896,
        mid_of_806fd90741ef2851,
        mid_of_584fa2ebf5e155e5,
        mid_of_60dcb5a6c95d5ed9,
        mid_of_089507a39473efd1,
        mid_of_5977374f22cca92f,
        mid_of_7a772b5f98ad4a71,
        mid_of_5a3c9ccae936013b,
        mid_remove_00d17418847797d4,
        mid_removeAll_155d0ed876869448,
        mid_retainAll_155d0ed876869448,
        mid_size_bd89ce15dad49192,
        mid_spliterator_fd118e26a3de79e6,
        mid_toArray_1e688954528bc160,
        mid_toArray_0b4a993b49b6d8e8,
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
