#ifndef org_apache_lucene_search_knn_KnnCollectorManager_H
#define org_apache_lucene_search_knn_KnnCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace knn {

          class KnnCollectorManager : public ::java::lang::Object {
           public:
            enum {
              mid_newCollector_7ffd49c5523c1db4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KnnCollectorManager(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KnnCollectorManager(const KnnCollectorManager& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(KnnCollectorManager);
          extern PyTypeObject *PY_TYPE(KnnCollectorManager);

          class t_KnnCollectorManager {
          public:
            PyObject_HEAD
            KnnCollectorManager object;
            static PyObject *wrap_Object(const KnnCollectorManager&);
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
