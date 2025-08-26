#ifndef org_apache_lucene_facet_LongValueFacetCounts_H
#define org_apache_lucene_facet_LongValueFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiLongValuesSource;
        class FacetResult;
        class FacetsCollector;
      }
      namespace index {
        class IndexReader;
      }
      namespace search {
        class LongValuesSource;
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

        class LongValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_832cd877fa8a2e4a,
            mid_init$_c5a1ea708770acda,
            mid_init$_058fd46ce7ffc04f,
            mid_init$_de8d779d91238979,
            mid_init$_4144275663e50d9c,
            mid_init$_da06768c916e4abc,
            mid_getAllChildren_09e74013a1015c10,
            mid_getAllChildrenSortByValue_0e4ab2c1549f0b7d,
            mid_getAllDims_b4b9401c877452e3,
            mid_getSpecificValue_a53782a5574e06b9,
            mid_getTopChildren_482e0070129e7ccc,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValueFacetCounts(const LongValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::index::IndexReader &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::index::IndexReader &);

          ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getAllChildrenSortByValue() const;
          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(LongValueFacetCounts);
        extern PyTypeObject *PY_TYPE(LongValueFacetCounts);

        class t_LongValueFacetCounts {
        public:
          PyObject_HEAD
          LongValueFacetCounts object;
          static PyObject *wrap_Object(const LongValueFacetCounts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
