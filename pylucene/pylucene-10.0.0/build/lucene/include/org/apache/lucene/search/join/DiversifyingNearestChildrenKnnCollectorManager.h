#ifndef org_apache_lucene_search_join_DiversifyingNearestChildrenKnnCollectorManager_H
#define org_apache_lucene_search_join_DiversifyingNearestChildrenKnnCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
        namespace join {
          class BitSetProducer;
        }
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
        namespace join {

          class DiversifyingNearestChildrenKnnCollectorManager : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5b8f91c11a09f27b,
              mid_newCollector_7ffd49c5523c1db4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiversifyingNearestChildrenKnnCollectorManager(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiversifyingNearestChildrenKnnCollectorManager(const DiversifyingNearestChildrenKnnCollectorManager& obj) : ::java::lang::Object(obj) {}

            DiversifyingNearestChildrenKnnCollectorManager(jint, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::IndexSearcher &);

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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(DiversifyingNearestChildrenKnnCollectorManager);
          extern PyTypeObject *PY_TYPE(DiversifyingNearestChildrenKnnCollectorManager);

          class t_DiversifyingNearestChildrenKnnCollectorManager {
          public:
            PyObject_HEAD
            DiversifyingNearestChildrenKnnCollectorManager object;
            static PyObject *wrap_Object(const DiversifyingNearestChildrenKnnCollectorManager&);
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
