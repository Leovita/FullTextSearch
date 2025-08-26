#ifndef org_apache_lucene_facet_TopOrdAndIntQueue_H
#define org_apache_lucene_facet_TopOrdAndIntQueue_H

#include "org/apache/lucene/facet/TopOrdAndNumberQueue.h"

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

        class TopOrdAndIntQueue : public ::org::apache::lucene::facet::TopOrdAndNumberQueue {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_newOrdAndValue_8454d5ca47f5be85,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopOrdAndIntQueue(jobject obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndIntQueue(const TopOrdAndIntQueue& obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue(obj) {}

          TopOrdAndIntQueue(jint);

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
        extern PyType_Def PY_TYPE_DEF(TopOrdAndIntQueue);
        extern PyTypeObject *PY_TYPE(TopOrdAndIntQueue);

        class t_TopOrdAndIntQueue {
        public:
          PyObject_HEAD
          TopOrdAndIntQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndIntQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndIntQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndIntQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
