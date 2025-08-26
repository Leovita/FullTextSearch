#ifndef org_apache_lucene_facet_range_LongRangeFacetCounts_H
#define org_apache_lucene_facet_range_LongRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiLongValuesSource;
        class FacetsCollector;
        namespace range {
          class LongRange;
        }
      }
      namespace search {
        class Query;
        class LongValuesSource;
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
        namespace range {

          class LongRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
           public:
            enum {
              mid_init$_10f9c32a7ad49af0,
              mid_init$_e176ab60598717a3,
              mid_init$_3427bbac0db18a64,
              mid_init$_b581f97417f45be5,
              mid_init$_d650e510d245056a,
              mid_getLongRanges_9fb6e44e84feeef2,
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
