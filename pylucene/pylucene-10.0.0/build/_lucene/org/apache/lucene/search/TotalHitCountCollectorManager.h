#ifndef org_apache_lucene_search_TotalHitCountCollectorManager_H
#define org_apache_lucene_search_TotalHitCountCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher$LeafSlice;
        class CollectorManager;
        class TotalHitCountCollector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace util {
    class Collection;
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

        class TotalHitCountCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1f8ddea7e9e1162a,
            mid_newCollector_b9ea37526730faed,
            mid_reduce_6255297b76b88666,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHitCountCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHitCountCollectorManager(const TotalHitCountCollectorManager& obj) : ::java::lang::Object(obj) {}

          TotalHitCountCollectorManager(const JArray< ::org::apache::lucene::search::IndexSearcher$LeafSlice > &);

          ::org::apache::lucene::search::TotalHitCountCollector newCollector() const;
          ::java::lang::Integer reduce(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(TotalHitCountCollectorManager);
        extern PyTypeObject *PY_TYPE(TotalHitCountCollectorManager);

        class t_TotalHitCountCollectorManager {
        public:
          PyObject_HEAD
          TotalHitCountCollectorManager object;
          static PyObject *wrap_Object(const TotalHitCountCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
