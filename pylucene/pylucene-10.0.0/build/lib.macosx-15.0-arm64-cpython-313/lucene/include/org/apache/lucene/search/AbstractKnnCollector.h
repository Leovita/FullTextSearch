#ifndef org_apache_lucene_search_AbstractKnnCollector_H
#define org_apache_lucene_search_AbstractKnnCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
        class TopDocs;
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

        class AbstractKnnCollector : public ::java::lang::Object {
         public:
          enum {
            mid_collect_c1497fee57980602,
            mid_earlyTerminated_947277eca0748c4e,
            mid_incVisitedCount_540b2b23d51b1efd,
            mid_k_20fbf7565993c3d7,
            mid_minCompetitiveSimilarity_9b6c3480dac00edf,
            mid_numCollected_20fbf7565993c3d7,
            mid_topDocs_a61875f39685c639,
            mid_visitLimit_16939d9d0a9a9721,
            mid_visitedCount_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractKnnCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractKnnCollector(const AbstractKnnCollector& obj) : ::java::lang::Object(obj) {}

          jboolean collect(jint, jfloat) const;
          jboolean earlyTerminated() const;
          void incVisitedCount(jint) const;
          jint k() const;
          jfloat minCompetitiveSimilarity() const;
          jint numCollected() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
          jlong visitLimit() const;
          jlong visitedCount() const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractKnnCollector);
        extern PyTypeObject *PY_TYPE(AbstractKnnCollector);

        class t_AbstractKnnCollector {
        public:
          PyObject_HEAD
          AbstractKnnCollector object;
          static PyObject *wrap_Object(const AbstractKnnCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
