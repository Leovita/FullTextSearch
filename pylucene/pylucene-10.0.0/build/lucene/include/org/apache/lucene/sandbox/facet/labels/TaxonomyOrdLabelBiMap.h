#ifndef org_apache_lucene_sandbox_facet_labels_TaxonomyOrdLabelBiMap_H
#define org_apache_lucene_sandbox_facet_labels_TaxonomyOrdLabelBiMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {
            class OrdToLabel;
            class LabelToOrd;
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
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
                mid_init$_aa1fb4865a80a44f,
                mid_getLabel_6c732e2e2e10e82a,
                mid_getLabels_08f83a8c8bc64590,
                mid_getOrd_36dd33e0173c4244,
                mid_getOrds_a339b1a8e9820a7b,
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
