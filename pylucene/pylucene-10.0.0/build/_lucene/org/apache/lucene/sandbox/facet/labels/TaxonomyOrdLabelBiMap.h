#ifndef org_apache_lucene_sandbox_facet_labels_TaxonomyOrdLabelBiMap_H
#define org_apache_lucene_sandbox_facet_labels_TaxonomyOrdLabelBiMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {
            class LabelToOrd;
            class OrdToLabel;
          }
        }
      }
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
          class TaxonomyReader;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {

            class TaxonomyOrdLabelBiMap : public ::java::lang::Object {
             public:
              enum {
                mid_init$_330d850bbaa233f6,
                mid_getLabel_c21e0250a0465b0f,
                mid_getLabels_b0d0c4216ac45539,
                mid_getOrd_b886af148d2e9c5a,
                mid_getOrds_7d0bc717fafc6e60,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TaxonomyOrdLabelBiMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TaxonomyOrdLabelBiMap(const TaxonomyOrdLabelBiMap& obj) : ::java::lang::Object(obj) {}

              TaxonomyOrdLabelBiMap(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &);

              ::org::apache::lucene::facet::taxonomy::FacetLabel getLabel(jint) const;
              JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getLabels(const JArray< jint > &) const;
              jint getOrd(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              JArray< jint > getOrds(const JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > &) const;
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
          namespace labels {
            extern PyType_Def PY_TYPE_DEF(TaxonomyOrdLabelBiMap);
            extern PyTypeObject *PY_TYPE(TaxonomyOrdLabelBiMap);

            class t_TaxonomyOrdLabelBiMap {
            public:
              PyObject_HEAD
              TaxonomyOrdLabelBiMap object;
              static PyObject *wrap_Object(const TaxonomyOrdLabelBiMap&);
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
