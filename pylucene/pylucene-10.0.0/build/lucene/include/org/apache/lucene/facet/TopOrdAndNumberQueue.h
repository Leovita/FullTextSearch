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
            mid_init$_8226bd0b0fc13dba,
            mid_lessThan_798318c0b9506425,
            mid_newOrdAndValue_8454d5ca47f5be85,
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
