#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetLabels_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetLabels_H

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
      namespace facet {
        namespace taxonomy {
          class TaxonomyReader;
          class TaxonomyFacetLabels$FacetLabelReader;
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
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetLabels : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ecaea5d762768bf,
              mid_getFacetLabelReader_38bc4cd826806910,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetLabels(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetLabels(const TaxonomyFacetLabels& obj) : ::java::lang::Object(obj) {}

            TaxonomyFacetLabels(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::java::lang::String &);

            ::org::apache::lucene::facet::taxonomy::TaxonomyFacetLabels$FacetLabelReader getFacetLabelReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetLabels);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetLabels);

          class t_TaxonomyFacetLabels {
          public:
            PyObject_HEAD
            TaxonomyFacetLabels object;
            static PyObject *wrap_Object(const TaxonomyFacetLabels&);
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
