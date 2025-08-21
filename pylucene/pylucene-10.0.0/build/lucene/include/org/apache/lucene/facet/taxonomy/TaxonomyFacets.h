#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
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
              mid_childrenLoaded_947277eca0748c4e,
              mid_getAllChildren_51a67cf6dd940ebb,
              mid_getAllDims_3e47fe599d76d583,
              mid_getSpecificValue_7fd685ee82fd50c5,
              mid_getTopChildren_ca1b3747bbcc4341,
              mid_getTopDims_3690552717f6ec88,
              mid_siblingsLoaded_947277eca0748c4e,
              mid_initializeValueCounters_3720c61b0679eb3e,
              mid_aggregate_a685481dd64af72c,
              mid_updateValueFromRollup_e13cff512ebda969,
              mid_getAggregationValue_13adcd87371d50e0,
              mid_makeTopOrdAndNumberQueue_eec4003abf81cdc5,
              mid_missingAggregationValue_1b3282bb4db06655,
              mid_setIncomingValue_bb7eb638460d3d2b,
              mid_newAggregatedValue_35b168b2ea0a0ab9,
              mid_setCount_e13cff512ebda969,
              mid_insertIntoQueue_eee3a8b6f6e6cdc1,
              mid_getTopChildrenForPath_4bcbbe397d3e9010,
              mid_getCount_3c9bba330f083871,
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
