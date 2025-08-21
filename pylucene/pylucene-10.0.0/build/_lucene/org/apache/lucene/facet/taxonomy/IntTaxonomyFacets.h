#ifndef org_apache_lucene_facet_taxonomy_IntTaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_IntTaxonomyFacets_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyFacets.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class IntTaxonomyFacets : public ::org::apache::lucene::facet::taxonomy::TaxonomyFacets {
           public:
            enum {
              mid_initializeValueCounters_3720c61b0679eb3e,
              mid_aggregate_a685481dd64af72c,
              mid_updateValueFromRollup_e13cff512ebda969,
              mid_getAggregationValue_13adcd87371d50e0,
              mid_setIncomingValue_bb7eb638460d3d2b,
              mid_newAggregatedValue_35b168b2ea0a0ab9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntTaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntTaxonomyFacets(const IntTaxonomyFacets& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(IntTaxonomyFacets);
          extern PyTypeObject *PY_TYPE(IntTaxonomyFacets);

          class t_IntTaxonomyFacets {
          public:
            PyObject_HEAD
            IntTaxonomyFacets object;
            static PyObject *wrap_Object(const IntTaxonomyFacets&);
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
