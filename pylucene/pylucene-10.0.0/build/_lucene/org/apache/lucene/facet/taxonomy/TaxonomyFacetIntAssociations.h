#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetIntAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetIntAssociations_H

#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        namespace taxonomy {
          class AssociationAggregationFunction;
          class TaxonomyReader;
        }
        class FacetsConfig;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetIntAssociations : public ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets {
           public:
            enum {
              mid_init$_a08fdb7e87d8c1a4,
              mid_init$_b1f2dd1d90d1f879,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetIntAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetIntAssociations(const TaxonomyFacetIntAssociations& obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {}

            TaxonomyFacetIntAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &);
            TaxonomyFacetIntAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetIntAssociations);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetIntAssociations);

          class t_TaxonomyFacetIntAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetIntAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetIntAssociations&);
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
