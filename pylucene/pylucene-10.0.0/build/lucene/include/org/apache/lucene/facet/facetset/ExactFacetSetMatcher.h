#ifndef org_apache_lucene_facet_facetset_ExactFacetSetMatcher_H
#define org_apache_lucene_facet_facetset_ExactFacetSetMatcher_H

#include "org/apache/lucene/facet/facetset/FacetSetMatcher.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {
          class FacetSet;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {

          class ExactFacetSetMatcher : public ::org::apache::lucene::facet::facetset::FacetSetMatcher {
           public:
            enum {
              mid_init$_0dea033fd72a8b82,
              mid_matches_287940c60e46342c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExactFacetSetMatcher(jobject obj) : ::org::apache::lucene::facet::facetset::FacetSetMatcher(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ExactFacetSetMatcher(const ExactFacetSetMatcher& obj) : ::org::apache::lucene::facet::facetset::FacetSetMatcher(obj) {}

            ExactFacetSetMatcher(const ::java::lang::String &, const ::org::apache::lucene::facet::facetset::FacetSet &);

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
          extern PyType_Def PY_TYPE_DEF(ExactFacetSetMatcher);
          extern PyTypeObject *PY_TYPE(ExactFacetSetMatcher);

          class t_ExactFacetSetMatcher {
          public:
            PyObject_HEAD
            ExactFacetSetMatcher object;
            static PyObject *wrap_Object(const ExactFacetSetMatcher&);
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
