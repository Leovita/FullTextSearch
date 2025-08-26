#ifndef org_apache_lucene_index_KnnVectorValues$DocIndexIterator_H
#define org_apache_lucene_index_KnnVectorValues$DocIndexIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class KnnVectorValues$DocIndexIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_index_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorValues$DocIndexIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorValues$DocIndexIterator(const KnnVectorValues$DocIndexIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          KnnVectorValues$DocIndexIterator();

          jint index() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(KnnVectorValues$DocIndexIterator);
        extern PyTypeObject *PY_TYPE(KnnVectorValues$DocIndexIterator);

        class t_KnnVectorValues$DocIndexIterator {
        public:
          PyObject_HEAD
          KnnVectorValues$DocIndexIterator object;
          static PyObject *wrap_Object(const KnnVectorValues$DocIndexIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
