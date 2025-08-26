#ifndef org_apache_lucene_facet_DrillSideways$DrillSidewaysResult_H
#define org_apache_lucene_facet_DrillSideways$DrillSidewaysResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class Facets;
        class FacetsCollector;
      }
      namespace search {
        class TopDocs;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class DrillSideways$DrillSidewaysResult : public ::java::lang::Object {
         public:
          enum {
            mid_init$_573174568a27ecbf,
            max_mid
          };

          enum {
            fid_drillDownFacetsCollector,
            fid_drillSidewaysDims,
            fid_drillSidewaysFacetsCollector,
            fid_facets,
            fid_hits,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways$DrillSidewaysResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillSideways$DrillSidewaysResult(const DrillSideways$DrillSidewaysResult& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::facet::FacetsCollector _get_drillDownFacetsCollector() const;
          JArray< ::java::lang::String > _get_drillSidewaysDims() const;
          JArray< ::org::apache::lucene::facet::FacetsCollector > _get_drillSidewaysFacetsCollector() const;
          ::org::apache::lucene::facet::Facets _get_facets() const;
          ::org::apache::lucene::search::TopDocs _get_hits() const;

          DrillSideways$DrillSidewaysResult(const ::org::apache::lucene::facet::Facets &, const ::org::apache::lucene::search::TopDocs &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::FacetsCollector > &, const JArray< ::java::lang::String > &);
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
        extern PyType_Def PY_TYPE_DEF(DrillSideways$DrillSidewaysResult);
        extern PyTypeObject *PY_TYPE(DrillSideways$DrillSidewaysResult);

        class t_DrillSideways$DrillSidewaysResult {
        public:
          PyObject_HEAD
          DrillSideways$DrillSidewaysResult object;
          static PyObject *wrap_Object(const DrillSideways$DrillSidewaysResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
