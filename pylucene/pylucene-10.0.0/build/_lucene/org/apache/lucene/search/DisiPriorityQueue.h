#ifndef org_apache_lucene_search_DisiPriorityQueue_H
#define org_apache_lucene_search_DisiPriorityQueue_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DisiWrapper;
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DisiPriorityQueue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_add_61f46716f12a460c,
            mid_addAll_be687b31989e4c5c,
            mid_clear_e7bdbe105ce1bafb,
            mid_iterator_c7985fafdcf40e83,
            mid_pop_7b16128bc7bb7bd7,
            mid_size_bd89ce15dad49192,
            mid_top_7b16128bc7bb7bd7,
            mid_top2_7b16128bc7bb7bd7,
            mid_topList_7b16128bc7bb7bd7,
            mid_updateTop_7b16128bc7bb7bd7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DisiPriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DisiPriorityQueue(const DisiPriorityQueue& obj) : ::java::lang::Object(obj) {}

          DisiPriorityQueue(jint);

          ::org::apache::lucene::search::DisiWrapper add(const ::org::apache::lucene::search::DisiWrapper &) const;
          void addAll(const JArray< ::org::apache::lucene::search::DisiWrapper > &, jint, jint) const;
          void clear() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::DisiWrapper pop() const;
          jint size() const;
          ::org::apache::lucene::search::DisiWrapper top() const;
          ::org::apache::lucene::search::DisiWrapper top2() const;
          ::org::apache::lucene::search::DisiWrapper topList() const;
          ::org::apache::lucene::search::DisiWrapper updateTop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DisiPriorityQueue);
        extern PyTypeObject *PY_TYPE(DisiPriorityQueue);

        class t_DisiPriorityQueue {
        public:
          PyObject_HEAD
          DisiPriorityQueue object;
          static PyObject *wrap_Object(const DisiPriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
