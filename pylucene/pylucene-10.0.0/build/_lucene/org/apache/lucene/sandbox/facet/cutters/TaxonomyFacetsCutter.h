#ifndef org_apache_lucene_sandbox_facet_cutters_TaxonomyFacetsCutter_H
#define org_apache_lucene_sandbox_facet_cutters_TaxonomyFacetsCutter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {
            class OrdinalIterator;
          }
          namespace cutters {
            class LeafFacetCutter;
            class FacetCutter;
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
                mid_init$_baf42332c1ad3c78,
                mid_init$_215f1848c347334a,
                mid_createLeafCutter_54e08d9616e9005a,
                mid_getChildrenOrds_1985361a9773a98f,
                mid_getOrdinalsToRollup_57cddf93ba106e9f,
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
