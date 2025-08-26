#ifndef java_util_SequencedSet_H
#define java_util_SequencedSet_H

#include "java/util/SequencedCollection.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class Set;
    class SequencedSet;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SequencedSet : public ::java::util::SequencedCollection {
     public:
      enum {
        mid_reversed_f1d1e2ce27214ec3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SequencedSet(jobject obj) : ::java::util::SequencedCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SequencedSet(const SequencedSet& obj) : ::java::util::SequencedCollection(obj) {}

      SequencedSet reversed() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SequencedSet);
    extern PyTypeObject *PY_TYPE(SequencedSet);

    class t_SequencedSet {
    public:
      PyObject_HEAD
      SequencedSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_SequencedSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SequencedSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SequencedSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
