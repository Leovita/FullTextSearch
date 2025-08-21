#ifndef org_apache_lucene_facet_taxonomy_FastTaxonomyFacetCounts_H
#define org_apache_lucene_facet_taxonomy_FastTaxonomyFacetCounts_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        class FacetsConfig;
        namespace taxonomy {
          class TaxonomyReader;
        }
      }
      namespace index {
        class IndexReader;
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

          class FastTaxonomyFacetCounts : public ::org::apache::lucene::facet::taxonomy::TaxonomyFacets {
           public:
            enum {
              mid_init$_140d16cdc0ae250f,
              mid_init$_adfda06004418f78,
              mid_init$_29333cd1239d802d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastTaxonomyFacetCounts(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastTaxonomyFacetCounts(const FastTaxonomyFacetCounts& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {}

            FastTaxonomyFacetCounts(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            FastTaxonomyFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            FastTaxonomyFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &);
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
          extern PyType_Def PY_TYPE_DEF(FastTaxonomyFacetCounts);
          extern PyTypeObject *PY_TYPE(FastTaxonomyFacetCounts);

          class t_FastTaxonomyFacetCounts {
          public:
            PyObject_HEAD
            FastTaxonomyFacetCounts object;
            static PyObject *wrap_Object(const FastTaxonomyFacetCounts&);
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
