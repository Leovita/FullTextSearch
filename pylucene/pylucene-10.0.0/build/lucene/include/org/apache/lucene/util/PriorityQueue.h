#ifndef org_apache_lucene_util_PriorityQueue_H
#define org_apache_lucene_util_PriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    namespace function {
      class Supplier;
    }
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
            mid_init$_8226bd0b0fc13dba,
            mid_init$_a9666b96cff9c53d,
            mid_add_e2c45b124c12f4ec,
            mid_addAll_b5398b431eb321fb,
            mid_clear_e7bdbe105ce1bafb,
            mid_insertWithOverflow_e2c45b124c12f4ec,
            mid_iterator_c7985fafdcf40e83,
            mid_pop_4819806f62f1360a,
            mid_remove_00d17418847797d4,
            mid_size_bd89ce15dad49192,
            mid_top_4819806f62f1360a,
            mid_updateTop_4819806f62f1360a,
            mid_updateTop_e2c45b124c12f4ec,
            mid_lessThan_0596e01f2cdb5588,
            mid_getHeapArray_1e688954528bc160,
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
