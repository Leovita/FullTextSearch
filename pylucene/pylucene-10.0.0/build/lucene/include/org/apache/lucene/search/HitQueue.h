#ifndef org_apache_lucene_search_HitQueue_H
#define org_apache_lucene_search_HitQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class HitQueue : public ::org::apache::lucene::util::PriorityQueue {
         public:
          enum {
            mid_init$_a0fed0a2cd38e7b1,
            mid_lessThan_451305b650783fc6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HitQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HitQueue(const HitQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

          HitQueue(jint, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(HitQueue);
        extern PyTypeObject *PY_TYPE(HitQueue);

        class t_HitQueue {
        public:
          PyObject_HEAD
          HitQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_HitQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const HitQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const HitQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
