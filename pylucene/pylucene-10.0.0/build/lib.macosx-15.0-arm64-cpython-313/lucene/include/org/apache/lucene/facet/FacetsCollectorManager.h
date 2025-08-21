#ifndef org_apache_lucene_facet_FacetsCollectorManager_H
#define org_apache_lucene_facet_FacetsCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        class FacetsCollectorManager;
        class FacetsCollectorManager$FacetsResult;
      }
      namespace search {
        class Query;
        class Sort;
        class ScoreDoc;
        class CollectorManager;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace facet {

        class FacetsCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_b110fc3a58c081ab,
            mid_newCollector_02cd9b76c139803e,
            mid_reduce_dab92e9a249ea918,
            mid_search_c8aa6e4c8e8e0613,
            mid_search_a7d65dfe44f65341,
            mid_search_692ff16b79eccfab,
            mid_searchAfter_8e5973e9c1dc4416,
            mid_searchAfter_fde5d5e4d9a30b6b,
            mid_searchAfter_d70ad203010d75e9,
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
