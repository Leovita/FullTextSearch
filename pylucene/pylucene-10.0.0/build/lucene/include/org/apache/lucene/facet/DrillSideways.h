#ifndef org_apache_lucene_facet_DrillSideways_H
#define org_apache_lucene_facet_DrillSideways_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class Sort;
        class FieldDoc;
        class ScoreDoc;
        class CollectorManager;
        class IndexSearcher;
      }
      namespace facet {
        class DrillSideways$DrillSidewaysResult;
        class DrillSideways$Result;
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
        class FacetsConfig;
        namespace taxonomy {
          class TaxonomyReader;
        }
        class DrillSideways$ConcurrentDrillSidewaysResult;
        class DrillDownQuery;
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
  namespace util {
    class List;
    namespace concurrent {
      class ExecutorService;
    }
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
            mid_init$_cf611e020b3c52c1,
            mid_init$_f310bcb2548fc889,
            mid_init$_00969b7ac9189067,
            mid_init$_b7aa8201d4550337,
            mid_search_1371bc7d4b62e858,
            mid_search_a6c360875b6e3b3a,
            mid_search_458e307233d87f30,
            mid_search_06d1b1a315043f1e,
            mid_search_f88dac844e13a920,
            mid_scoreSubDocsAtOnce_947277eca0748c4e,
            mid_createDrillDownFacetsCollectorManager_d2fb57a37cba0e7e,
            mid_createDrillSidewaysFacetsCollectorManager_d2fb57a37cba0e7e,
            mid_buildFacetsResult_47053deb2dee2479,
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
