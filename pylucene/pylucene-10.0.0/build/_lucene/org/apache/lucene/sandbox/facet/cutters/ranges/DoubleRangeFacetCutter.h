#ifndef org_apache_lucene_sandbox_facet_cutters_ranges_DoubleRangeFacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_ranges_DoubleRangeFacetCutter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiDoubleValuesSource;
        namespace range {
          class DoubleRange;
        }
      }
      namespace sandbox {
        namespace facet {
          namespace cutters {
            class LeafFacetCutter;
            class FacetCutter;
          }
        }
      }
      namespace index {
        class LeafReaderContext;
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
          namespace cutters {
            namespace ranges {

              class DoubleRangeFacetCutter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_24da8a292fe712d8,
                  mid_createLeafCutter_54e08d9616e9005a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit DoubleRangeFacetCutter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                DoubleRangeFacetCutter(const DoubleRangeFacetCutter& obj) : ::java::lang::Object(obj) {}

                DoubleRangeFacetCutter(const ::org::apache::lucene::facet::MultiDoubleValuesSource &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);

                ::org::apache::lucene::sandbox::facet::cutters::LeafFacetCutter createLeafCutter(const ::org::apache::lucene::index::LeafReaderContext &) const;
              };
            }
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
            namespace ranges {
              extern PyType_Def PY_TYPE_DEF(DoubleRangeFacetCutter);
              extern PyTypeObject *PY_TYPE(DoubleRangeFacetCutter);

              class t_DoubleRangeFacetCutter {
              public:
                PyObject_HEAD
                DoubleRangeFacetCutter object;
                static PyObject *wrap_Object(const DoubleRangeFacetCutter&);
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
}

#endif
