#ifndef org_apache_lucene_facet_range_RangeFacetCounts_H
#define org_apache_lucene_facet_range_RangeFacetCounts_H

#include "org/apache/lucene/facet/FacetCountsWithFilterQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class RangeFacetCounts : public ::org::apache::lucene::facet::FacetCountsWithFilterQuery {
           public:
            enum {
              mid_getAllChildren_09e74013a1015c10,
              mid_getAllDims_b4b9401c877452e3,
              mid_getSpecificValue_a53782a5574e06b9,
              mid_getTopChildren_482e0070129e7ccc,
              mid_toString_e7df854526d67fa3,
              mid_setupCounter_06662848e661e0d1,
              mid_mapDocValue_3dc1c6e3a5a0baf0,
              mid_getLongRanges_9fb6e44e84feeef2,
              mid_count_2b1f4f2cb56352a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeFacetCounts(const RangeFacetCounts& obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {}

            ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(RangeFacetCounts);
          extern PyTypeObject *PY_TYPE(RangeFacetCounts);

          class t_RangeFacetCounts {
          public:
            PyObject_HEAD
            RangeFacetCounts object;
            static PyObject *wrap_Object(const RangeFacetCounts&);
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
