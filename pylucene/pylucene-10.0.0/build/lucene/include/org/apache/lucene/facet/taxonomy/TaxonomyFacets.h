#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
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
        namespace taxonomy {

          class TaxonomyFacets : public ::org::apache::lucene::facet::Facets {
           public:
            enum {
              mid_childrenLoaded_9aa4f33e82ea333f,
              mid_getAllChildren_09e74013a1015c10,
              mid_getAllDims_b4b9401c877452e3,
              mid_getSpecificValue_a53782a5574e06b9,
              mid_getTopChildren_482e0070129e7ccc,
              mid_getTopDims_6d7644d6c0697519,
              mid_siblingsLoaded_9aa4f33e82ea333f,
              mid_aggregate_49932d4e2173766c,
              mid_getTopChildrenForPath_4ed8006dd60ef26d,
              mid_setCount_645c25455f5b9b1c,
              mid_initializeValueCounters_e7bdbe105ce1bafb,
              mid_updateValueFromRollup_645c25455f5b9b1c,
              mid_getAggregationValue_fe1a54672f48742c,
              mid_makeTopOrdAndNumberQueue_16acc16a07b97b58,
              mid_missingAggregationValue_b9665294ea488d3c,
              mid_setIncomingValue_6b82b4638c014b45,
              mid_newAggregatedValue_f1d9a76ae0906ed6,
              mid_insertIntoQueue_ec7198876d19b11c,
              mid_getCount_a3904e10f5bb9437,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacets(const TaxonomyFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            jboolean childrenLoaded() const;
            ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getTopDims(jint, jint) const;
            jboolean siblingsLoaded() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacets);
          extern PyTypeObject *PY_TYPE(TaxonomyFacets);

          class t_TaxonomyFacets {
          public:
            PyObject_HEAD
            TaxonomyFacets object;
            static PyObject *wrap_Object(const TaxonomyFacets&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
