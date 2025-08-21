#ifndef org_apache_lucene_search_KnnCollector_H
#define org_apache_lucene_search_KnnCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
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

        class KnnCollector : public ::java::lang::Object {
         public:
          enum {
            mid_collect_c1497fee57980602,
            mid_earlyTerminated_947277eca0748c4e,
            mid_incVisitedCount_540b2b23d51b1efd,
            mid_k_20fbf7565993c3d7,
            mid_minCompetitiveSimilarity_9b6c3480dac00edf,
            mid_topDocs_a61875f39685c639,
            mid_visitLimit_16939d9d0a9a9721,
            mid_visitedCount_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnCollector(const KnnCollector& obj) : ::java::lang::Object(obj) {}

          jboolean collect(jint, jfloat) const;
          jboolean earlyTerminated() const;
          void incVisitedCount(jint) const;
          jint k() const;
          jfloat minCompetitiveSimilarity() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnCollector);
        extern PyTypeObject *PY_TYPE(KnnCollector);

        class t_KnnCollector {
        public:
          PyObject_HEAD
          KnnCollector object;
          static PyObject *wrap_Object(const KnnCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
