#ifndef org_apache_lucene_facet_FacetsCollectorManager_H
#define org_apache_lucene_facet_FacetsCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollectorManager$FacetsResult;
        class FacetsCollector;
        class FacetsCollectorManager;
      }
      namespace search {
        class Query;
        class Sort;
        class ScoreDoc;
        class IndexSearcher;
        class CollectorManager;
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
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_f5dd97eebf6a215a,
            mid_newCollector_081a27111876aa7f,
            mid_reduce_a801423856f8c38a,
            mid_search_f280a7d8d8892695,
            mid_search_dce8264924f34816,
            mid_search_2d59866d255ddfcf,
            mid_searchAfter_53dbb599cbe4a33d,
            mid_searchAfter_dddcd5beb6b75c19,
            mid_searchAfter_ff6f22bb9e1361a2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollectorManager(const FacetsCollectorManager& obj) : ::java::lang::Object(obj) {}

          FacetsCollectorManager();
          FacetsCollectorManager(jboolean);

          ::org::apache::lucene::facet::FacetsCollector newCollector() const;
          ::org::apache::lucene::facet::FacetsCollector reduce(const ::java::util::Collection &) const;
          static ::org::apache::lucene::facet::FacetsCollectorManager$FacetsResult search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const FacetsCollectorManager &);
          static ::org::apache::lucene::facet::FacetsCollectorManager$FacetsResult search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, const FacetsCollectorManager &);
          static ::org::apache::lucene::facet::FacetsCollectorManager$FacetsResult search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean, const FacetsCollectorManager &);
          static ::org::apache::lucene::facet::FacetsCollectorManager$FacetsResult searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const FacetsCollectorManager &);
          static ::org::apache::lucene::facet::FacetsCollectorManager$FacetsResult searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, const FacetsCollectorManager &);
          static ::org::apache::lucene::facet::FacetsCollectorManager$FacetsResult searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean, const FacetsCollectorManager &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollectorManager);
        extern PyTypeObject *PY_TYPE(FacetsCollectorManager);

        class t_FacetsCollectorManager {
        public:
          PyObject_HEAD
          FacetsCollectorManager object;
          static PyObject *wrap_Object(const FacetsCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
