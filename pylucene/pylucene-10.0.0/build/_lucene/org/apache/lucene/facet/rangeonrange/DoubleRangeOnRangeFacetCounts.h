#ifndef org_apache_lucene_facet_rangeonrange_DoubleRangeOnRangeFacetCounts_H
#define org_apache_lucene_facet_rangeonrange_DoubleRangeOnRangeFacetCounts_H

#include "org/apache/lucene/facet/rangeonrange/RangeOnRangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace rangeonrange {
          class DoubleRange;
        }
        class FacetsCollector;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class RangeFieldQuery$QueryType;
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
        namespace rangeonrange {

          class DoubleRangeOnRangeFacetCounts : public ::org::apache::lucene::facet::rangeonrange::RangeOnRangeFacetCounts {
           public:
            enum {
              mid_init$_8308fdc7cd62eeda,
              mid_init$_9d092f180040305d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeOnRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::rangeonrange::RangeOnRangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeOnRangeFacetCounts(const DoubleRangeOnRangeFacetCounts& obj) : ::org::apache::lucene::facet::rangeonrange::RangeOnRangeFacetCounts(obj) {}

            DoubleRangeOnRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::document::RangeFieldQuery$QueryType &, const JArray< ::org::apache::lucene::facet::rangeonrange::DoubleRange > &);
            DoubleRangeOnRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::document::RangeFieldQuery$QueryType &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::rangeonrange::DoubleRange > &);
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
        namespace rangeonrange {
          extern PyType_Def PY_TYPE_DEF(DoubleRangeOnRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(DoubleRangeOnRangeFacetCounts);

          class t_DoubleRangeOnRangeFacetCounts {
          public:
            PyObject_HEAD
            DoubleRangeOnRangeFacetCounts object;
            static PyObject *wrap_Object(const DoubleRangeOnRangeFacetCounts&);
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
