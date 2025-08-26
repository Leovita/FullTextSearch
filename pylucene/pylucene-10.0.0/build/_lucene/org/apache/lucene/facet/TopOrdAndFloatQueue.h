#ifndef org_apache_lucene_facet_TopOrdAndFloatQueue_H
#define org_apache_lucene_facet_TopOrdAndFloatQueue_H

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

        class TopOrdAndFloatQueue : public ::org::apache::lucene::facet::TopOrdAndNumberQueue {
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

          explicit TopOrdAndFloatQueue(jobject obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndFloatQueue(const TopOrdAndFloatQueue& obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue(obj) {}

          TopOrdAndFloatQueue(jint);

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
        extern PyType_Def PY_TYPE_DEF(TopOrdAndFloatQueue);
        extern PyTypeObject *PY_TYPE(TopOrdAndFloatQueue);

        class t_TopOrdAndFloatQueue {
        public:
          PyObject_HEAD
          TopOrdAndFloatQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndFloatQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndFloatQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndFloatQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
