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
              mid_aggregate_49932d4e2173766c,
              mid_initializeValueCounters_e7bdbe105ce1bafb,
              mid_updateValueFromRollup_645c25455f5b9b1c,
              mid_getAggregationValue_fe1a54672f48742c,
              mid_setIncomingValue_6b82b4638c014b45,
              mid_newAggregatedValue_f1d9a76ae0906ed6,
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
