#ifndef org_apache_lucene_sandbox_facet_cutters_FacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_FacetCutter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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

            class FacetCutter : public ::java::lang::Object {
             public:
              enum {
                mid_createLeafCutter_54e08d9616e9005a,
                mid_getChildrenOrds_1985361a9773a98f,
                mid_getOrdinalsToRollup_57cddf93ba106e9f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FacetCutter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FacetCutter(const FacetCutter& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(FacetCutter);
            extern PyTypeObject *PY_TYPE(FacetCutter);

            class t_FacetCutter {
            public:
              PyObject_HEAD
              FacetCutter object;
              static PyObject *wrap_Object(const FacetCutter&);
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
