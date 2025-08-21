#ifndef org_apache_lucene_search_DisiPriorityQueue_H
#define org_apache_lucene_search_DisiPriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DisiWrapper;
      }
    }
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
            mid_init$_540b2b23d51b1efd,
            mid_add_812e9e58df56e7ab,
            mid_addAll_a24a6b1383e70e3b,
            mid_clear_3720c61b0679eb3e,
            mid_iterator_0db4c76ff7ee995b,
            mid_pop_0f4267db604d23ac,
            mid_size_20fbf7565993c3d7,
            mid_top_0f4267db604d23ac,
            mid_top2_0f4267db604d23ac,
            mid_topList_0f4267db604d23ac,
            mid_updateTop_0f4267db604d23ac,
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
