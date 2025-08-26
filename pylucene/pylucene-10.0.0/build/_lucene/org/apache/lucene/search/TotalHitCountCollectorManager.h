#ifndef org_apache_lucene_search_TotalHitCountCollectorManager_H
#define org_apache_lucene_search_TotalHitCountCollectorManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher$LeafSlice;
        class TotalHitCountCollector;
        class CollectorManager;
      }
    }
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
            mid_init$_dd362791bf4b1f4d,
            mid_newCollector_025d4ea1185a7039,
            mid_reduce_7e17721342cb1f8a,
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
