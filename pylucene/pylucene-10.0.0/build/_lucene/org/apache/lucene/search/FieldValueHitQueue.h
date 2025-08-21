#ifndef org_apache_lucene_search_FieldValueHitQueue_H
#define org_apache_lucene_search_FieldValueHitQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class FieldValueHitQueue;
        class SortField;
        class FieldComparator;
        class LeafFieldComparator;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldValueHitQueue : public ::org::apache::lucene::util::PriorityQueue {
         public:
          enum {
            mid_create_f75691b85246fa8b,
            mid_getComparators_30b0eea36825cf0e,
            mid_getComparators_5049846f5c56088f,
            mid_getReverseMul_623cd4a044ba647a,
            mid_lessThan_7190367ab1c53d11,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldValueHitQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldValueHitQueue(const FieldValueHitQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

          static FieldValueHitQueue create(const JArray< ::org::apache::lucene::search::SortField > &, jint);
          JArray< ::org::apache::lucene::search::FieldComparator > getComparators() const;
          JArray< ::org::apache::lucene::search::LeafFieldComparator > getComparators(const ::org::apache::lucene::index::LeafReaderContext &) const;
          JArray< jint > getReverseMul() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldValueHitQueue);
        extern PyTypeObject *PY_TYPE(FieldValueHitQueue);

        class t_FieldValueHitQueue {
        public:
          PyObject_HEAD
          FieldValueHitQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldValueHitQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldValueHitQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldValueHitQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
