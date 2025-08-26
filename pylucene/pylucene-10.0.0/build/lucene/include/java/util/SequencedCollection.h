#ifndef java_util_SequencedCollection_H
#define java_util_SequencedCollection_H

#include "java/util/Collection.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class SequencedCollection;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SequencedCollection : public ::java::util::Collection {
     public:
      enum {
        mid_addFirst_501c3eb890ff6d79,
        mid_addLast_501c3eb890ff6d79,
        mid_getFirst_4819806f62f1360a,
        mid_getLast_4819806f62f1360a,
        mid_removeFirst_4819806f62f1360a,
        mid_removeLast_4819806f62f1360a,
        mid_reversed_f20e1cbf97be816c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SequencedCollection(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SequencedCollection(const SequencedCollection& obj) : ::java::util::Collection(obj) {}

      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      ::java::lang::Object removeFirst() const;
      ::java::lang::Object removeLast() const;
      SequencedCollection reversed() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SequencedCollection);
    extern PyTypeObject *PY_TYPE(SequencedCollection);

    class t_SequencedCollection {
    public:
      PyObject_HEAD
      SequencedCollection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_SequencedCollection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SequencedCollection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SequencedCollection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
