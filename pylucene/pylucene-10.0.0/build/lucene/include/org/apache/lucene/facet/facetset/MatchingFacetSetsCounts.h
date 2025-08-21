#ifndef org_apache_lucene_facet_facetset_MatchingFacetSetsCounts_H
#define org_apache_lucene_facet_facetset_MatchingFacetSetsCounts_H

#include "org/apache/lucene/facet/FacetCountsWithFilterQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        namespace facetset {
          class FacetSetDecoder;
          class FacetSetMatcher;
        }
        class FacetResult;
      }
      namespace search {
        class Query;
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
        namespace facetset {

          class MatchingFacetSetsCounts : public ::org::apache::lucene::facet::FacetCountsWithFilterQuery {
           public:
            enum {
              mid_init$_441e3be7977026d5,
              mid_init$_a8d45cde2df1e661,
              mid_getAllChildren_51a67cf6dd940ebb,
              mid_getAllDims_3e47fe599d76d583,
              mid_getSpecificValue_7fd685ee82fd50c5,
              mid_getTopChildren_ca1b3747bbcc4341,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchingFacetSetsCounts(jobject obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchingFacetSetsCounts(const MatchingFacetSetsCounts& obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {}

            MatchingFacetSetsCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::facetset::FacetSetDecoder &, const JArray< ::org::apache::lucene::facet::facetset::FacetSetMatcher > &);
            MatchingFacetSetsCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::facetset::FacetSetDecoder &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::facetset::FacetSetMatcher > &);

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
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(MatchingFacetSetsCounts);
          extern PyTypeObject *PY_TYPE(MatchingFacetSetsCounts);

          class t_MatchingFacetSetsCounts {
          public:
            PyObject_HEAD
            MatchingFacetSetsCounts object;
            static PyObject *wrap_Object(const MatchingFacetSetsCounts&);
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
