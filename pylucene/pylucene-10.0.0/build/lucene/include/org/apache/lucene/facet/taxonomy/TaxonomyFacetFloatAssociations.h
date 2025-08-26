#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetFloatAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetFloatAssociations_H

#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
      }
      namespace facet {
        class FacetsCollector;
        class FacetsConfig;
        namespace taxonomy {
          class AssociationAggregationFunction;
          class TaxonomyReader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetFloatAssociations : public ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets {
           public:
            enum {
              mid_init$_f22cc94af8b0ea34,
              mid_init$_2dd2d8537b5a1aaa,
              mid_init$_f019d0936d834f6d,
              mid_init$_6f99b08be794bb93,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetFloatAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetFloatAssociations(const TaxonomyFacetFloatAssociations& obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {}

            TaxonomyFacetFloatAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &);
            TaxonomyFacetFloatAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &);
            TaxonomyFacetFloatAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &, const ::org::apache::lucene::search::DoubleValuesSource &);
            TaxonomyFacetFloatAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &, const ::org::apache::lucene::search::DoubleValuesSource &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetFloatAssociations);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetFloatAssociations);

          class t_TaxonomyFacetFloatAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetFloatAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetFloatAssociations&);
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
