#ifndef org_apache_lucene_facet_facetset_RangeFacetSetMatcher_H
#define org_apache_lucene_facet_facetset_RangeFacetSetMatcher_H

#include "org/apache/lucene/facet/facetset/FacetSetMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {
          class DimRange;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {

          class RangeFacetSetMatcher : public ::org::apache::lucene::facet::facetset::FacetSetMatcher {
           public:
            enum {
              mid_init$_5efcdcfb8f825811,
              mid_matches_7ded1ec63264c3c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeFacetSetMatcher(jobject obj) : ::org::apache::lucene::facet::facetset::FacetSetMatcher(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeFacetSetMatcher(const RangeFacetSetMatcher& obj) : ::org::apache::lucene::facet::facetset::FacetSetMatcher(obj) {}

            RangeFacetSetMatcher(const ::java::lang::String &, const JArray< ::org::apache::lucene::facet::facetset::DimRange > &);

            jboolean matches(const JArray< jlong > &) const;
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
          extern PyType_Def PY_TYPE_DEF(RangeFacetSetMatcher);
          extern PyTypeObject *PY_TYPE(RangeFacetSetMatcher);

          class t_RangeFacetSetMatcher {
          public:
            PyObject_HEAD
            RangeFacetSetMatcher object;
            static PyObject *wrap_Object(const RangeFacetSetMatcher&);
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
