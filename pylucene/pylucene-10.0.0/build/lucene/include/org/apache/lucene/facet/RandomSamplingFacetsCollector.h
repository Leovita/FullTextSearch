#ifndef org_apache_lucene_facet_RandomSamplingFacetsCollector_H
#define org_apache_lucene_facet_RandomSamplingFacetsCollector_H

#include "org/apache/lucene/facet/FacetsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
        class RandomSamplingFacetsCollector;
        class FacetsCollector$MatchingDocs;
        class FacetsConfig;
      }
      namespace search {
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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class RandomSamplingFacetsCollector : public ::org::apache::lucene::facet::FacetsCollector {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_init$_1d43622e571bd043,
            mid_amortizeFacetCounts_643318eaad256a08,
            mid_createManager_a67b6142fcc6ca09,
            mid_getMatchingDocs_1387e1e2702ac173,
            mid_getOriginalMatchingDocs_1387e1e2702ac173,
            mid_getSamplingRate_6fb37e123fed7a1f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomSamplingFacetsCollector(jobject obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RandomSamplingFacetsCollector(const RandomSamplingFacetsCollector& obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {}

          RandomSamplingFacetsCollector(jint);
          RandomSamplingFacetsCollector(jint, jlong);

          ::org::apache::lucene::facet::FacetResult amortizeFacetCounts(const ::org::apache::lucene::facet::FacetResult &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::IndexSearcher &) const;
          static ::org::apache::lucene::search::CollectorManager createManager(jint, jlong);
          ::java::util::List getMatchingDocs() const;
          ::java::util::List getOriginalMatchingDocs() const;
          jdouble getSamplingRate() const;
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
        extern PyType_Def PY_TYPE_DEF(RandomSamplingFacetsCollector);
        extern PyTypeObject *PY_TYPE(RandomSamplingFacetsCollector);

        class t_RandomSamplingFacetsCollector {
        public:
          PyObject_HEAD
          RandomSamplingFacetsCollector object;
          static PyObject *wrap_Object(const RandomSamplingFacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
