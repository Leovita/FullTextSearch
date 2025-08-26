#ifndef org_apache_lucene_sandbox_facet_cutters_TaxonomyFacetsCutter_H
#define org_apache_lucene_sandbox_facet_cutters_TaxonomyFacetsCutter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace cutters {
            class LeafFacetCutter;
            class FacetCutter;
          }
          namespace iterators {
            class OrdinalIterator;
          }
        }
      }
      namespace facet {
        class FacetsConfig;
        namespace taxonomy {
          class TaxonomyReader;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace cutters {

            class TaxonomyFacetsCutter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_133f0f6d0dfa5122,
                mid_init$_0c2ead5468f27484,
                mid_createLeafCutter_3722fb0d3a7d3776,
                mid_getChildrenOrds_e78e488c1d146775,
                mid_getOrdinalsToRollup_8b96a93b5acb34cf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TaxonomyFacetsCutter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TaxonomyFacetsCutter(const TaxonomyFacetsCutter& obj) : ::java::lang::Object(obj) {}

              TaxonomyFacetsCutter(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &);
              TaxonomyFacetsCutter(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, jboolean);

              ::org::apache::lucene::sandbox::facet::cutters::LeafFacetCutter createLeafCutter(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator getChildrenOrds(jint) const;
              ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator getOrdinalsToRollup() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace cutters {
            extern PyType_Def PY_TYPE_DEF(TaxonomyFacetsCutter);
            extern PyTypeObject *PY_TYPE(TaxonomyFacetsCutter);

            class t_TaxonomyFacetsCutter {
            public:
              PyObject_HEAD
              TaxonomyFacetsCutter object;
              static PyObject *wrap_Object(const TaxonomyFacetsCutter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
