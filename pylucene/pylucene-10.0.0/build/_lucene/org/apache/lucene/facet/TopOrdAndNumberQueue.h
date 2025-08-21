#ifndef org_apache_lucene_facet_TopOrdAndNumberQueue_H
#define org_apache_lucene_facet_TopOrdAndNumberQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class TopOrdAndNumberQueue$OrdAndValue;
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
      namespace facet {

        class TopOrdAndNumberQueue : public ::org::apache::lucene::util::PriorityQueue {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_lessThan_c193e5215bc60cd4,
            mid_newOrdAndValue_b0a5a9c6421d7f7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopOrdAndNumberQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndNumberQueue(const TopOrdAndNumberQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

          TopOrdAndNumberQueue(jint);

          jboolean lessThan(const ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue &, const ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue &) const;
          ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue newOrdAndValue() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(TopOrdAndNumberQueue);
        extern PyTypeObject *PY_TYPE(TopOrdAndNumberQueue);

        class t_TopOrdAndNumberQueue {
        public:
          PyObject_HEAD
          TopOrdAndNumberQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndNumberQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndNumberQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndNumberQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
