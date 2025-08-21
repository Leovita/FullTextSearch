#ifndef org_apache_lucene_search_SearcherLifetimeManager_H
#define org_apache_lucene_search_SearcherLifetimeManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SearcherLifetimeManager$Pruner;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class SearcherLifetimeManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_acquire_e8f9cedd5bd10d14,
            mid_close_3720c61b0679eb3e,
            mid_prune_ea40361ef342aa4e,
            mid_record_3d6bb50ad05caec0,
            mid_release_64fdfedb3d23d646,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherLifetimeManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherLifetimeManager(const SearcherLifetimeManager& obj) : ::java::lang::Object(obj) {}

          SearcherLifetimeManager();

          ::org::apache::lucene::search::IndexSearcher acquire(jlong) const;
          void close() const;
          void prune(const ::org::apache::lucene::search::SearcherLifetimeManager$Pruner &) const;
          jlong record(const ::org::apache::lucene::search::IndexSearcher &) const;
          void release(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherLifetimeManager);
        extern PyTypeObject *PY_TYPE(SearcherLifetimeManager);

        class t_SearcherLifetimeManager {
        public:
          PyObject_HEAD
          SearcherLifetimeManager object;
          static PyObject *wrap_Object(const SearcherLifetimeManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
