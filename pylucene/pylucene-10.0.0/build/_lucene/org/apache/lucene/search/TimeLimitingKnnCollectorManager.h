#ifndef org_apache_lucene_search_TimeLimitingKnnCollectorManager_H
#define org_apache_lucene_search_TimeLimitingKnnCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class QueryTimeout;
        class LeafReaderContext;
      }
      namespace search {
        class KnnCollector;
        namespace knn {
          class KnnCollectorManager;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class TimeLimitingKnnCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_45a1b16fec6e201b,
            mid_getQueryTimeout_c564223390c8c408,
            mid_newCollector_7ffd49c5523c1db4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingKnnCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingKnnCollectorManager(const TimeLimitingKnnCollectorManager& obj) : ::java::lang::Object(obj) {}

          TimeLimitingKnnCollectorManager(const ::org::apache::lucene::search::knn::KnnCollectorManager &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::QueryTimeout getQueryTimeout() const;
          ::org::apache::lucene::search::KnnCollector newCollector(jint, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(TimeLimitingKnnCollectorManager);
        extern PyTypeObject *PY_TYPE(TimeLimitingKnnCollectorManager);

        class t_TimeLimitingKnnCollectorManager {
        public:
          PyObject_HEAD
          TimeLimitingKnnCollectorManager object;
          static PyObject *wrap_Object(const TimeLimitingKnnCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
