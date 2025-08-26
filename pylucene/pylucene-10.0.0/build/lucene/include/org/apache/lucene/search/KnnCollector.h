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
            mid_collect_0ebe0f1167a31953,
            mid_earlyTerminated_9aa4f33e82ea333f,
            mid_incVisitedCount_8226bd0b0fc13dba,
            mid_k_bd89ce15dad49192,
            mid_minCompetitiveSimilarity_8b62236f0e4d0dbc,
            mid_topDocs_ff559ee576f938cf,
            mid_visitLimit_0f176418e3e16541,
            mid_visitedCount_0f176418e3e16541,
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
