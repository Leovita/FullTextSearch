#ifndef org_apache_lucene_sandbox_facet_cutters_ranges_DoubleRangeFacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_ranges_DoubleRangeFacetCutter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class DoubleRange;
        }
        class MultiDoubleValuesSource;
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
          namespace cutters {
            namespace ranges {

              class DoubleRangeFacetCutter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_0b38806e29f8790b,
                  mid_createLeafCutter_3722fb0d3a7d3776,
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
