#ifndef org_apache_lucene_util_PriorityQueue_H
#define org_apache_lucene_util_PriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    namespace function {
      class Supplier;
    }
    class Collection;
  }
  namespace lang {
    class Class;
    class Iterable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PriorityQueue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_init$_705a8ff89deea8c8,
            mid_add_5fd81664d2d475e1,
            mid_addAll_40eba2cff967cc45,
            mid_clear_3720c61b0679eb3e,
            mid_insertWithOverflow_5fd81664d2d475e1,
            mid_iterator_0db4c76ff7ee995b,
            mid_pop_5655ed8670534604,
            mid_remove_570b5248a6da3ef6,
            mid_size_20fbf7565993c3d7,
            mid_top_5655ed8670534604,
            mid_updateTop_5655ed8670534604,
            mid_updateTop_5fd81664d2d475e1,
            mid_lessThan_6810d3c479f60a43,
            mid_getHeapArray_e6b839682a4610a6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PriorityQueue(const PriorityQueue& obj) : ::java::lang::Object(obj) {}

          PriorityQueue(jint);
          PriorityQueue(jint, const ::java::util::function::Supplier &);

          ::java::lang::Object add(const ::java::lang::Object &) const;
          void addAll(const ::java::util::Collection &) const;
          void clear() const;
          ::java::lang::Object insertWithOverflow(const ::java::lang::Object &) const;
          ::java::util::Iterator iterator() const;
          ::java::lang::Object pop() const;
          jboolean remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::lang::Object top() const;
          ::java::lang::Object updateTop() const;
          ::java::lang::Object updateTop(const ::java::lang::Object &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PriorityQueue);
        extern PyTypeObject *PY_TYPE(PriorityQueue);

        class t_PriorityQueue {
        public:
          PyObject_HEAD
          PriorityQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PriorityQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PriorityQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
