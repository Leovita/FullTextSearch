#ifndef org_apache_lucene_facet_range_RangeFacetCounts_H
#define org_apache_lucene_facet_range_RangeFacetCounts_H

#include "org/apache/lucene/facet/FacetCountsWithFilterQuery.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
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
              mid_getAllChildren_51a67cf6dd940ebb,
              mid_getAllDims_3e47fe599d76d583,
              mid_getSpecificValue_7fd685ee82fd50c5,
              mid_getTopChildren_ca1b3747bbcc4341,
              mid_toString_09a7afff1868fc5e,
              mid_getLongRanges_22b23276628e6c79,
              mid_setupCounter_b2f458b9a105cda7,
              mid_mapDocValue_91d66fa3ea476cea,
              mid_count_3b582520f99b8484,
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
