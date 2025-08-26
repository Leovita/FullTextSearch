#ifndef org_apache_lucene_facet_DrillSideways_H
#define org_apache_lucene_facet_DrillSideways_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class DrillSideways$ConcurrentDrillSidewaysResult;
        class DrillDownQuery;
        class DrillSideways$DrillSidewaysResult;
        class FacetsConfig;
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
        namespace taxonomy {
          class TaxonomyReader;
        }
        class DrillSideways$Result;
      }
      namespace search {
        class Query;
        class FieldDoc;
        class Sort;
        class ScoreDoc;
        class CollectorManager;
        class IndexSearcher;
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
    namespace concurrent {
      class ExecutorService;
    }
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class DrillSideways : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d1a979243e340b5a,
            mid_init$_dc22c8118c9ff056,
            mid_init$_d2bec1169bf18fe1,
            mid_init$_ffcdbfc988384b68,
            mid_search_5e85c6c751005958,
            mid_search_127ab00c00d4922b,
            mid_search_7d3e2a448768df24,
            mid_search_679ec3ac0b7c0199,
            mid_search_3d473473647109d4,
            mid_scoreSubDocsAtOnce_9aa4f33e82ea333f,
            mid_createDrillDownFacetsCollectorManager_cc64f03137799bc3,
            mid_createDrillSidewaysFacetsCollectorManager_cc64f03137799bc3,
            mid_buildFacetsResult_1493baac4094820c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillSideways(const DrillSideways& obj) : ::java::lang::Object(obj) {}

          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::java::util::concurrent::ExecutorService &);

          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$ConcurrentDrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::CollectorManager &) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$Result search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::CollectorManager &, const ::java::util::List &) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::FieldDoc &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(DrillSideways);
        extern PyTypeObject *PY_TYPE(DrillSideways);

        class t_DrillSideways {
        public:
          PyObject_HEAD
          DrillSideways object;
          static PyObject *wrap_Object(const DrillSideways&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
