#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetLabels$FacetLabelReader_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetLabels$FacetLabelReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class TaxonomyFacetLabels;
          class FacetLabel;
        }
      }
      namespace index {
        class SortedNumericDocValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetLabels$FacetLabelReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bcc4796ab12bc201,
              mid_nextFacetLabel_6c732e2e2e10e82a,
              mid_nextFacetLabel_35435fb6afc8ab40,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetLabels$FacetLabelReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetLabels$FacetLabelReader(const TaxonomyFacetLabels$FacetLabelReader& obj) : ::java::lang::Object(obj) {}

            TaxonomyFacetLabels$FacetLabelReader(const ::org::apache::lucene::facet::taxonomy::TaxonomyFacetLabels &, const ::org::apache::lucene::index::SortedNumericDocValues &);

            ::org::apache::lucene::facet::taxonomy::FacetLabel nextFacetLabel(jint) const;
            ::org::apache::lucene::facet::taxonomy::FacetLabel nextFacetLabel(jint, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetLabels$FacetLabelReader);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetLabels$FacetLabelReader);

          class t_TaxonomyFacetLabels$FacetLabelReader {
          public:
            PyObject_HEAD
            TaxonomyFacetLabels$FacetLabelReader object;
            static PyObject *wrap_Object(const TaxonomyFacetLabels$FacetLabelReader&);
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
