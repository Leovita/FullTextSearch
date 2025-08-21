#ifndef java_util_SequencedCollection_H
#define java_util_SequencedCollection_H

#include "java/util/Collection.h"

namespace java {
  namespace util {
    class SequencedCollection;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SequencedCollection : public ::java::util::Collection {
     public:
      enum {
        mid_addFirst_eb61ef4d1db15d08,
        mid_addLast_eb61ef4d1db15d08,
        mid_getFirst_5655ed8670534604,
        mid_getLast_5655ed8670534604,
        mid_removeFirst_5655ed8670534604,
        mid_removeLast_5655ed8670534604,
        mid_reversed_4fed86e29a000aaa,
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
