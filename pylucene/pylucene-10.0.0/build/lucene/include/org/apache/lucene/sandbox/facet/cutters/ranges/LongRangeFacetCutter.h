#ifndef org_apache_lucene_sandbox_facet_cutters_ranges_LongRangeFacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_ranges_LongRangeFacetCutter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class LongRange;
        }
        class MultiLongValuesSource;
      }
      namespace sandbox {
        namespace facet {
          namespace cutters {
            class FacetCutter;
            namespace ranges {
              class LongRangeFacetCutter;
            }
          }
        }
      }
    }
  }
}
namespace java {
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

              class LongRangeFacetCutter : public ::java::lang::Object {
               public:
                enum {
                  mid_create_11f01e7657f21665,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit LongRangeFacetCutter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                LongRangeFacetCutter(const LongRangeFacetCutter& obj) : ::java::lang::Object(obj) {}

                static LongRangeFacetCutter create(const ::org::apache::lucene::facet::MultiLongValuesSource &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
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
              extern PyType_Def PY_TYPE_DEF(LongRangeFacetCutter);
              extern PyTypeObject *PY_TYPE(LongRangeFacetCutter);

              class t_LongRangeFacetCutter {
              public:
                PyObject_HEAD
                LongRangeFacetCutter object;
                static PyObject *wrap_Object(const LongRangeFacetCutter&);
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
