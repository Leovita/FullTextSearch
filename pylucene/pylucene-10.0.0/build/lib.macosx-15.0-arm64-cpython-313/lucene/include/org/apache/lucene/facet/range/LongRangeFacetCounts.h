#ifndef org_apache_lucene_facet_range_LongRangeFacetCounts_H
#define org_apache_lucene_facet_range_LongRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        namespace range {
          class LongRange;
        }
        class MultiLongValuesSource;
      }
      namespace search {
        class Query;
        class LongValuesSource;
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

          class LongRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
           public:
            enum {
              mid_init$_8f5e123f04f11f10,
              mid_init$_d05305d53b985598,
              mid_init$_a8e523c515e05de0,
              mid_init$_6ad4c917d04c105d,
              mid_init$_24734c4f89de860e,
              mid_getLongRanges_22b23276628e6c79,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRangeFacetCounts(const LongRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
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
          extern PyType_Def PY_TYPE_DEF(LongRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(LongRangeFacetCounts);

          class t_LongRangeFacetCounts {
          public:
            PyObject_HEAD
            LongRangeFacetCounts object;
            static PyObject *wrap_Object(const LongRangeFacetCounts&);
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
