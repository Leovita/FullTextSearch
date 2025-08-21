#ifndef org_apache_lucene_facet_RandomSamplingFacetsCollector_H
#define org_apache_lucene_facet_RandomSamplingFacetsCollector_H

#include "org/apache/lucene/facet/FacetsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector$MatchingDocs;
        class RandomSamplingFacetsCollector;
        class FacetsConfig;
        class FacetResult;
      }
      namespace search {
        class CollectorManager;
        class IndexSearcher;
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
            mid_init$_540b2b23d51b1efd,
            mid_init$_52c53d6e59b40db2,
            mid_amortizeFacetCounts_8f00415b66cd6096,
            mid_createManager_17dfdb2952fcd444,
            mid_getMatchingDocs_36830460e10839eb,
            mid_getOriginalMatchingDocs_36830460e10839eb,
            mid_getSamplingRate_32caabaad86c508b,
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
