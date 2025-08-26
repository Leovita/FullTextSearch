#ifndef org_apache_lucene_search_knn_TopKnnCollectorManager_H
#define org_apache_lucene_search_knn_TopKnnCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
        namespace knn {
          class KnnCollectorManager;
        }
        class IndexSearcher;
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
        namespace knn {

          class TopKnnCollectorManager : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0dd802825543d336,
              mid_newCollector_7ffd49c5523c1db4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TopKnnCollectorManager(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TopKnnCollectorManager(const TopKnnCollectorManager& obj) : ::java::lang::Object(obj) {}

            TopKnnCollectorManager(jint, const ::org::apache::lucene::search::IndexSearcher &);

            ::org::apache::lucene::search::KnnCollector newCollector(jint, const ::org::apache::lucene::index::LeafReaderContext &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace knn {
          extern PyType_Def PY_TYPE_DEF(TopKnnCollectorManager);
          extern PyTypeObject *PY_TYPE(TopKnnCollectorManager);

          class t_TopKnnCollectorManager {
          public:
            PyObject_HEAD
            TopKnnCollectorManager object;
            static PyObject *wrap_Object(const TopKnnCollectorManager&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
