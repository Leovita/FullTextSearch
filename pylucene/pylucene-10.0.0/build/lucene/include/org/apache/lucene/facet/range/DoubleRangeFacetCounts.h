#ifndef org_apache_lucene_facet_range_DoubleRangeFacetCounts_H
#define org_apache_lucene_facet_range_DoubleRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        class MultiDoubleValuesSource;
        namespace range {
          class DoubleRange;
        }
      }
      namespace search {
        class Query;
        class DoubleValuesSource;
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
        namespace range {

          class DoubleRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
           public:
            enum {
              mid_init$_75a35598735a5248,
              mid_init$_f0a85446da50bd70,
              mid_init$_3824d41cf31f7dca,
              mid_init$_53bfc58d8a3024da,
              mid_init$_ed4c4b80f497994d,
              mid_getLongRanges_22b23276628e6c79,
              mid_mapDocValue_91d66fa3ea476cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeFacetCounts(const DoubleRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiDoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiDoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
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
        namespace range {
          extern PyType_Def PY_TYPE_DEF(DoubleRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(DoubleRangeFacetCounts);

          class t_DoubleRangeFacetCounts {
          public:
            PyObject_HEAD
            DoubleRangeFacetCounts object;
            static PyObject *wrap_Object(const DoubleRangeFacetCounts&);
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
