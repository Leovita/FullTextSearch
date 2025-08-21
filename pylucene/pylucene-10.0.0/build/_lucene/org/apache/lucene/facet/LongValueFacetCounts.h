#ifndef org_apache_lucene_facet_LongValueFacetCounts_H
#define org_apache_lucene_facet_LongValueFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        class FacetResult;
        class MultiLongValuesSource;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class LongValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_3ab6a17715252fc2,
            mid_init$_bc3224030714f7c9,
            mid_init$_a6096ffb2883efd4,
            mid_init$_2fcf1bb4a255817c,
            mid_init$_f3fafa8be634dcb8,
            mid_init$_fa9f15202070e381,
            mid_getAllChildren_51a67cf6dd940ebb,
            mid_getAllChildrenSortByValue_df947f9f4eed427d,
            mid_getAllDims_3e47fe599d76d583,
            mid_getSpecificValue_7fd685ee82fd50c5,
            mid_getTopChildren_ca1b3747bbcc4341,
            mid_toString_09a7afff1868fc5e,
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
