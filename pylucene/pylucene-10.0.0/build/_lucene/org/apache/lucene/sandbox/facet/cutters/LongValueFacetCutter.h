#ifndef org_apache_lucene_sandbox_facet_cutters_LongValueFacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_LongValueFacetCutter_H

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
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
      namespace sandbox {
        namespace facet {
          namespace cutters {
            class LeafFacetCutter;
            class FacetCutter;
          }
          namespace labels {
            class OrdToLabel;
          }
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

            class LongValueFacetCutter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0d82408c6e55bc30,
                mid_createLeafCutter_54e08d9616e9005a,
                mid_getLabel_c21e0250a0465b0f,
                mid_getLabels_b0d0c4216ac45539,
                mid_getValue_7b22650fccb5d574,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongValueFacetCutter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LongValueFacetCutter(const LongValueFacetCutter& obj) : ::java::lang::Object(obj) {}

              LongValueFacetCutter(const ::java::lang::String &);

              ::org::apache::lucene::sandbox::facet::cutters::LeafFacetCutter createLeafCutter(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::facet::taxonomy::FacetLabel getLabel(jint) const;
              JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getLabels(const JArray< jint > &) const;
              jlong getValue(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(LongValueFacetCutter);
            extern PyTypeObject *PY_TYPE(LongValueFacetCutter);

            class t_LongValueFacetCutter {
            public:
              PyObject_HEAD
              LongValueFacetCutter object;
              static PyObject *wrap_Object(const LongValueFacetCutter&);
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
