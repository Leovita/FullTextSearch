#ifndef org_apache_lucene_sandbox_facet_cutters_LongValueFacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_LongValueFacetCutter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {
            class OrdToLabel;
          }
          namespace cutters {
            class LeafFacetCutter;
            class FacetCutter;
          }
        }
      }
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
      namespace index {
        class LeafReaderContext;
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
      namespace sandbox {
        namespace facet {
          namespace cutters {

            class LongValueFacetCutter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ee46a189998009d6,
                mid_createLeafCutter_3722fb0d3a7d3776,
                mid_getLabel_6c732e2e2e10e82a,
                mid_getLabels_08f83a8c8bc64590,
                mid_getValue_49af390f180d8ee7,
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
