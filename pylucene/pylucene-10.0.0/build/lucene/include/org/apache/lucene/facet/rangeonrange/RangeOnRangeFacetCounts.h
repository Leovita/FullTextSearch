#ifndef org_apache_lucene_facet_rangeonrange_RangeOnRangeFacetCounts_H
#define org_apache_lucene_facet_rangeonrange_RangeOnRangeFacetCounts_H

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
        namespace rangeonrange {

          class RangeOnRangeFacetCounts : public ::org::apache::lucene::facet::FacetCountsWithFilterQuery {
           public:
            enum {
              mid_getAllChildren_09e74013a1015c10,
              mid_getAllDims_b4b9401c877452e3,
              mid_getSpecificValue_a53782a5574e06b9,
              mid_getTopChildren_482e0070129e7ccc,
              mid_count_110b244b3d60f5ed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeOnRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeOnRangeFacetCounts(const RangeOnRangeFacetCounts& obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {}

            ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
          extern PyType_Def PY_TYPE_DEF(RangeOnRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(RangeOnRangeFacetCounts);

          class t_RangeOnRangeFacetCounts {
          public:
            PyObject_HEAD
            RangeOnRangeFacetCounts object;
            static PyObject *wrap_Object(const RangeOnRangeFacetCounts&);
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
